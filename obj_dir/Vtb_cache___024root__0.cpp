// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache.h for the primary calling header

#include "Vtb_cache__pch.h"

VL_ATTR_COLD void Vtb_cache___024root___eval_initial__TOP(Vtb_cache___024root* vlSelf);
VlCoroutine Vtb_cache___024root___eval_initial__TOP__Vtiming__0(Vtb_cache___024root* vlSelf);
VlCoroutine Vtb_cache___024root___eval_initial__TOP__Vtiming__1(Vtb_cache___024root* vlSelf);

void Vtb_cache___024root___eval_initial(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_initial\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cache___024root___eval_initial__TOP(vlSelf);
    Vtb_cache___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cache___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_cache___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vtb_cache___024root* vlSelf);
VlCoroutine Vtb_cache___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vtb_cache___024root* vlSelf);
VlCoroutine Vtb_cache___024root___eval_initial__TOP__Vtiming__0____Vfork_1__2(Vtb_cache___024root* vlSelf);
void Vtb_cache___024root____VbeforeTrig_hc39d9794__0(Vtb_cache___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_cache___024root___eval_initial__TOP__Vtiming__0(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cache__DOT__drv = VL_NEW(Vtb_cache___024unit__03a__03acache_driver, vlSymsp, (&vlSymsp->TOP__tb_cache__DOT__cif), vlSelfRef.tb_cache__DOT__gen2drv_mbx);
    vlSelfRef.tb_cache__DOT__mon = VL_NEW(Vtb_cache___024unit__03a__03acache_monitor, vlSymsp, (&vlSymsp->TOP__tb_cache__DOT__cif), vlSelfRef.tb_cache__DOT__mon2scb_mbx);
    vlSelfRef.tb_cache__DOT__scb = VL_NEW(Vtb_cache___024unit__03a__03acache_scoreboard, vlSymsp, vlSelfRef.tb_cache__DOT__mon2scb_mbx);
    Vtb_cache___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(vlSelf);
    Vtb_cache___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(vlSelf);
    Vtb_cache___024root___eval_initial__TOP__Vtiming__0____Vfork_1__2(vlSelf);
    vlSymsp->TOP__tb_cache__DOT__cif.reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_sv/tb_cache.sv", 
                                         43);
    vlSymsp->TOP__tb_cache__DOT__cif.reset = 0U;
    Vtb_cache___024root____VbeforeTrig_hc39d9794__0(vlSelf, 
                                                    "@(posedge tb_cache.clk)");
    co_await vlSelfRef.__VtrigSched_hc39d9794__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cache.clk)", 
                                                         "tb_sv/tb_cache.sv", 
                                                         45);
    VL_WRITEF_NX("Hello world %0x\n",0,16,vlSelfRef.tb_cache__DOT__ram__DOT__mem[10U]);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "tb_sv/tb_cache.sv", 
                                         48);
    VL_WRITEF_NX("\n=======================================================\n               VERIFICATION SUMMARY                    \n=======================================================\n TOTAL MATCHES : %0d\n TOTAL ERRORS  : %0d\n",0,
                 32,VL_NULL_CHECK(vlSelfRef.tb_cache__DOT__scb, "tb_sv/tb_cache.sv", 53)
                 ->__PVT__match_count,32,VL_NULL_CHECK(vlSelfRef.tb_cache__DOT__scb, "tb_sv/tb_cache.sv", 54)
                 ->__PVT__error_count);
    if (((0U == VL_NULL_CHECK(vlSelfRef.tb_cache__DOT__scb, "tb_sv/tb_cache.sv", 56)
          ->__PVT__error_count) && VL_LTS_III(32, 0U, VL_NULL_CHECK(vlSelfRef.tb_cache__DOT__scb, "tb_sv/tb_cache.sv", 56)
                                              ->__PVT__match_count))) {
        VL_WRITEF_NX(" OVERALL STATUS: >>> TEST PASSED <<<\n",0);
    } else {
        VL_WRITEF_NX(" OVERALL STATUS: >>> TEST FAILED <<<\n",0);
    }
    VL_WRITEF_NX("=======================================================\n\n",0);
    VL_FINISH_MT("tb_sv/tb_cache.sv", 63, "");
    co_return;
}

VlCoroutine Vtb_cache___024root___eval_initial__TOP__Vtiming__0____Vfork_1__2(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_initial__TOP__Vtiming__0____Vfork_1__2\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xffffffffffffffffULL, 
                                         nullptr, "tb_sv/tb_cache.sv", 
                                         36);
    co_await VL_NULL_CHECK(vlSelfRef.tb_cache__DOT__scb, "tb_sv/tb_cache.sv", 39)->__VnoInFunc_run(vlSymsp);
    co_return;
}

VlCoroutine Vtb_cache___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xffffffffffffffffULL, 
                                         nullptr, "tb_sv/tb_cache.sv", 
                                         36);
    co_await VL_NULL_CHECK(vlSelfRef.tb_cache__DOT__mon, "tb_sv/tb_cache.sv", 38)->__VnoInFunc_run(vlSymsp);
    co_return;
}

VlCoroutine Vtb_cache___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xffffffffffffffffULL, 
                                         nullptr, "tb_sv/tb_cache.sv", 
                                         36);
    co_await VL_NULL_CHECK(vlSelfRef.tb_cache__DOT__drv, "tb_sv/tb_cache.sv", 37)->__VnoInFunc_run(vlSymsp);
    co_return;
}

VlCoroutine Vtb_cache___024root___eval_initial__TOP__Vtiming__1(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb_sv/tb_cache.sv", 
                                             5);
        vlSelfRef.tb_cache__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_cache__DOT__clk)));
    }
    co_return;
}

void Vtb_cache___024root___eval_triggers_vec__ico(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_triggers_vec__ico\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffff7fULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_hdfb65203__6_Vtrigm_request)) 
                                        << 7U));
    vlSelfRef.__VvifTrigger_hdfb65203__6_Vtrigm_request = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffbfULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_hdfb65203__5_Vtrigm_we)) 
                                        << 6U));
    vlSelfRef.__VvifTrigger_hdfb65203__5_Vtrigm_we = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffdfULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_hdfb65203__4_Vtrigm_cpuDataIn)) 
                                        << 5U));
    vlSelfRef.__VvifTrigger_hdfb65203__4_Vtrigm_cpuDataIn = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xffffffffffffffefULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_hdfb65203__3_Vtrigm_addr)) 
                                        << 4U));
    vlSelfRef.__VvifTrigger_hdfb65203__3_Vtrigm_addr = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffff7ULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_hdfb65203__2_Vtrigm_cpuDataOut)) 
                                        << 3U));
    vlSelfRef.__VvifTrigger_hdfb65203__2_Vtrigm_cpuDataOut = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_hdfb65203__1_Vtrigm_ready)) 
                                        << 2U));
    vlSelfRef.__VvifTrigger_hdfb65203__1_Vtrigm_ready = 0U;
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_hdfb65203__0_Vtrigm_clk)) 
                                        << 1U));
    vlSelfRef.__VvifTrigger_hdfb65203__0_Vtrigm_clk = 0U;
}

bool Vtb_cache___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cache___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_cache___024root___eval_phase__ico(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_phase__ico\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cache___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cache___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_cache___024root___eval_triggers_vec__act(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_triggers_vec__act\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[1U] = ((0xffffffffffffffbfULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_hdfb65203__6_Vtrigm_request)) 
                                        << 6U));
    vlSelfRef.__VvifTrigger_hdfb65203__6_Vtrigm_request = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xffffffffffffffdfULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_hdfb65203__5_Vtrigm_we)) 
                                        << 5U));
    vlSelfRef.__VvifTrigger_hdfb65203__5_Vtrigm_we = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xffffffffffffffefULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_hdfb65203__4_Vtrigm_cpuDataIn)) 
                                        << 4U));
    vlSelfRef.__VvifTrigger_hdfb65203__4_Vtrigm_cpuDataIn = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffff7ULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_hdfb65203__3_Vtrigm_addr)) 
                                        << 3U));
    vlSelfRef.__VvifTrigger_hdfb65203__3_Vtrigm_addr = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_hdfb65203__2_Vtrigm_cpuDataOut)) 
                                        << 2U));
    vlSelfRef.__VvifTrigger_hdfb65203__2_Vtrigm_cpuDataOut = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | ((QData)((IData)(vlSelfRef.__VvifTrigger_hdfb65203__1_Vtrigm_ready)) 
                                        << 1U));
    vlSelfRef.__VvifTrigger_hdfb65203__1_Vtrigm_ready = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VactTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VvifTrigger_hdfb65203__0_Vtrigm_clk)));
    vlSelfRef.__VvifTrigger_hdfb65203__0_Vtrigm_clk = 0U;
    vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,4, 
                                                 (((vlSelfRef.__VdynSched.evaluate() 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.tb_cache__DOT__clk) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache__DOT__clk__0))) 
                                                      << 2U)) 
                                                  | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache__DOT__cif__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache__DOT__cif__clk__0 
        = vlSymsp->TOP__tb_cache__DOT__cif.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache__DOT__clk__0 
        = vlSelfRef.tb_cache__DOT__clk;
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool Vtb_cache___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtb_cache___024root___act_sequent__TOP__0(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___act_sequent__TOP__0\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    ([&]() {
            vlSelfRef.__VvifTrigger_hdfb65203__0_Vtrigm_clk = 1U;
        }(), vlSymsp->TOP__tb_cache__DOT__cif.clk) 
        = vlSelfRef.tb_cache__DOT__clk;
}

void Vtb_cache___024root___eval_act(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_act\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_cache___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_cache___024root___nba_sequent__TOP__0(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___nba_sequent__TOP__0\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__tb_cache__DOT__dut__DOT__word_counter;
    __Vdly__tb_cache__DOT__dut__DOT__word_counter = 0;
    SData/*15:0*/ __Vdly__tb_cache__DOT____Vcellout__dut__memAddr;
    __Vdly__tb_cache__DOT____Vcellout__dut__memAddr = 0;
    CData/*1:0*/ __Vdly__tb_cache__DOT__dut__DOT__state;
    __Vdly__tb_cache__DOT__dut__DOT__state = 0;
    CData/*1:0*/ __VdlyMask__tb_cache__DOT__dut__DOT__state;
    __VdlyMask__tb_cache__DOT__dut__DOT__state = 0;
    CData/*0:0*/ __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v0;
    __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v1;
    __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v1 = 0;
    SData/*15:0*/ __VdlyVal__tb_cache__DOT__dut__DOT__memory_blocks__v64;
    __VdlyVal__tb_cache__DOT__dut__DOT__memory_blocks__v64 = 0;
    CData/*5:0*/ __VdlyDim0__tb_cache__DOT__dut__DOT__memory_blocks__v64;
    __VdlyDim0__tb_cache__DOT__dut__DOT__memory_blocks__v64 = 0;
    CData/*0:0*/ __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v64;
    __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v64 = 0;
    CData/*0:0*/ __VdlyVal__tb_cache__DOT__dut__DOT__dirty__v15;
    __VdlyVal__tb_cache__DOT__dut__DOT__dirty__v15 = 0;
    CData/*3:0*/ __VdlyDim0__tb_cache__DOT__dut__DOT__dirty__v15;
    __VdlyDim0__tb_cache__DOT__dut__DOT__dirty__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cache__DOT__dut__DOT__dirty__v15;
    __VdlySet__tb_cache__DOT__dut__DOT__dirty__v15 = 0;
    SData/*9:0*/ __VdlyVal__tb_cache__DOT__dut__DOT__tags__v15;
    __VdlyVal__tb_cache__DOT__dut__DOT__tags__v15 = 0;
    CData/*3:0*/ __VdlyDim0__tb_cache__DOT__dut__DOT__tags__v15;
    __VdlyDim0__tb_cache__DOT__dut__DOT__tags__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cache__DOT__dut__DOT__tags__v15;
    __VdlySet__tb_cache__DOT__dut__DOT__tags__v15 = 0;
    CData/*0:0*/ __VdlyVal__tb_cache__DOT__dut__DOT__valid__v15;
    __VdlyVal__tb_cache__DOT__dut__DOT__valid__v15 = 0;
    CData/*3:0*/ __VdlyDim0__tb_cache__DOT__dut__DOT__valid__v15;
    __VdlyDim0__tb_cache__DOT__dut__DOT__valid__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_cache__DOT__dut__DOT__valid__v15;
    __VdlySet__tb_cache__DOT__dut__DOT__valid__v15 = 0;
    SData/*15:0*/ __VdlyVal__tb_cache__DOT__dut__DOT__memory_blocks__v65;
    __VdlyVal__tb_cache__DOT__dut__DOT__memory_blocks__v65 = 0;
    CData/*5:0*/ __VdlyDim0__tb_cache__DOT__dut__DOT__memory_blocks__v65;
    __VdlyDim0__tb_cache__DOT__dut__DOT__memory_blocks__v65 = 0;
    CData/*0:0*/ __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v65;
    __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v65 = 0;
    SData/*15:0*/ __VdlyVal__tb_cache__DOT__dut__DOT__memory_blocks__v66;
    __VdlyVal__tb_cache__DOT__dut__DOT__memory_blocks__v66 = 0;
    CData/*5:0*/ __VdlyDim0__tb_cache__DOT__dut__DOT__memory_blocks__v66;
    __VdlyDim0__tb_cache__DOT__dut__DOT__memory_blocks__v66 = 0;
    CData/*0:0*/ __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v66;
    __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v66 = 0;
    CData/*0:0*/ __VdlyVal__tb_cache__DOT__dut__DOT__dirty__v16;
    __VdlyVal__tb_cache__DOT__dut__DOT__dirty__v16 = 0;
    CData/*3:0*/ __VdlyDim0__tb_cache__DOT__dut__DOT__dirty__v16;
    __VdlyDim0__tb_cache__DOT__dut__DOT__dirty__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_cache__DOT__dut__DOT__dirty__v16;
    __VdlySet__tb_cache__DOT__dut__DOT__dirty__v16 = 0;
    SData/*15:0*/ __VdlyVal__tb_cache__DOT__ram__DOT__mem__v0;
    __VdlyVal__tb_cache__DOT__ram__DOT__mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_cache__DOT__ram__DOT__mem__v0;
    __VdlyDim0__tb_cache__DOT__ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cache__DOT__ram__DOT__mem__v0;
    __VdlySet__tb_cache__DOT__ram__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    __Vdly__tb_cache__DOT__dut__DOT__word_counter = vlSelfRef.tb_cache__DOT__dut__DOT__word_counter;
    __Vdly__tb_cache__DOT____Vcellout__dut__memAddr 
        = vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr;
    __VdlySet__tb_cache__DOT__dut__DOT__dirty__v15 = 0U;
    __VdlySet__tb_cache__DOT__dut__DOT__dirty__v16 = 0U;
    __VdlySet__tb_cache__DOT__dut__DOT__tags__v15 = 0U;
    __VdlySet__tb_cache__DOT__dut__DOT__valid__v15 = 0U;
    __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v64 = 0U;
    __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v65 = 0U;
    __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v66 = 0U;
    __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v0 = 0U;
    __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v1 = 0U;
    __VdlySet__tb_cache__DOT__ram__DOT__mem__v0 = 0U;
    if (vlSelfRef.tb_cache__DOT____Vcellout__dut__memWe) {
        vlSelfRef.tb_cache__DOT__ram__DOT____Vlvbound_h9e8dbf45__0 
            = vlSelfRef.tb_cache__DOT____Vcellout__dut__memDataOut;
        if ((0x03feU >= (0x000003ffU & (IData)(vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr)))) {
            __VdlyVal__tb_cache__DOT__ram__DOT__mem__v0 
                = vlSelfRef.tb_cache__DOT__ram__DOT____Vlvbound_h9e8dbf45__0;
            __VdlyDim0__tb_cache__DOT__ram__DOT__mem__v0 
                = (0x000003ffU & (IData)(vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr));
            __VdlySet__tb_cache__DOT__ram__DOT__mem__v0 = 1U;
        }
    }
    if (vlSymsp->TOP__tb_cache__DOT__cif.reset) {
        vlSelfRef.tb_cache__DOT__dut__DOT__j = 4U;
        vlSelfRef.tb_cache__DOT__dut__DOT__i = 0x00000010U;
        vlSelfRef.tb_cache__DOT__dut__DOT__state = 0U;
        __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v0 = 1U;
        __Vdly__tb_cache__DOT__dut__DOT__word_counter = 0U;
        vlSelfRef.tb_cache__DOT____Vcellout__dut__memWe = 0U;
        vlSelfRef.tb_cache__DOT____Vcellout__dut__ready = 1U;
        vlSelfRef.tb_cache__DOT____Vcellout__dut__cpuDataOut = 0U;
        __Vdly__tb_cache__DOT____Vcellout__dut__memAddr = 0U;
        vlSelfRef.tb_cache__DOT____Vcellout__dut__memDataOut = 0U;
        __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v1 = 1U;
    } else if ((2U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))) {
            if (((0x0eU >= (0x0000000fU & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                           >> 2U))) 
                 && vlSelfRef.tb_cache__DOT__dut__DOT__dirty
                 [(0x0000000fU & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                  >> 2U))])) {
                __Vdly__tb_cache__DOT____Vcellout__dut__memAddr 
                    = (0x0000ffffU & ((VL_SHIFTL_III(16,16,32, 
                                                     ((0x0eU 
                                                       >= 
                                                       (0x0000000fU 
                                                        & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                                           >> 2U)))
                                                       ? vlSelfRef.tb_cache__DOT__dut__DOT__tags
                                                      [
                                                      (0x0000000fU 
                                                       & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                                          >> 2U))]
                                                       : 0U), 6U) 
                                       | VL_SHIFTL_III(16,16,32, 
                                                       (0x0000000fU 
                                                        & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                                           >> 2U)), 2U)) 
                                      | (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__word_counter)));
                vlSelfRef.tb_cache__DOT____Vcellout__dut__memWe = 1U;
                vlSelfRef.tb_cache__DOT____Vcellout__dut__memDataOut 
                    = vlSelfRef.tb_cache__DOT__dut__DOT__memory_blocks
                    [vlSelfRef.tb_cache__DOT__dut__DOT__counted_memory_address];
            }
            __VdlyVal__tb_cache__DOT__dut__DOT__memory_blocks__v64 
                = vlSymsp->TOP__tb_cache__DOT__cif.memDataIn;
            __VdlyDim0__tb_cache__DOT__dut__DOT__memory_blocks__v64 
                = vlSelfRef.tb_cache__DOT__dut__DOT__counted_memory_address;
            __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v64 = 1U;
            if ((3U > (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__word_counter))) {
                __Vdly__tb_cache__DOT__dut__DOT__word_counter 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__word_counter)));
                __Vdly__tb_cache__DOT__dut__DOT__state = 2U;
                __VdlyMask__tb_cache__DOT__dut__DOT__state = 3U;
            } else {
                vlSelfRef.tb_cache__DOT__dut__DOT____Vlvbound_h10b5c599__1 
                    = vlSymsp->TOP__tb_cache__DOT__cif.we;
                vlSelfRef.tb_cache__DOT__dut__DOT____Vlvbound_h33490012__0 
                    = (0x000003ffU & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                      >> 6U));
                vlSelfRef.tb_cache__DOT__dut__DOT____Vlvbound_hfc3ada70__0 = 1U;
                __Vdly__tb_cache__DOT__dut__DOT__word_counter = 0U;
                __Vdly__tb_cache__DOT__dut__DOT__state = 0U;
                __VdlyMask__tb_cache__DOT__dut__DOT__state = 3U;
                if ((0x0eU >= (0x0000000fU & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                              >> 2U)))) {
                    __VdlyVal__tb_cache__DOT__dut__DOT__dirty__v15 
                        = vlSelfRef.tb_cache__DOT__dut__DOT____Vlvbound_h10b5c599__1;
                    __VdlyDim0__tb_cache__DOT__dut__DOT__dirty__v15 
                        = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                          >> 2U));
                    __VdlySet__tb_cache__DOT__dut__DOT__dirty__v15 = 1U;
                    __VdlyVal__tb_cache__DOT__dut__DOT__tags__v15 
                        = vlSelfRef.tb_cache__DOT__dut__DOT____Vlvbound_h33490012__0;
                    __VdlyDim0__tb_cache__DOT__dut__DOT__tags__v15 
                        = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                          >> 2U));
                    __VdlySet__tb_cache__DOT__dut__DOT__tags__v15 = 1U;
                    __VdlyVal__tb_cache__DOT__dut__DOT__valid__v15 
                        = vlSelfRef.tb_cache__DOT__dut__DOT____Vlvbound_hfc3ada70__0;
                    __VdlyDim0__tb_cache__DOT__dut__DOT__valid__v15 
                        = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                          >> 2U));
                    __VdlySet__tb_cache__DOT__dut__DOT__valid__v15 = 1U;
                }
                vlSelfRef.tb_cache__DOT____Vcellout__dut__ready = 1U;
            }
            if ((((IData)(vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr) 
                  == (IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr)) 
                 & (IData)(vlSymsp->TOP__tb_cache__DOT__cif.we))) {
                __VdlyVal__tb_cache__DOT__dut__DOT__memory_blocks__v65 
                    = vlSymsp->TOP__tb_cache__DOT__cif.cpuDataIn;
                __VdlyDim0__tb_cache__DOT__dut__DOT__memory_blocks__v65 
                    = vlSelfRef.tb_cache__DOT__dut__DOT__counted_memory_address;
                __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v65 = 1U;
            } else if (((IData)(vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr) 
                        == (IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr))) {
                vlSelfRef.tb_cache__DOT____Vcellout__dut__cpuDataOut 
                    = vlSymsp->TOP__tb_cache__DOT__cif.memDataIn;
            }
        } else {
            __Vdly__tb_cache__DOT____Vcellout__dut__memAddr 
                = (0x0000ffffU & ((0xfffcU & (IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr)) 
                                  + (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__word_counter)));
            vlSelfRef.tb_cache__DOT____Vcellout__dut__memWe = 0U;
            __Vdly__tb_cache__DOT__dut__DOT__state = 3U;
            __VdlyMask__tb_cache__DOT__dut__DOT__state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state))) {
        if (vlSelfRef.tb_cache__DOT__dut__DOT__hit) {
            if (vlSymsp->TOP__tb_cache__DOT__cif.we) {
                vlSelfRef.tb_cache__DOT__dut__DOT____Vlvbound_h10b5c599__0 = 1U;
                __VdlyVal__tb_cache__DOT__dut__DOT__memory_blocks__v66 
                    = vlSymsp->TOP__tb_cache__DOT__cif.cpuDataIn;
                __VdlyDim0__tb_cache__DOT__dut__DOT__memory_blocks__v66 
                    = vlSelfRef.tb_cache__DOT__dut__DOT__memory_address;
                __VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v66 = 1U;
                if ((0x0eU >= (0x0000000fU & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                              >> 2U)))) {
                    __VdlyVal__tb_cache__DOT__dut__DOT__dirty__v16 
                        = vlSelfRef.tb_cache__DOT__dut__DOT____Vlvbound_h10b5c599__0;
                    __VdlyDim0__tb_cache__DOT__dut__DOT__dirty__v16 
                        = (0x0000000fU & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                          >> 2U));
                    __VdlySet__tb_cache__DOT__dut__DOT__dirty__v16 = 1U;
                }
            } else {
                vlSelfRef.tb_cache__DOT____Vcellout__dut__cpuDataOut 
                    = vlSelfRef.tb_cache__DOT__dut__DOT__memory_blocks
                    [vlSelfRef.tb_cache__DOT__dut__DOT__memory_address];
            }
            vlSelfRef.tb_cache__DOT____Vcellout__dut__ready = 1U;
            __Vdly__tb_cache__DOT__dut__DOT__state = 0U;
            __VdlyMask__tb_cache__DOT__dut__DOT__state = 3U;
        } else {
            __Vdly__tb_cache__DOT__dut__DOT__state = 2U;
            __VdlyMask__tb_cache__DOT__dut__DOT__state = 3U;
        }
    } else if (vlSymsp->TOP__tb_cache__DOT__cif.request) {
        __Vdly__tb_cache__DOT__dut__DOT__state = 1U;
        __VdlyMask__tb_cache__DOT__dut__DOT__state = 3U;
        vlSelfRef.tb_cache__DOT____Vcellout__dut__ready = 0U;
    }
    if (__VdlySet__tb_cache__DOT__ram__DOT__mem__v0) {
        vlSelfRef.tb_cache__DOT__ram__DOT__mem[__VdlyDim0__tb_cache__DOT__ram__DOT__mem__v0] 
            = __VdlyVal__tb_cache__DOT__ram__DOT__mem__v0;
    }
    vlSelfRef.tb_cache__DOT__dut__DOT__state = (((IData)(__Vdly__tb_cache__DOT__dut__DOT__state) 
                                                 & (IData)(__VdlyMask__tb_cache__DOT__dut__DOT__state)) 
                                                | ((IData)(vlSelfRef.tb_cache__DOT__dut__DOT__state) 
                                                   & (~ (IData)(__VdlyMask__tb_cache__DOT__dut__DOT__state))));
    __VdlyMask__tb_cache__DOT__dut__DOT__state = 0U;
    vlSelfRef.tb_cache__DOT__dut__DOT__word_counter 
        = __Vdly__tb_cache__DOT__dut__DOT__word_counter;
    vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr 
        = __Vdly__tb_cache__DOT____Vcellout__dut__memAddr;
    if (__VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v0) {
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[0U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[0U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[0U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__memory_blocks[0U] = 0U;
    }
    if (__VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v1) {
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[1U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[2U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[3U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[4U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[5U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[6U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[7U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[8U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[9U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[10U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[11U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[12U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[13U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[14U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[1U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[2U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[3U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[4U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[5U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[6U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[7U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[8U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[9U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[10U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[11U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[12U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[13U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[14U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[1U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[2U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[3U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[4U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[5U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[6U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[7U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[8U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[9U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[10U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[11U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[12U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[13U] = 0U;
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[14U] = 0U;
        __Vilp1 = 1U;
        while ((__Vilp1 <= 0x0000003fU)) {
            vlSelfRef.tb_cache__DOT__dut__DOT__memory_blocks[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__tb_cache__DOT__dut__DOT__dirty__v15) {
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[__VdlyDim0__tb_cache__DOT__dut__DOT__dirty__v15] 
            = __VdlyVal__tb_cache__DOT__dut__DOT__dirty__v15;
    }
    if (__VdlySet__tb_cache__DOT__dut__DOT__dirty__v16) {
        vlSelfRef.tb_cache__DOT__dut__DOT__dirty[__VdlyDim0__tb_cache__DOT__dut__DOT__dirty__v16] 
            = __VdlyVal__tb_cache__DOT__dut__DOT__dirty__v16;
    }
    if (__VdlySet__tb_cache__DOT__dut__DOT__tags__v15) {
        vlSelfRef.tb_cache__DOT__dut__DOT__tags[__VdlyDim0__tb_cache__DOT__dut__DOT__tags__v15] 
            = __VdlyVal__tb_cache__DOT__dut__DOT__tags__v15;
    }
    if (__VdlySet__tb_cache__DOT__dut__DOT__valid__v15) {
        vlSelfRef.tb_cache__DOT__dut__DOT__valid[__VdlyDim0__tb_cache__DOT__dut__DOT__valid__v15] 
            = __VdlyVal__tb_cache__DOT__dut__DOT__valid__v15;
    }
    if (__VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v64) {
        vlSelfRef.tb_cache__DOT__dut__DOT__memory_blocks[__VdlyDim0__tb_cache__DOT__dut__DOT__memory_blocks__v64] 
            = __VdlyVal__tb_cache__DOT__dut__DOT__memory_blocks__v64;
    }
    if (__VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v65) {
        vlSelfRef.tb_cache__DOT__dut__DOT__memory_blocks[__VdlyDim0__tb_cache__DOT__dut__DOT__memory_blocks__v65] 
            = __VdlyVal__tb_cache__DOT__dut__DOT__memory_blocks__v65;
    }
    if (__VdlySet__tb_cache__DOT__dut__DOT__memory_blocks__v66) {
        vlSelfRef.tb_cache__DOT__dut__DOT__memory_blocks[__VdlyDim0__tb_cache__DOT__dut__DOT__memory_blocks__v66] 
            = __VdlyVal__tb_cache__DOT__dut__DOT__memory_blocks__v66;
    }
    vlSymsp->TOP__tb_cache__DOT__cif.memDataIn = ((0x03feU 
                                                   >= 
                                                   (0x000003ffU 
                                                    & (IData)(vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr)))
                                                   ? vlSelfRef.tb_cache__DOT__ram__DOT__mem
                                                  [
                                                  (0x000003ffU 
                                                   & (IData)(vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr))]
                                                   : 0U);
    ([&]() {
            vlSelfRef.__VvifTrigger_hdfb65203__1_Vtrigm_ready = 1U;
        }(), vlSymsp->TOP__tb_cache__DOT__cif.ready) 
        = vlSelfRef.tb_cache__DOT____Vcellout__dut__ready;
    ([&]() {
            vlSelfRef.__VvifTrigger_hdfb65203__2_Vtrigm_cpuDataOut = 1U;
        }(), vlSymsp->TOP__tb_cache__DOT__cif.cpuDataOut) 
        = vlSelfRef.tb_cache__DOT____Vcellout__dut__cpuDataOut;
}

void Vtb_cache___024root___nba_comb__TOP__0(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___nba_comb__TOP__0\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cache__DOT__dut__DOT__memory_address 
        = (0x0000003fU & ((0x0000003cU & (IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr)) 
                          + (3U & (IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr))));
}

void Vtb_cache___024root___nba_comb__TOP__1(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___nba_comb__TOP__1\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cache__DOT__dut__DOT__counted_memory_address 
        = (0x0000003fU & ((0x0000003cU & (IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr)) 
                          + (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__word_counter)));
    vlSelfRef.tb_cache__DOT__dut__DOT__hit = ((0x0eU 
                                               >= (0x0000000fU 
                                                   & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                                      >> 2U))) 
                                              & (vlSelfRef.tb_cache__DOT__dut__DOT__valid
                                                 [(0x0000000fU 
                                                   & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                                      >> 2U))] 
                                                 & (((0x0eU 
                                                      >= 
                                                      (0x0000000fU 
                                                       & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                                          >> 2U)))
                                                      ? vlSelfRef.tb_cache__DOT__dut__DOT__tags
                                                     [
                                                     (0x0000000fU 
                                                      & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                                         >> 2U))]
                                                      : 0U) 
                                                    == 
                                                    (0x000003ffU 
                                                     & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                                        >> 6U)))));
}

void Vtb_cache___024root___eval_nba(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_nba\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_cache___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((0x000000000000007fULL & vlSelfRef.__VnbaTriggered[1U])) {
        Vtb_cache___024root___nba_comb__TOP__0(vlSelf);
    }
    if (((0x000000000000007fULL & vlSelfRef.__VnbaTriggered[1U]) 
         | (1ULL & vlSelfRef.__VnbaTriggered[0U]))) {
        Vtb_cache___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_cache___024root___timing_ready(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___timing_ready\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc39d9794__0.ready("@(posedge tb_cache.clk)");
    }
}

void Vtb_cache___024root___timing_resume(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___timing_resume\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc39d9794__0.moveToResumeQueue(
                                                          "@(posedge tb_cache.clk)");
    vlSelfRef.__VtrigSched_hc39d9794__0.resume("@(posedge tb_cache.clk)");
    vlSelfRef.__VdynSched.resume();
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_cache___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cache___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_cache___024root___eval_phase__act(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_phase__act\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cache___024root___eval_triggers_vec__act(vlSelf);
    Vtb_cache___024root___timing_ready(vlSelf);
    Vtb_cache___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cache___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_cache___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_cache___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_cache___024root___timing_resume(vlSelf);
        Vtb_cache___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cache___024root___eval_phase__inact(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_phase__inact\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_sv/tb_cache.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_cache___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vtb_cache___024root___eval_phase__nba(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_phase__nba\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_cache___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_cache___024root___eval_nba(vlSelf);
        Vtb_cache___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    if (vlSelfRef.__VnbaEventTrigger) {
        __VnbaExecute = 1U;
        vlSelfRef.__VnbaEventTrigger = 0U;
        vlSelfRef.__VnbaEvent.fire();
    }
    return (__VnbaExecute);
}

void Vtb_cache___024root___eval(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cache___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("tb_sv/tb_cache.sv", 3, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtb_cache___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cache___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_sv/tb_cache.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_sv/tb_cache.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_cache___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_sv/tb_cache.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_cache___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_cache___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_cache___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_cache___024root____VbeforeTrig_hc39d9794__0(Vtb_cache___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root____VbeforeTrig_hc39d9794__0\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 2> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_cache__DOT__clk) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cache__DOT__clk__0))) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache__DOT__clk__0 
        = vlSelfRef.tb_cache__DOT__clk;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc39d9794__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_cache___024root___eval_debug_assertions(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_debug_assertions\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
