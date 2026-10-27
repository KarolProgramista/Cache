// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cache.h for the primary calling header

#ifndef VERILATED_VTB_CACHE_CACHE_IF_H_
#define VERILATED_VTB_CACHE_CACHE_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cache_cache_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ we;
    CData/*0:0*/ request;
    CData/*0:0*/ ready;
    CData/*0:0*/ reset;
    SData/*15:0*/ addr;
    SData/*15:0*/ cpuDataIn;
    SData/*15:0*/ cpuDataOut;
    SData/*15:0*/ memDataIn;

    // INTERNAL VARIABLES
    Vtb_cache__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cache_cache_if();
    ~Vtb_cache_cache_if();
    void ctor(Vtb_cache__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_cache_cache_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtb_cache_cache_if* obj);

#endif  // guard
