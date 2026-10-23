import cocotb
from cocotb.triggers import FallingEdge, Timer, RisingEdge, ReadOnly
from cocotb.clock import Clock

STATES = ["IDLE", "LOOKUP", "FETCH", "REPLACE"]
READY = ["WORKING", "READY"]

RAM = [0xDEAD, 0xBEEF, 0xAAAA, 0xBBBB]


async def fetch(dut, address, verbose=False):
    while not int(dut.ready.value):
        await RisingEdge(dut.clk)

    await FallingEdge(dut.clk)

    dut.addr.value = address
    dut.request.value = 1
    dut.we.value = 0
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.request.value = 0

    while int(dut.ready.value) != 1:
        await RisingEdge(dut.clk)
        await ReadOnly()
        if verbose:
            print(
                f"{STATES[int(dut.state.value)]}:{
                    READY[int(dut.ready.value)]
                } - MemAddr: {dut.memAddr.value}, cpuDataOut: {
                    hex(dut.cpuDataOut.value)
                }"
            )

        await FallingEdge(dut.clk)
        if not int(dut.memWe.value):
            dut.memDataIn.value = RAM[int(dut.memAddr.value) % 4]
        else:
            print(
                f"Memory write: {dut.memAddr.value},{
                    dut.counted_memory_address.value
                }: {hex(dut.memDataOut.value)}"
            )

    return int(dut.cpuDataOut.value)


async def push(dut, address, data, verbose=False):
    while not int(dut.ready.value):
        await RisingEdge(dut.clk)
        await ReadOnly()

    await FallingEdge(dut.clk)
    dut.addr.value = address
    dut.request.value = 1
    dut.we.value = 1
    dut.cpuDataIn.value = data
    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.request.value = 0

    while int(dut.ready.value) != 1:
        await RisingEdge(dut.clk)
        await ReadOnly()
        mem_block_addr = (
            dut.counted_memory_address.value
            if int(dut.counted_memory_address.value) > 0
            else dut.memory_address.value
        )
        if verbose:
            print(
                f"{STATES[int(dut.state.value)]}:{
                    READY[int(dut.ready.value)]
                } - MemAddr: {dut.memAddr.value}, memoryBlockAddr: {
                    hex(mem_block_addr)
                }"
            )
        await FallingEdge(dut.clk)
        if not int(dut.memWe.value):
            dut.memDataIn.value = RAM[int(dut.memAddr.value) % 4]
        else:
            print(f"Memory write: {dut.memAddr.value}: {hex(dut.memDataOut.value)}")


@cocotb.test()
async def test_cache(dut):
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    await RisingEdge(dut.clk)
    await FallingEdge(dut.clk)
    dut.reset.value = 1
    await FallingEdge(dut.clk)

    dut.reset.value = 0
    dut.addr.value = 0x0001
    dut.tags[0].value = 0
    dut.valid[0].value = 1
    dut.memory_blocks[1].value = 0xBEEF

    await fetch(dut, 0xF000, verbose=False)
    print([hex(dut.memory_blocks[i].value) for i in range(4)])
    await push(dut, 0xF000, 0xCCCC, verbose=False)
    print([hex(dut.memory_blocks[i].value) for i in range(4)])
    await fetch(dut, 0x0001, verbose=True)
