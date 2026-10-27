// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_CACHE__SYMS_H_
#define VERILATED_VTB_CACHE__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_cache.h"

// INCLUDE MODULE CLASSES
#include "Vtb_cache___024root.h"
#include "Vtb_cache___024unit.h"
#include "Vtb_cache_std.h"
#include "Vtb_cache_cache_if.h"
#include "Vtb_cache___024unit__03a__03acache_driver__Vclpkg.h"
#include "Vtb_cache___024unit__03a__03acache_monitor__Vclpkg.h"
#include "Vtb_cache___024unit__03a__03acache_scoreboard__Vclpkg.h"
#include "Vtb_cache___024unit__03a__03acache_transaction__Vclpkg.h"
#include "Vtb_cache_std__03a__03asemaphore__Vclpkg.h"
#include "Vtb_cache_std__03a__03aprocess__Vclpkg.h"
#include "Vtb_cache_std__03a__03amailbox__Tz1__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_cache__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_cache* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    std::vector<VlEvent*> __Vm_triggeredEvents;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_cache___024root            TOP;
    Vtb_cache___024unit__03a__03acache_driver__Vclpkg TOP____024unit__03a__03acache_driver__Vclpkg;
    Vtb_cache___024unit__03a__03acache_monitor__Vclpkg TOP____024unit__03a__03acache_monitor__Vclpkg;
    Vtb_cache___024unit__03a__03acache_scoreboard__Vclpkg TOP____024unit__03a__03acache_scoreboard__Vclpkg;
    Vtb_cache___024unit__03a__03acache_transaction__Vclpkg TOP____024unit__03a__03acache_transaction__Vclpkg;
    Vtb_cache___024unit            TOP____024unit;
    Vtb_cache_std                  TOP__std;
    Vtb_cache_cache_if             TOP__tb_cache__DOT__cif;
    Vtb_cache_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vtb_cache_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vtb_cache_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // CONSTRUCTORS
    Vtb_cache__Syms(VerilatedContext* contextp, const char* namep, Vtb_cache* modelp);
    ~Vtb_cache__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void fireEvent(VlEvent& event) {
        if (VL_LIKELY(!event.isTriggered())) {
            __Vm_triggeredEvents.push_back(&event);
        }
        event.fire();
    }
    void clearTriggeredEvents() {
        for (const auto eventp : __Vm_triggeredEvents) eventp->clearTriggered();
        __Vm_triggeredEvents.clear();
    }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
