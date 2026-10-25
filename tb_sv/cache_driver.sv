typedef class cache_transaction;

class cache_driver;
    virtual cache_if.TB vif;

    mailbox #(cache_transaction) gen2drv_mbx;

    function new(virtual cache_if.TB vif, mailbox #(cache_transaction) mbx);
        this.vif = vif;
        this.gen2drv_mbx = mbx;
    endfunction

    task run();
        cache_transaction tr;
        forever begin
            gen2drv_mbx.get(tr);
            drive_transaction(tr); 
        end
    endtask

    task drive_transaction(cache_transaction tr);
        @(posedge vif.clk);
        vif.addr <= tr.addr;
        vif.cpuDataIn <= tr.dataIn;
        vif.we <= tr.we;
        vif.request <= tr.request;

        do begin
            @(posedge vif.clk);
        end while (vif.ready !== 1'b1);

        vif.request <= 1'b0;
    endtask

endclass
