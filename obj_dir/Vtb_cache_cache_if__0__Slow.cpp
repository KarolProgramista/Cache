// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache.h for the primary calling header

#include "Vtb_cache__pch.h"

VL_ATTR_COLD void Vtb_cache_cache_if___ctor_var_reset(Vtb_cache_cache_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_cache_cache_if___ctor_var_reset\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14934084843038794831ull);
    vlSelf->cpuDataIn = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18036894880273464972ull);
    vlSelf->cpuDataOut = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13623960741753520602ull);
    vlSelf->memDataIn = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13767669954592961394ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    vlSelf->request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16104405464408049176ull);
    vlSelf->ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 898948264233693212ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
}
