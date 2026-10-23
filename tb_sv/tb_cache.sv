module tb_cache;
    logic [15:0] addr;
    logic [15:0] cpuDataIn;
    logic [15:0] cpuDataOut;
    logic [15:0] memAddr;
    logic [15:0] memDataIn;
    logic [15:0] memDataOut;
    logic we;
    logic memWe;
    logic request;
    logic ready;
    logic clk;
    logic reset;

    cache dut (
        .addr(addr), .cpuDataIn(cpuDataIn), .cpuDataOut(cpuDataOut),
        .memAddr(memAddr), .memDataIn(memDataIn), .memDataOut(memDataOut),
        .we(we), .memWe(memWe),
        .request(request), .ready(ready),
        .clk(clk), .reset(reset)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, tb_cache);
    end

    initial begin
        reset = 1;
        #10
        reset = 0;
        @(posedge clk);
        $display ("Hello world");
        $finish;
    end
endmodule
