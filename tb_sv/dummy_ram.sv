
module dummy_ram (cache_if.RAM ram_if);
    logic [15:0] mem [1023];

    assign ram_if.memDataIn = mem[ram_if.memAddr[9:0]];

    initial begin
        foreach (mem[i]) begin
            mem[i] = 16'h1000 + 16'(i);
        end
    end

    always_ff @(posedge ram_if.clk) begin
        if (ram_if.memWe)
            mem[ram_if.memAddr[9:0]] <= ram_if.memDataOut;
    end

endmodule
