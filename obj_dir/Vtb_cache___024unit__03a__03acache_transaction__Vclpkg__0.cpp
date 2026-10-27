// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache.h for the primary calling header

#include "Vtb_cache__pch.h"

Vtb_cache___024unit__03a__03acache_transaction::Vtb_cache___024unit__03a__03acache_transaction(Vtb_cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_transaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__request = 1U;
}

void Vtb_cache___024unit__03a__03acache_transaction::__VnoInFunc_display(Vtb_cache__Syms* __restrict vlSymsp, std::string tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_transaction::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("[%0t][%@] REQ=%0b | TYPE=%s | WDATA=0x%0x | ADDR=0x%0x | RDATA=0x%0x | READY=%0b\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,-1,&(tag),
                 1,(IData)(this->__PVT__request),8,
                 ((IData)(this->__PVT__we) ? 0x57U : 0x52U),
                 16,(IData)(this->__PVT__dataIn),16,
                 this->__PVT__addr,16,(IData)(this->__PVT__dataOut),
                 1,this->__PVT__ready);
}

void Vtb_cache___024unit__03a__03acache_transaction::_ctor_var_reset(Vtb_cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_transaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__addr = VL_SCOPED_RAND_RESET_I(16, 17153970354944579691ULL, 14934084843038794831ull);
    __PVT__dataIn = VL_SCOPED_RAND_RESET_I(16, 17153970354944579691ULL, 6940829998277308622ull);
    __PVT__we = VL_SCOPED_RAND_RESET_I(1, 17153970354944579691ULL, 10105644630884274164ull);
    __PVT__request = VL_SCOPED_RAND_RESET_I(1, 17153970354944579691ULL, 16104405464408049176ull);
    __PVT__ready = VL_SCOPED_RAND_RESET_I(1, 17153970354944579691ULL, 898948264233693212ull);
    __PVT__dataOut = VL_SCOPED_RAND_RESET_I(16, 17153970354944579691ULL, 9558286509670243418ull);
}

std::string Vtb_cache___024unit__03a__03acache_transaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_transaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_cache___024unit__03a__03acache_transaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_transaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "addr:" + VL_TO_STRING(__PVT__addr);
    out += ", dataIn:" + VL_TO_STRING(__PVT__dataIn);
    out += ", we:" + VL_TO_STRING(__PVT__we);
    out += ", request:" + VL_TO_STRING(__PVT__request);
    out += ", ready:" + VL_TO_STRING(__PVT__ready);
    out += ", dataOut:" + VL_TO_STRING(__PVT__dataOut);
    return (out);
}
