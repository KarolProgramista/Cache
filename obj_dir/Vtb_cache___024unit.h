// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cache.h for the primary calling header

#ifndef VERILATED_VTB_CACHE___024UNIT_H_
#define VERILATED_VTB_CACHE___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cache___024unit final {
  public:

    // INTERNAL VARIABLES
    Vtb_cache__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cache___024unit();
    ~Vtb_cache___024unit();
    void ctor(Vtb_cache__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_cache___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
