// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cache.h for the primary calling header

#ifndef VERILATED_VTB_CACHE_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_
#define VERILATED_VTB_CACHE_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_cache___024unit__03a__03acache_transaction;


class Vtb_cache__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cache_std__03a__03amailbox__Tz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_cache__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_cache_std__03a__03amailbox__Tz1__Vclpkg();
    ~Vtb_cache_std__03a__03amailbox__Tz1__Vclpkg();
    void ctor(Vtb_cache__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_cache_std__03a__03amailbox__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_cache__Syms;

class Vtb_cache_std__03a__03amailbox__Tz1 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Vtb_cache___024unit__03a__03acache_transaction>> __PVT__m_queue;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::mailbox__Tz1"; }
    VlClass* clone() const { return new Vtb_cache_std__03a__03amailbox__Tz1(*this); }
    VlCoroutine __VnoInFunc_get(Vtb_cache__Syms* __restrict vlSymsp, VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> &message);
    void __VnoInFunc_num(Vtb_cache__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vtb_cache__Syms* __restrict vlSymsp, VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> &message);
    VlCoroutine __VnoInFunc_put(Vtb_cache__Syms* __restrict vlSymsp, VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> message);
    void __VnoInFunc_try_get(Vtb_cache__Syms* __restrict vlSymsp, VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vtb_cache__Syms* __restrict vlSymsp, VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vtb_cache__Syms* __restrict vlSymsp, VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_cache__Syms* __restrict vlSymsp);
  public:
    Vtb_cache_std__03a__03amailbox__Tz1(Vtb_cache__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_cache_std__03a__03amailbox__Tz1() {}
};


#endif  // guard
