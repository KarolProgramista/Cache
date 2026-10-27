/* verilator lint_off WIDTHTRUNC */
typedef class cache_transaction;

module tb_cache;
    logic clk = 0;
    always #5 clk = ~clk;

    cache_if cif(clk);

    cache dut (
        .addr(cif.addr), .cpuDataIn(cif.cpuDataIn), .cpuDataOut(cif.cpuDataOut),
        .memAddr(cif.memAddr), .memDataIn(cif.memDataIn), .memDataOut(cif.memDataOut),
        .we(cif.we), .memWe(cif.memWe),
        .request(cif.request), .ready(cif.ready),
        .clk(cif.clk), .reset(cif.reset)
    );

    dummy_ram ram(cif.RAM);
    
    mailbox #(cache_transaction) gen2drv_mbx = new();
    mailbox #(cache_transaction) mon2scb_mbx = new();

    cache_driver drv;
    cache_monitor mon;
    cache_scoreboard scb;
    cache_generator gen;

    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, tb_cache);
    end

    initial begin
        gen = new(gen2drv_mbx, 50);
        drv = new(cif.TB, gen2drv_mbx);
        mon = new(cif.TB, mon2scb_mbx);
        scb = new(mon2scb_mbx);
    
        fork
            gen.run();
            drv.run();
            mon.run();
            scb.run();
        join_none

        cif.reset = 1;
        #10
        cif.reset = 0;
        @(posedge clk);
        $display ("Hello world %0h", ram.mem[10]);
        // Po zakończeniu generowania transakcji i odczekaniu cykli
        #500;

        $display("\n=======================================================");
        $display("               VERIFICATION SUMMARY                    ");
        $display("=======================================================");
        $display(" TOTAL MATCHES : %0d", scb.match_count);
        $display(" TOTAL ERRORS  : %0d", scb.error_count);

        if (scb.error_count == 0 && scb.match_count > 0) begin
            $display(" OVERALL STATUS: >>> TEST PASSED <<<");
        end else begin
            $display(" OVERALL STATUS: >>> TEST FAILED <<<");
        end
        $display("=======================================================\n");

        $finish;
    end
endmodule
