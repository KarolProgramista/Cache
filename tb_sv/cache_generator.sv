/* verilator lint_off WIDTHTRUNC */
typedef class cache_transaction;

class cache_generator;
    mailbox #(cache_transaction) gen2drv_mbx;
    int transaction_count = 20;

    function new(mailbox #(cache_transaction) mbx, int count);
        this.gen2drv_mbx = mbx;
        this.transaction_count = count;
    endfunction

    task run();
        cache_transaction tr;

        repeat (transaction_count) begin
            tr = new();

            if (!tr.randomize()) begin
                $fatal("[%0t] [GENERATOR] Randomization failed!", $time);
            end

            tr.display("GENERATOR");
            gen2drv_mbx.put(tr);
        end
    endtask
endclass
