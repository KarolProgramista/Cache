// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cache.h for the primary calling header

#ifndef VERILATED_VTB_CACHE___024UNIT__03A__03ACACHE_TRANSACTION__VCLPKG_H_
#define VERILATED_VTB_CACHE___024UNIT__03A__03ACACHE_TRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cache___024unit__03a__03acache_transaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_cache__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cache___024unit__03a__03acache_transaction__Vclpkg();
    ~Vtb_cache___024unit__03a__03acache_transaction__Vclpkg();
    void ctor(Vtb_cache__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_cache___024unit__03a__03acache_transaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_cache__Syms;

class Vtb_cache___024unit__03a__03acache_transaction : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__we;
    CData/*0:0*/ __PVT__request;
    CData/*0:0*/ __PVT__ready;
    SData/*15:0*/ __PVT__addr;
    SData/*15:0*/ __PVT__dataIn;
    SData/*15:0*/ __PVT__dataOut;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::cache_transaction"; }
    VlClass* clone() const { return new Vtb_cache___024unit__03a__03acache_transaction(*this); }
    void __VnoInFunc_display(Vtb_cache__Syms* __restrict vlSymsp, std::string tag);
  private:
    void _ctor_var_reset(Vtb_cache__Syms* __restrict vlSymsp);
  public:
    Vtb_cache___024unit__03a__03acache_transaction(Vtb_cache__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_cache___024unit__03a__03acache_transaction() {}
};


#endif  // guard
