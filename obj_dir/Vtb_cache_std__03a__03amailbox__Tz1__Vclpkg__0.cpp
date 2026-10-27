// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache.h for the primary calling header

#include "Vtb_cache__pch.h"

Vtb_cache_std__03a__03amailbox__Tz1::Vtb_cache_std__03a__03amailbox__Tz1(Vtb_cache__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_cache_std__03a__03amailbox__Tz1::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_bound = bound;
}

void Vtb_cache_std__03a__03amailbox__Tz1::__VnoInFunc_num(Vtb_cache__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_cache_std__03a__03amailbox__Tz1::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__m_queue.size();
}

VlCoroutine Vtb_cache_std__03a__03amailbox__Tz1::__VnoInFunc_put(Vtb_cache__Syms* __restrict vlSymsp, VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_cache_std__03a__03amailbox__Tz1::__VnoInFunc_put\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hc1b4cd43__0;
    __Vtrigprevexpr_hc1b4cd43__0 = 0;
    // Body
    VL_KEEP_THIS;
    while (((0U != this->__PVT__m_bound) & VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound))) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_hc3ba97ef__0;
            __VdynTrigger_hc3ba97ef__0 = 0;
            __VdynTrigger_hc3ba97ef__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_hc3ba97ef__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                             "/usr/share/verilator/include/verilated_std.sv", 
                                                             51);
                __Vtrigprevexpr_hc1b4cd43__0 = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_hc3ba97ef__0 = __Vtrigprevexpr_hc1b4cd43__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc3ba97ef__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                         "/usr/share/verilator/include/verilated_std.sv", 
                                                         51);
        }
    }
    this->__PVT__m_queue.push_back(message);
    co_return;
}

void Vtb_cache_std__03a__03amailbox__Tz1::__VnoInFunc_try_put(Vtb_cache__Syms* __restrict vlSymsp, VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> message, IData/*31:0*/ &try_put__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_cache_std__03a__03amailbox__Tz1::__VnoInFunc_try_put\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_num__0__Vfuncout;
    __Vfunc_num__0__Vfuncout = 0;
    // Body
    {
        try_put__Vfuncrtn = 0U;
        if (((0U == this->__PVT__m_bound) | VL_LTS_III(32, 
                                                       ([&]() {
                            this->__VnoInFunc_num(vlSymsp, __Vfunc_num__0__Vfuncout);
                        }(), __Vfunc_num__0__Vfuncout), this->__PVT__m_bound))) {
            this->__PVT__m_queue.push_back(message);
            try_put__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_put__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_cache_std__03a__03amailbox__Tz1::__VnoInFunc_get(Vtb_cache__Syms* __restrict vlSymsp, VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_cache_std__03a__03amailbox__Tz1::__VnoInFunc_get\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_he3c1d36e__0;
    __Vtrigprevexpr_he3c1d36e__0 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_he1ada20e__0;
            __VdynTrigger_he1ada20e__0 = 0;
            __VdynTrigger_he1ada20e__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_he1ada20e__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                             "/usr/share/verilator/include/verilated_std.sv", 
                                                             67);
                __Vtrigprevexpr_he3c1d36e__0 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_he1ada20e__0 = __Vtrigprevexpr_he3c1d36e__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_he1ada20e__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/usr/share/verilator/include/verilated_std.sv", 
                                                         67);
        }
    }
    message = this->__PVT__m_queue.pop_front();
    co_return;
}

void Vtb_cache_std__03a__03amailbox__Tz1::__VnoInFunc_try_get(Vtb_cache__Syms* __restrict vlSymsp, VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> &message, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_cache_std__03a__03amailbox__Tz1::__VnoInFunc_try_get\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_num__1__Vfuncout;
    __Vfunc_num__1__Vfuncout = 0;
    // Body
    {
        try_get__Vfuncrtn = 0U;
        if (VL_LTS_III(32, 0U, ([&]() {
                        this->__VnoInFunc_num(vlSymsp, __Vfunc_num__1__Vfuncout);
                    }(), __Vfunc_num__1__Vfuncout))) {
            message = this->__PVT__m_queue.pop_front();
            try_get__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_get__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vtb_cache_std__03a__03amailbox__Tz1::__VnoInFunc_peek(Vtb_cache__Syms* __restrict vlSymsp, VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_cache_std__03a__03amailbox__Tz1::__VnoInFunc_peek\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_he3c1d36e__1;
    __Vtrigprevexpr_he3c1d36e__1 = 0;
    // Body
    VL_KEEP_THIS;
    while ((0U == this->__PVT__m_queue.size())) {
        if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
            CData/*0:0*/ __VdynTrigger_he1ada20e__1;
            __VdynTrigger_he1ada20e__1 = 0;
            __VdynTrigger_he1ada20e__1 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_he1ada20e__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                             "/usr/share/verilator/include/verilated_std.sv", 
                                                             84);
                __Vtrigprevexpr_he3c1d36e__1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
                __VdynTrigger_he1ada20e__1 = __Vtrigprevexpr_he3c1d36e__1;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_he1ada20e__1);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/usr/share/verilator/include/verilated_std.sv", 
                                                         84);
        }
    }
    message = this->__PVT__m_queue.at(0U);
    co_return;
}

void Vtb_cache_std__03a__03amailbox__Tz1::__VnoInFunc_try_peek(Vtb_cache__Syms* __restrict vlSymsp, VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> &message, IData/*31:0*/ &try_peek__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_cache_std__03a__03amailbox__Tz1::__VnoInFunc_try_peek\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_num__2__Vfuncout;
    __Vfunc_num__2__Vfuncout = 0;
    // Body
    {
        try_peek__Vfuncrtn = 0U;
        if (VL_LTS_III(32, 0U, ([&]() {
                        this->__VnoInFunc_num(vlSymsp, __Vfunc_num__2__Vfuncout);
                    }(), __Vfunc_num__2__Vfuncout))) {
            message = this->__PVT__m_queue.at(0U);
            try_peek__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_peek__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vtb_cache_std__03a__03amailbox__Tz1::_ctor_var_reset(Vtb_cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_cache_std__03a__03amailbox__Tz1::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_bound = 0;
}

std::string Vtb_cache_std__03a__03amailbox__Tz1::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_cache_std__03a__03amailbox__Tz1::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_cache_std__03a__03amailbox__Tz1::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_cache_std__03a__03amailbox__Tz1::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_bound:" + VL_TO_STRING(__PVT__m_bound);
    out += ", m_queue:" + VL_TO_STRING(__PVT__m_queue);
    return (out);
}
