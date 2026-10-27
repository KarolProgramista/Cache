// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache.h for the primary calling header

#include "Vtb_cache__pch.h"

void Vtb_cache_cache_if___ctor_var_reset(Vtb_cache_cache_if* vlSelf);

Vtb_cache_cache_if::Vtb_cache_cache_if() = default;
Vtb_cache_cache_if::~Vtb_cache_cache_if() = default;

void Vtb_cache_cache_if::ctor(Vtb_cache__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_cache_cache_if___ctor_var_reset(this);
}

void Vtb_cache_cache_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_cache_cache_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
