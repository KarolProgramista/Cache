// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache.h for the primary calling header

#include "Vtb_cache__pch.h"

void Vtb_cache_std___ctor_var_reset(Vtb_cache_std* vlSelf);

Vtb_cache_std::Vtb_cache_std() = default;
Vtb_cache_std::~Vtb_cache_std() = default;

void Vtb_cache_std::ctor(Vtb_cache__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtb_cache_std___ctor_var_reset(this);
}

void Vtb_cache_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtb_cache_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
