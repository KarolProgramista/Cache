interface cache_if (input logic clk);
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
    logic reset;

    modport TB (
        input clk, cpuDataOut, ready,
        output addr, cpuDataIn, we, request, reset
    );

    modport DUT (
        input clk, addr, cpuDataIn, we, request, reset, memDataIn,
        output cpuDataOut, ready, memAddr, memDataOut, memWe
    );

    modport RAM (
        input clk, memAddr, memDataOut, memWe,
        output memDataIn
    );

endinterface
