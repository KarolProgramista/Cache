// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cache.h for the primary calling header

#ifndef VERILATED_VTB_CACHE___024ROOT_H_
#define VERILATED_VTB_CACHE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_cache___024unit;
class Vtb_cache___024unit__03a__03acache_driver;
class Vtb_cache___024unit__03a__03acache_driver__Vclpkg;
class Vtb_cache___024unit__03a__03acache_monitor;
class Vtb_cache___024unit__03a__03acache_monitor__Vclpkg;
class Vtb_cache___024unit__03a__03acache_scoreboard;
class Vtb_cache___024unit__03a__03acache_scoreboard__Vclpkg;
class Vtb_cache___024unit__03a__03acache_transaction__Vclpkg;
class Vtb_cache_cache_if;
class Vtb_cache_std;
class Vtb_cache_std__03a__03amailbox__Tz1;
class Vtb_cache_std__03a__03amailbox__Tz1__Vclpkg;
class Vtb_cache_std__03a__03aprocess__Vclpkg;
class Vtb_cache_std__03a__03asemaphore__Vclpkg;


class Vtb_cache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cache___024root final {
  public:
    // CELLS
    Vtb_cache___024unit* __PVT____024unit;
    Vtb_cache_std* __PVT__std;
    Vtb_cache_cache_if* __PVT__tb_cache__DOT__cif;
    Vtb_cache___024unit__03a__03acache_driver__Vclpkg* __024unit__03a__03acache_driver__Vclpkg;
    Vtb_cache___024unit__03a__03acache_monitor__Vclpkg* __024unit__03a__03acache_monitor__Vclpkg;
    Vtb_cache___024unit__03a__03acache_scoreboard__Vclpkg* __024unit__03a__03acache_scoreboard__Vclpkg;
    Vtb_cache___024unit__03a__03acache_transaction__Vclpkg* __024unit__03a__03acache_transaction__Vclpkg;
    Vtb_cache_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vtb_cache_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    Vtb_cache_std__03a__03amailbox__Tz1__Vclpkg* std__03a__03amailbox__Tz1__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_cache__DOT__clk;
    CData/*0:0*/ tb_cache__DOT____Vcellout__dut__ready;
    CData/*0:0*/ tb_cache__DOT____Vcellout__dut__memWe;
    CData/*0:0*/ tb_cache__DOT__dut__DOT____Vlvbound_hfc3ada70__0;
    CData/*0:0*/ tb_cache__DOT__dut__DOT____Vlvbound_h10b5c599__1;
    CData/*0:0*/ tb_cache__DOT__dut__DOT____Vlvbound_h10b5c599__0;
    CData/*1:0*/ tb_cache__DOT__dut__DOT__word_counter;
    CData/*0:0*/ tb_cache__DOT__dut__DOT__hit;
    CData/*5:0*/ tb_cache__DOT__dut__DOT__memory_address;
    CData/*5:0*/ tb_cache__DOT__dut__DOT__counted_memory_address;
    CData/*1:0*/ tb_cache__DOT__dut__DOT__state;
    CData/*0:0*/ __VnbaEventTrigger;
    CData/*0:0*/ __VvifTrigger_hdfb65203__0_Vtrigm_clk;
    CData/*0:0*/ __VvifTrigger_hdfb65203__1_Vtrigm_ready;
    CData/*0:0*/ __VvifTrigger_hdfb65203__2_Vtrigm_cpuDataOut;
    CData/*0:0*/ __VvifTrigger_hdfb65203__3_Vtrigm_addr;
    CData/*0:0*/ __VvifTrigger_hdfb65203__4_Vtrigm_cpuDataIn;
    CData/*0:0*/ __VvifTrigger_hdfb65203__5_Vtrigm_we;
    CData/*0:0*/ __VvifTrigger_hdfb65203__6_Vtrigm_request;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cache__DOT__cif__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cache__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb_cache__DOT____Vcellout__dut__memDataOut;
    SData/*15:0*/ tb_cache__DOT____Vcellout__dut__memAddr;
    SData/*15:0*/ tb_cache__DOT____Vcellout__dut__cpuDataOut;
    SData/*9:0*/ tb_cache__DOT__dut__DOT____Vlvbound_h33490012__0;
    SData/*15:0*/ tb_cache__DOT__ram__DOT____Vlvbound_h9e8dbf45__0;
    SData/*15:0*/ tb_cache__DOT__ram__DOT____Vlvbound_h2aa7d32c__0;
    IData/*31:0*/ tb_cache__DOT__dut__DOT__i;
    IData/*31:0*/ tb_cache__DOT__dut__DOT__j;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<SData/*15:0*/, 64> tb_cache__DOT__dut__DOT__memory_blocks;
    VlUnpacked<SData/*9:0*/, 15> tb_cache__DOT__dut__DOT__tags;
    VlUnpacked<CData/*0:0*/, 15> tb_cache__DOT__dut__DOT__valid;
    VlUnpacked<CData/*0:0*/, 15> tb_cache__DOT__dut__DOT__dirty;
    VlUnpacked<SData/*15:0*/, 1023> tb_cache__DOT__ram__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 2> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc39d9794__0;
    VlDynamicTriggerScheduler __VdynSched;
    VlEvent __VnbaEvent;
    VlClassRef<Vtb_cache_std__03a__03amailbox__Tz1> tb_cache__DOT__gen2drv_mbx;
    VlClassRef<Vtb_cache_std__03a__03amailbox__Tz1> tb_cache__DOT__mon2scb_mbx;
    VlClassRef<Vtb_cache___024unit__03a__03acache_driver> tb_cache__DOT__drv;
    VlClassRef<Vtb_cache___024unit__03a__03acache_monitor> tb_cache__DOT__mon;
    VlClassRef<Vtb_cache___024unit__03a__03acache_scoreboard> tb_cache__DOT__scb;

    // INTERNAL VARIABLES
    Vtb_cache__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cache___024root(Vtb_cache__Syms* symsp, const char* namep);
    ~Vtb_cache___024root();
    VL_UNCOPYABLE(Vtb_cache___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
