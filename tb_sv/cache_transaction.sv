class cache_transaction;
    rand logic [15:0] addr;
    rand logic [15:0] dataIn;
    rand logic we;

    logic request;

    logic ready;
    logic [15:0] dataOut;

    constraint addr_range_c {
        addr inside {[16'h0 : 16'h3FF]};
    }

    constraint op_dist_c {
        we dist {1'b0 := 70, 1'b1 := 30};
        request == 1'b1;
    }


    function void display (string tag);
        $display("[%0t][%s] REQ=%0b | TYPE=%s | WDATA=0x%0h | ADDR=0x%0h | RDATA=0x%0h | READY=%0b",
            $time, tag, request, (we ? "W" : "R"), dataIn, addr, dataOut, ready);
    endfunction
endclass
