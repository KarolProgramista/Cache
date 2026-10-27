// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_cache__pch.h"

Vtb_cache__Syms::Vtb_cache__Syms(VerilatedContext* contextp, const char* namep, Vtb_cache* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(832);
    // Setup sub module instances
    TOP____024unit__03a__03acache_driver__Vclpkg.ctor(this, "$unit::cache_driver__Vclpkg");
    TOP____024unit__03a__03acache_monitor__Vclpkg.ctor(this, "$unit::cache_monitor__Vclpkg");
    TOP____024unit__03a__03acache_scoreboard__Vclpkg.ctor(this, "$unit::cache_scoreboard__Vclpkg");
    TOP____024unit__03a__03acache_transaction__Vclpkg.ctor(this, "$unit::cache_transaction__Vclpkg");
    TOP____024unit.ctor(this, "$unit");
    TOP__std.ctor(this, "std");
    TOP__tb_cache__DOT__cif.ctor(this, "tb_cache.cif");
    TOP__std__03a__03amailbox__Tz1__Vclpkg.ctor(this, "std::mailbox__Tz1__Vclpkg");
    TOP__std__03a__03aprocess__Vclpkg.ctor(this, "std::process__Vclpkg");
    TOP__std__03a__03asemaphore__Vclpkg.ctor(this, "std::semaphore__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03acache_driver__Vclpkg = &TOP____024unit__03a__03acache_driver__Vclpkg;
    TOP.__024unit__03a__03acache_monitor__Vclpkg = &TOP____024unit__03a__03acache_monitor__Vclpkg;
    TOP.__024unit__03a__03acache_scoreboard__Vclpkg = &TOP____024unit__03a__03acache_scoreboard__Vclpkg;
    TOP.__024unit__03a__03acache_transaction__Vclpkg = &TOP____024unit__03a__03acache_transaction__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__std = &TOP__std;
    TOP.__PVT__tb_cache__DOT__cif = &TOP__tb_cache__DOT__cif;
    TOP.std__03a__03amailbox__Tz1__Vclpkg = &TOP__std__03a__03amailbox__Tz1__Vclpkg;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03acache_driver__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03acache_monitor__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03acache_scoreboard__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03acache_transaction__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__tb_cache__DOT__cif.__Vconfigure(true);
    TOP__std__03a__03amailbox__Tz1__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
    // Setup scopes
}

Vtb_cache__Syms::~Vtb_cache__Syms() {
    if (__Vm_dumping) _traceDumpClose();
    // Tear down scopes
    // Tear down sub module instances
    TOP__std__03a__03asemaphore__Vclpkg.dtor();
    TOP__std__03a__03aprocess__Vclpkg.dtor();
    TOP__std__03a__03amailbox__Tz1__Vclpkg.dtor();
    TOP__tb_cache__DOT__cif.dtor();
    TOP__std.dtor();
    TOP____024unit.dtor();
    TOP____024unit__03a__03acache_transaction__Vclpkg.dtor();
    TOP____024unit__03a__03acache_scoreboard__Vclpkg.dtor();
    TOP____024unit__03a__03acache_monitor__Vclpkg.dtor();
    TOP____024unit__03a__03acache_driver__Vclpkg.dtor();
}

void Vtb_cache__Syms::_traceDump() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_cache__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        const std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_cache__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock{__Vm_dumperMutex};
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}
