// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache.h for the primary calling header

#include "Vtb_cache__pch.h"

VL_ATTR_COLD void Vtb_cache___024root___eval_static__TOP(Vtb_cache___024root* vlSelf);
void Vtb_cache___024root___timing_ready(Vtb_cache___024root* vlSelf);

VL_ATTR_COLD void Vtb_cache___024root___eval_static(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_static\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cache___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache__DOT__cif__clk__0 
        = vlSymsp->TOP__tb_cache__DOT__cif.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cache__DOT__clk__0 
        = vlSelfRef.tb_cache__DOT__clk;
    Vtb_cache___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((1U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_cache___024root___eval_static__TOP(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_static__TOP\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cache__DOT__clk = 0U;
    vlSelfRef.tb_cache__DOT__gen2drv_mbx = VL_NEW(Vtb_cache_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    vlSelfRef.tb_cache__DOT__mon2scb_mbx = VL_NEW(Vtb_cache_std__03a__03amailbox__Tz1, vlSymsp, 0U);
}

VL_ATTR_COLD void Vtb_cache___024root___eval_initial__TOP(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_initial__TOP\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_cache__DOT__ram__DOT__unnamedblk1__DOT__i;
    tb_cache__DOT__ram__DOT__unnamedblk1__DOT__i = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("wave.vcd"s);
    vlSymsp->_traceDumpOpen();
    tb_cache__DOT__ram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTES_III(32, 0x000003feU, tb_cache__DOT__ram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_cache__DOT__ram__DOT____Vlvbound_h2aa7d32c__0 
            = (0x0000ffffU & ((IData)(0x1000U) + tb_cache__DOT__ram__DOT__unnamedblk1__DOT__i));
        if (VL_LIKELY(((0x03feU >= (0x000003ffU & tb_cache__DOT__ram__DOT__unnamedblk1__DOT__i))))) {
            vlSelfRef.tb_cache__DOT__ram__DOT__mem[(0x000003ffU 
                                                    & tb_cache__DOT__ram__DOT__unnamedblk1__DOT__i)] 
                = vlSelfRef.tb_cache__DOT__ram__DOT____Vlvbound_h2aa7d32c__0;
        }
        tb_cache__DOT__ram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + tb_cache__DOT__ram__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vtb_cache___024root___eval_final(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_final\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cache___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cache___024root___eval_phase__stl(Vtb_cache___024root* vlSelf);

VL_ATTR_COLD void Vtb_cache___024root___eval_settle(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_settle\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cache___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_sv/tb_cache.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_cache___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_cache___024root___eval_triggers_vec__stl(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_triggers_vec__stl\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_cache___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cache___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cache___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_cache___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_cache___024root___stl_sequent__TOP__0(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___stl_sequent__TOP__0\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cache__DOT__dut__DOT__memory_address 
        = (0x0000003fU & ((0x0000003cU & (IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr)) 
                          + (3U & (IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr))));
    vlSymsp->TOP__tb_cache__DOT__cif.memDataIn = ((0x03feU 
                                                   >= 
                                                   (0x000003ffU 
                                                    & (IData)(vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr)))
                                                   ? vlSelfRef.tb_cache__DOT__ram__DOT__mem
                                                  [
                                                  (0x000003ffU 
                                                   & (IData)(vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr))]
                                                   : 0U);
    vlSelfRef.tb_cache__DOT__dut__DOT__counted_memory_address 
        = (0x0000003fU & ((0x0000003cU & (IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr)) 
                          + (IData)(vlSelfRef.tb_cache__DOT__dut__DOT__word_counter)));
    ([&]() {
            vlSelfRef.__VvifTrigger_hdfb65203__0_Vtrigm_clk = 1U;
        }(), vlSymsp->TOP__tb_cache__DOT__cif.clk) 
        = vlSelfRef.tb_cache__DOT__clk;
    ([&]() {
            vlSelfRef.__VvifTrigger_hdfb65203__1_Vtrigm_ready = 1U;
        }(), vlSymsp->TOP__tb_cache__DOT__cif.ready) 
        = vlSelfRef.tb_cache__DOT____Vcellout__dut__ready;
    ([&]() {
            vlSelfRef.__VvifTrigger_hdfb65203__2_Vtrigm_cpuDataOut = 1U;
        }(), vlSymsp->TOP__tb_cache__DOT__cif.cpuDataOut) 
        = vlSelfRef.tb_cache__DOT____Vcellout__dut__cpuDataOut;
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

VL_ATTR_COLD void Vtb_cache___024root____Vm_traceActivitySetAll(Vtb_cache___024root* vlSelf);

VL_ATTR_COLD void Vtb_cache___024root___eval_stl(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_stl\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_cache___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_cache___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_cache___024root___eval_phase__stl(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___eval_phase__stl\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cache___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cache___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_cache___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_cache___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_cache___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cache___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cache___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: Internal 'ico' trigger - virtual interface member: cache_if.clk\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: Internal 'ico' trigger - virtual interface member: cache_if.ready\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: Internal 'ico' trigger - virtual interface member: cache_if.cpuDataOut\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: Internal 'ico' trigger - virtual interface member: cache_if.addr\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: Internal 'ico' trigger - virtual interface member: cache_if.cpuDataIn\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: Internal 'ico' trigger - virtual interface member: cache_if.we\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: Internal 'ico' trigger - virtual interface member: cache_if.request\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_cache___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cache___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_cache___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_cache.cif.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge tb_cache.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdynSched.evaluate())\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'act' trigger - virtual interface member: cache_if.clk\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: Internal 'act' trigger - virtual interface member: cache_if.ready\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: Internal 'act' trigger - virtual interface member: cache_if.cpuDataOut\n");
    }
    if ((1U & (IData)((triggers[1U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 67 is active: Internal 'act' trigger - virtual interface member: cache_if.addr\n");
    }
    if ((1U & (IData)((triggers[1U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 68 is active: Internal 'act' trigger - virtual interface member: cache_if.cpuDataIn\n");
    }
    if ((1U & (IData)((triggers[1U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 69 is active: Internal 'act' trigger - virtual interface member: cache_if.we\n");
    }
    if ((1U & (IData)((triggers[1U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 70 is active: Internal 'act' trigger - virtual interface member: cache_if.request\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cache___024root____Vm_traceActivitySetAll(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root____Vm_traceActivitySetAll\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtb_cache___024root___ctor_var_reset(Vtb_cache___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root___ctor_var_reset\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_cache__DOT____Vcellout__dut__ready = 0;
    vlSelf->tb_cache__DOT____Vcellout__dut__memWe = 0;
    vlSelf->tb_cache__DOT____Vcellout__dut__memDataOut = 0;
    vlSelf->tb_cache__DOT____Vcellout__dut__memAddr = 0;
    vlSelf->tb_cache__DOT____Vcellout__dut__cpuDataOut = 0;
    vlSelf->tb_cache__DOT__dut__DOT____Vlvbound_hfc3ada70__0 = 0;
    vlSelf->tb_cache__DOT__dut__DOT____Vlvbound_h33490012__0 = 0;
    vlSelf->tb_cache__DOT__dut__DOT____Vlvbound_h10b5c599__1 = 0;
    vlSelf->tb_cache__DOT__dut__DOT____Vlvbound_h10b5c599__0 = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_cache__DOT__dut__DOT__word_counter = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1402361150309343788ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_cache__DOT__dut__DOT__memory_blocks[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9532051780565768364ull);
    }
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->tb_cache__DOT__dut__DOT__tags[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8969023897525121863ull);
    }
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->tb_cache__DOT__dut__DOT__valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13623379593756423230ull);
    }
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->tb_cache__DOT__dut__DOT__dirty[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10565145022253628465ull);
    }
    vlSelf->tb_cache__DOT__dut__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16237965726181190532ull);
    vlSelf->tb_cache__DOT__dut__DOT__memory_address = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15647601133066812852ull);
    vlSelf->tb_cache__DOT__dut__DOT__counted_memory_address = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8032296764999729947ull);
    vlSelf->tb_cache__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15895219266387539478ull);
    vlSelf->tb_cache__DOT__dut__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2565464577934020897ull);
    vlSelf->tb_cache__DOT__dut__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7284832990028229065ull);
    vlSelf->tb_cache__DOT__ram__DOT____Vlvbound_h9e8dbf45__0 = 0;
    vlSelf->tb_cache__DOT__ram__DOT____Vlvbound_h2aa7d32c__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1023; ++__Vi0) {
        vlSelf->tb_cache__DOT__ram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 726674052579174501ull);
    }
    vlSelf->__VnbaEventTrigger = 0;
    vlSelf->__VvifTrigger_hdfb65203__0_Vtrigm_clk = 0;
    vlSelf->__VvifTrigger_hdfb65203__1_Vtrigm_ready = 0;
    vlSelf->__VvifTrigger_hdfb65203__2_Vtrigm_cpuDataOut = 0;
    vlSelf->__VvifTrigger_hdfb65203__3_Vtrigm_addr = 0;
    vlSelf->__VvifTrigger_hdfb65203__4_Vtrigm_cpuDataIn = 0;
    vlSelf->__VvifTrigger_hdfb65203__5_Vtrigm_we = 0;
    vlSelf->__VvifTrigger_hdfb65203__6_Vtrigm_request = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_cache__DOT__cif__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_cache__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
