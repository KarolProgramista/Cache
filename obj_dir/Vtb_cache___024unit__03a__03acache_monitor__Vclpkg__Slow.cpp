// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache.h for the primary calling header

#include "Vtb_cache__pch.h"

void Vtb_cache___024unit__03a__03acache_monitor__Vclpkg___ctor_var_reset(Vtb_cache___024unit__03a__03acache_monitor__Vclpkg* vlSelf);

Vtb_cache___024unit__03a__03acache_monitor__Vclpkg::Vtb_cache___024unit__03a__03acache_monitor__Vclpkg() = default;
Vtb_cache___024unit__03a__03acache_monitor__Vclpkg::~Vtb_cache___024unit__03a__03acache_monitor__Vclpkg() = default;

void Vtb_cache___024unit__03a__03acache_monitor__Vclpkg::ctor(Vtb_cache__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_cache___024unit__03a__03acache_monitor__Vclpkg___ctor_var_reset(this);
}

void Vtb_cache___024unit__03a__03acache_monitor__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_cache___024unit__03a__03acache_monitor__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
