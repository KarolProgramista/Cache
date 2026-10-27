// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTB_CACHE_H_
#define VERILATED_VTB_CACHE_H_  // guard

#include "verilated.h"

class Vtb_cache__Syms;
class Vtb_cache___024root;
class VerilatedVcdC;
class Vtb_cache___024unit;
class Vtb_cache___024unit__03a__03acache_driver;
class Vtb_cache___024unit__03a__03acache_driver__Vclpkg;
class Vtb_cache___024unit__03a__03acache_monitor;
class Vtb_cache___024unit__03a__03acache_monitor__Vclpkg;
class Vtb_cache___024unit__03a__03acache_scoreboard;
class Vtb_cache___024unit__03a__03acache_scoreboard__Vclpkg;
class Vtb_cache___024unit__03a__03acache_transaction__Vclpkg;
class Vtb_cache_cache_if;
class Vtb_cache_std;
class Vtb_cache_std__03a__03amailbox__Tz1;
class Vtb_cache_std__03a__03amailbox__Tz1__Vclpkg;
class Vtb_cache_std__03a__03aprocess__Vclpkg;
class Vtb_cache_std__03a__03asemaphore__Vclpkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtb_cache VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtb_cache__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtb_cache___024unit* const __PVT____024unit;
    Vtb_cache_std* const __PVT__std;
    Vtb_cache_cache_if* const __PVT__tb_cache__DOT__cif;
    Vtb_cache___024unit__03a__03acache_driver__Vclpkg* const __024unit__03a__03acache_driver__Vclpkg;
    Vtb_cache___024unit__03a__03acache_monitor__Vclpkg* const __024unit__03a__03acache_monitor__Vclpkg;
    Vtb_cache___024unit__03a__03acache_scoreboard__Vclpkg* const __024unit__03a__03acache_scoreboard__Vclpkg;
    Vtb_cache___024unit__03a__03acache_transaction__Vclpkg* const __024unit__03a__03acache_transaction__Vclpkg;
    Vtb_cache_std__03a__03asemaphore__Vclpkg* const std__03a__03asemaphore__Vclpkg;
    Vtb_cache_std__03a__03aprocess__Vclpkg* const std__03a__03aprocess__Vclpkg;
    Vtb_cache_std__03a__03amailbox__Tz1__Vclpkg* const std__03a__03amailbox__Tz1__Vclpkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtb_cache___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtb_cache(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtb_cache(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtb_cache();
  private:
    VL_UNCOPYABLE(Vtb_cache);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); eval_end_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
