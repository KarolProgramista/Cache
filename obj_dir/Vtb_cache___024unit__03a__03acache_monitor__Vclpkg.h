// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cache.h for the primary calling header

#ifndef VERILATED_VTB_CACHE___024UNIT__03A__03ACACHE_MONITOR__VCLPKG_H_
#define VERILATED_VTB_CACHE___024UNIT__03A__03ACACHE_MONITOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_cache___024unit__03a__03acache_transaction;
class Vtb_cache_std__03a__03amailbox__Tz1;


class Vtb_cache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cache___024unit__03a__03acache_monitor__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_cache__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cache___024unit__03a__03acache_monitor__Vclpkg();
    ~Vtb_cache___024unit__03a__03acache_monitor__Vclpkg();
    void ctor(Vtb_cache__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_cache___024unit__03a__03acache_monitor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_cache__Syms;

class Vtb_cache___024unit__03a__03acache_monitor : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    Vtb_cache_cache_if* __PVT__vif;
    VlClassRef<Vtb_cache_std__03a__03amailbox__Tz1> __PVT__mon2scb_mbx;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "$unit::cache_monitor"; }
    VlClass* clone() const { return new Vtb_cache___024unit__03a__03acache_monitor(*this); }
    VlCoroutine __VnoInFunc_run(Vtb_cache__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_cache__Syms* __restrict vlSymsp);
  public:
    Vtb_cache___024unit__03a__03acache_monitor(Vtb_cache__Syms* __restrict vlSymsp, Vtb_cache_cache_if* vif, VlClassRef<Vtb_cache_std__03a__03amailbox__Tz1> mbx);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_cache___024unit__03a__03acache_monitor() {}
};


#endif  // guard
