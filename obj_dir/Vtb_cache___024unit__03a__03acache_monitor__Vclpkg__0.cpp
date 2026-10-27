// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache.h for the primary calling header

#include "Vtb_cache__pch.h"

Vtb_cache___024unit__03a__03acache_monitor::Vtb_cache___024unit__03a__03acache_monitor(Vtb_cache__Syms* __restrict vlSymsp, Vtb_cache_cache_if* vif, VlClassRef<Vtb_cache_std__03a__03amailbox__Tz1> mbx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_monitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__vif = vif;
    this->__PVT__mon2scb_mbx = mbx;
}

VlCoroutine Vtb_cache___024unit__03a__03acache_monitor::__VnoInFunc_run(Vtb_cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_monitor::__VnoInFunc_run\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h7b285ca6__0;
    __Vtrigprevexpr_h7b285ca6__0 = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> tr;
    CData/*0:0*/ ready_prev;
    ready_prev = 1U;
    while (true) {
        CData/*0:0*/ __VdynTrigger_h89472a14__0;
        __VdynTrigger_h89472a14__0 = 0;
        __VdynTrigger_h89472a14__0 = 0U;
        __Vtrigprevexpr_h7b285ca6__0 = VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_monitor.sv", 17)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_h89472a14__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::cache_monitor.vif.clk)", 
                                                         "tb_sv/cache_monitor.sv", 
                                                         17);
            __VdynTrigger_h89472a14__0 = (VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_monitor.sv", 17)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h7b285ca6__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h89472a14__0);
            __Vtrigprevexpr_h7b285ca6__0 = VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_monitor.sv", 17)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::cache_monitor.vif.clk)", 
                                                     "tb_sv/cache_monitor.sv", 
                                                     17);
        if (((1U & (~ (IData)(ready_prev))) && VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_monitor.sv", 19)
             ->ready)) {
            tr = VL_NEW(Vtb_cache___024unit__03a__03acache_transaction, vlSymsp);
            VL_NULL_CHECK(tr, "tb_sv/cache_monitor.sv", 22)->__PVT__addr 
                = VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_monitor.sv", 22)
                ->addr;
            VL_NULL_CHECK(tr, "tb_sv/cache_monitor.sv", 23)->__PVT__dataIn 
                = VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_monitor.sv", 23)
                ->cpuDataIn;
            VL_NULL_CHECK(tr, "tb_sv/cache_monitor.sv", 24)->__PVT__we 
                = VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_monitor.sv", 24)
                ->we;
            VL_NULL_CHECK(tr, "tb_sv/cache_monitor.sv", 26)->__PVT__dataOut 
                = VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_monitor.sv", 26)
                ->cpuDataOut;
            VL_NULL_CHECK(tr, "tb_sv/cache_monitor.sv", 27)->__PVT__ready 
                = VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_monitor.sv", 27)
                ->ready;
            VL_NULL_CHECK(tr, "tb_sv/cache_monitor.sv", 29)->__VnoInFunc_display(vlSymsp, "MONITOR"s);
            co_await VL_NULL_CHECK(this->__PVT__mon2scb_mbx, "tb_sv/cache_monitor.sv", 31)->__VnoInFunc_put(vlSymsp, tr);
        }
    }
    ready_prev = VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_monitor.sv", 35)
        ->ready;
    co_return;
}

void Vtb_cache___024unit__03a__03acache_monitor::_ctor_var_reset(Vtb_cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_monitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

std::string Vtb_cache___024unit__03a__03acache_monitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_monitor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_cache___024unit__03a__03acache_monitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_monitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vif:" + VL_TO_STRING(__PVT__vif);
    out += ", mon2scb_mbx:" + VL_TO_STRING(__PVT__mon2scb_mbx);
    return (out);
}
