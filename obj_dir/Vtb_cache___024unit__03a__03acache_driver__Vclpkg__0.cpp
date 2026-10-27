// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache.h for the primary calling header

#include "Vtb_cache__pch.h"

Vtb_cache___024unit__03a__03acache_driver::Vtb_cache___024unit__03a__03acache_driver(Vtb_cache__Syms* __restrict vlSymsp, Vtb_cache_cache_if* vif, VlClassRef<Vtb_cache_std__03a__03amailbox__Tz1> mbx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_driver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__vif = vif;
    this->__PVT__gen2drv_mbx = mbx;
}

VlCoroutine Vtb_cache___024unit__03a__03acache_driver::__VnoInFunc_run(Vtb_cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_driver::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> tr;
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__gen2drv_mbx, "tb_sv/cache_driver.sv", 16)->__VnoInFunc_get(vlSymsp, tr);
        co_await this->__VnoInFunc_drive_transaction(vlSymsp, tr);
    }
    co_return;
}

VlCoroutine Vtb_cache___024unit__03a__03acache_driver::__VnoInFunc_drive_transaction(Vtb_cache__Syms* __restrict vlSymsp, VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> tr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_driver::__VnoInFunc_drive_transaction\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h8fff267f__1;
    __Vtrigprevexpr_h8fff267f__1 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h8fff267f__0;
    __Vtrigprevexpr_h8fff267f__0 = 0;
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_hb5ffefdf__0;
    __VdynTrigger_hb5ffefdf__0 = 0;
    __VdynTrigger_hb5ffefdf__0 = 0U;
    __Vtrigprevexpr_h8fff267f__0 = VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_driver.sv", 22)
        ->clk;
    while ((1U & (~ (IData)(__VdynTrigger_hb5ffefdf__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge $unit::cache_driver.vif.clk)", 
                                                     "tb_sv/cache_driver.sv", 
                                                     22);
        __VdynTrigger_hb5ffefdf__0 = (VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_driver.sv", 22)
                                      ->clk & (~ (IData)(__Vtrigprevexpr_h8fff267f__0)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hb5ffefdf__0);
        __Vtrigprevexpr_h8fff267f__0 = VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_driver.sv", 22)
            ->clk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge $unit::cache_driver.vif.clk)", 
                                                 "tb_sv/cache_driver.sv", 
                                                 22);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    SData/*15:0*/ __Vintraval_h9698f19a__0;
    __Vintraval_h9698f19a__0 = 0;
    __Vintraval_h9698f19a__0 = VL_NULL_CHECK(tr, "tb_sv/cache_driver.sv", 23)
        ->__PVT__addr;
    this->__VnoInFunc_drive_transaction____Vfork_1__0(vlSymsp, __Vintraval_h9698f19a__0);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    SData/*15:0*/ __Vintraval_h7d7eb89d__0;
    __Vintraval_h7d7eb89d__0 = 0;
    __Vintraval_h7d7eb89d__0 = VL_NULL_CHECK(tr, "tb_sv/cache_driver.sv", 24)
        ->__PVT__dataIn;
    this->__VnoInFunc_drive_transaction____Vfork_2__0(vlSymsp, __Vintraval_h7d7eb89d__0);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_hb77b2de8__0;
    __Vintraval_hb77b2de8__0 = 0;
    __Vintraval_hb77b2de8__0 = VL_NULL_CHECK(tr, "tb_sv/cache_driver.sv", 25)
        ->__PVT__we;
    this->__VnoInFunc_drive_transaction____Vfork_3__0(vlSymsp, __Vintraval_hb77b2de8__0);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_hecd4e2f0__0;
    __Vintraval_hecd4e2f0__0 = 0;
    __Vintraval_hecd4e2f0__0 = VL_NULL_CHECK(tr, "tb_sv/cache_driver.sv", 26)
        ->__PVT__request;
    this->__VnoInFunc_drive_transaction____Vfork_4__0(vlSymsp, __Vintraval_hecd4e2f0__0);
    do {
        CData/*0:0*/ __VdynTrigger_hb5ffefdf__1;
        __VdynTrigger_hb5ffefdf__1 = 0;
        __VdynTrigger_hb5ffefdf__1 = 0U;
        __Vtrigprevexpr_h8fff267f__1 = VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_driver.sv", 29)
            ->clk;
        while ((1U & (~ (IData)(__VdynTrigger_hb5ffefdf__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge $unit::cache_driver.vif.clk)", 
                                                         "tb_sv/cache_driver.sv", 
                                                         29);
            __VdynTrigger_hb5ffefdf__1 = (VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_driver.sv", 29)
                                          ->clk & (~ (IData)(__Vtrigprevexpr_h8fff267f__1)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hb5ffefdf__1);
            __Vtrigprevexpr_h8fff267f__1 = VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_driver.sv", 29)
                ->clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge $unit::cache_driver.vif.clk)", 
                                                     "tb_sv/cache_driver.sv", 
                                                     29);
    } while ((1U & (~ VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_driver.sv", 30)
                    ->ready)));
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h41ea88f4__0;
    __Vintraval_h41ea88f4__0 = 0;
    __Vintraval_h41ea88f4__0 = 0U;
    this->__VnoInFunc_drive_transaction____Vfork_5__0(vlSymsp, __Vintraval_h41ea88f4__0);
    co_return;
}

VlCoroutine Vtb_cache___024unit__03a__03acache_driver::__VnoInFunc_drive_transaction____Vfork_5__0(Vtb_cache__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h41ea88f4__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_driver::__VnoInFunc_drive_transaction____Vfork_5__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__4;
    __VdynTrigger_h24befa02__4 = 0;
    __VdynTrigger_h24befa02__4 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb_sv/cache_driver.sv", 
                                                     32);
        __VdynTrigger_h24befa02__4 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__4);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb_sv/cache_driver.sv", 
                                                     32);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb_sv/cache_driver.sv", 
                                                 32);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_hdfb65203__6_Vtrigm_request = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_driver.sv", 32)
     ->request) = __Vintraval_h41ea88f4__0;
    co_return;
}

VlCoroutine Vtb_cache___024unit__03a__03acache_driver::__VnoInFunc_drive_transaction____Vfork_4__0(Vtb_cache__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hecd4e2f0__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_driver::__VnoInFunc_drive_transaction____Vfork_4__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__3;
    __VdynTrigger_h24befa02__3 = 0;
    __VdynTrigger_h24befa02__3 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb_sv/cache_driver.sv", 
                                                     26);
        __VdynTrigger_h24befa02__3 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__3);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb_sv/cache_driver.sv", 
                                                     26);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb_sv/cache_driver.sv", 
                                                 26);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_hdfb65203__6_Vtrigm_request = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_driver.sv", 26)
     ->request) = __Vintraval_hecd4e2f0__0;
    co_return;
}

VlCoroutine Vtb_cache___024unit__03a__03acache_driver::__VnoInFunc_drive_transaction____Vfork_3__0(Vtb_cache__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_hb77b2de8__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_driver::__VnoInFunc_drive_transaction____Vfork_3__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__2;
    __VdynTrigger_h24befa02__2 = 0;
    __VdynTrigger_h24befa02__2 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__2)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb_sv/cache_driver.sv", 
                                                     25);
        __VdynTrigger_h24befa02__2 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__2);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb_sv/cache_driver.sv", 
                                                     25);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb_sv/cache_driver.sv", 
                                                 25);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_hdfb65203__5_Vtrigm_we = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_driver.sv", 25)
     ->we) = __Vintraval_hb77b2de8__0;
    co_return;
}

VlCoroutine Vtb_cache___024unit__03a__03acache_driver::__VnoInFunc_drive_transaction____Vfork_2__0(Vtb_cache__Syms* __restrict vlSymsp, SData/*15:0*/ __Vintraval_h7d7eb89d__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_driver::__VnoInFunc_drive_transaction____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__1;
    __VdynTrigger_h24befa02__1 = 0;
    __VdynTrigger_h24befa02__1 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb_sv/cache_driver.sv", 
                                                     24);
        __VdynTrigger_h24befa02__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb_sv/cache_driver.sv", 
                                                     24);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb_sv/cache_driver.sv", 
                                                 24);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_hdfb65203__4_Vtrigm_cpuDataIn = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_driver.sv", 24)
     ->cpuDataIn) = __Vintraval_h7d7eb89d__0;
    co_return;
}

VlCoroutine Vtb_cache___024unit__03a__03acache_driver::__VnoInFunc_drive_transaction____Vfork_1__0(Vtb_cache__Syms* __restrict vlSymsp, SData/*15:0*/ __Vintraval_h9698f19a__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_driver::__VnoInFunc_drive_transaction____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h24befa02__0;
    __VdynTrigger_h24befa02__0 = 0;
    __VdynTrigger_h24befa02__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h24befa02__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb_sv/cache_driver.sv", 
                                                     23);
        __VdynTrigger_h24befa02__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h24befa02__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb_sv/cache_driver.sv", 
                                                     23);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb_sv/cache_driver.sv", 
                                                 23);
    ([&]() {
            vlSymsp->TOP.__VvifTrigger_hdfb65203__3_Vtrigm_addr = 1U;
        }(), VL_NULL_CHECK(this->__PVT__vif, "tb_sv/cache_driver.sv", 23)
     ->addr) = __Vintraval_h9698f19a__0;
    co_return;
}

void Vtb_cache___024unit__03a__03acache_driver::_ctor_var_reset(Vtb_cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_driver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

std::string Vtb_cache___024unit__03a__03acache_driver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_driver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_cache___024unit__03a__03acache_driver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_driver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vif:" + VL_TO_STRING(__PVT__vif);
    out += ", gen2drv_mbx:" + VL_TO_STRING(__PVT__gen2drv_mbx);
    return (out);
}
