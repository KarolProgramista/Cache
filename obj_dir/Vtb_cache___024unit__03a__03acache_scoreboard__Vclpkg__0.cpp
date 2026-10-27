// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache.h for the primary calling header

#include "Vtb_cache__pch.h"

Vtb_cache___024unit__03a__03acache_scoreboard::Vtb_cache___024unit__03a__03acache_scoreboard(Vtb_cache__Syms* __restrict vlSymsp, VlClassRef<Vtb_cache_std__03a__03amailbox__Tz1> mbx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_scoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__match_count = 0U;
    this->__PVT__error_count = 0U;
    this->__PVT__mon2scb_mbx = mbx;
}

VlCoroutine Vtb_cache___024unit__03a__03acache_scoreboard::__VnoInFunc_run(Vtb_cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_scoreboard::__VnoInFunc_run\n"); );
    // Body
    VL_KEEP_THIS;
    SData/*15:0*/ unnamedblk1__DOT__exp_data;
    VlClassRef<Vtb_cache___024unit__03a__03acache_transaction> tr;
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__mon2scb_mbx, "tb_sv/cache_scoreboard.sv", 19)->__VnoInFunc_get(vlSymsp, tr);
        if (VL_UNLIKELY((VL_NULL_CHECK(tr, "tb_sv/cache_scoreboard.sv", 21)
                         ->__PVT__we))) {
            this->__PVT__ref_mem.at(VL_NULL_CHECK(tr, "tb_sv/cache_scoreboard.sv", 22)
                                    ->__PVT__addr) 
                = VL_NULL_CHECK(tr, "tb_sv/cache_scoreboard.sv", 22)
                ->__PVT__dataIn;
            VL_WRITEF_NX("[%0t] [SCOREBOARD] WRITE: Addr=0x%0x | Data=0x%0x\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         16,VL_NULL_CHECK(tr, "tb_sv/cache_scoreboard.sv", 24)
                         ->__PVT__addr,16,VL_NULL_CHECK(tr, "tb_sv/cache_scoreboard.sv", 24)
                         ->__PVT__dataIn);
        } else {
            unnamedblk1__DOT__exp_data = 0;
            if (this->__PVT__ref_mem.exists(VL_NULL_CHECK(tr, "tb_sv/cache_scoreboard.sv", 28)
                                            ->__PVT__addr)) {
                unnamedblk1__DOT__exp_data = this->__PVT__ref_mem
                    .at(VL_NULL_CHECK(tr, "tb_sv/cache_scoreboard.sv", 29)
                        ->__PVT__addr);
            } else {
                unnamedblk1__DOT__exp_data = (0x0000ffffU 
                                              & ((IData)(0x1000U) 
                                                 + VL_NULL_CHECK(tr, "tb_sv/cache_scoreboard.sv", 31)
                                                 ->__PVT__addr));
            }
            if ((VL_NULL_CHECK(tr, "tb_sv/cache_scoreboard.sv", 33)
                 ->__PVT__dataOut == (IData)(unnamedblk1__DOT__exp_data))) {
                VL_WRITEF_NX("[%0t] [SCB PASS]: addr=0x%0x | exp=0x%0x | got=0x%0x\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,16,VL_NULL_CHECK(tr, "tb_sv/cache_scoreboard.sv", 35)
                             ->__PVT__addr,16,(IData)(unnamedblk1__DOT__exp_data),
                             16,VL_NULL_CHECK(tr, "tb_sv/cache_scoreboard.sv", 35)
                             ->__PVT__dataOut);
                this->__PVT__match_count = ((IData)(1U) 
                                            + this->__PVT__match_count);
            } else {
                VL_WRITEF_NX("[%0t] [SCB FAILS]: addr=0x%0x | exp=0x%0x | got=0x%0x\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,16,VL_NULL_CHECK(tr, "tb_sv/cache_scoreboard.sv", 39)
                             ->__PVT__addr,16,(IData)(unnamedblk1__DOT__exp_data),
                             16,VL_NULL_CHECK(tr, "tb_sv/cache_scoreboard.sv", 39)
                             ->__PVT__dataOut);
                this->__PVT__match_count = ((IData)(1U) 
                                            + this->__PVT__match_count);
            }
        }
    }
    co_return;
}

void Vtb_cache___024unit__03a__03acache_scoreboard::_ctor_var_reset(Vtb_cache__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_scoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__ref_mem.atDefault() = VL_SCOPED_RAND_RESET_I(16, 3891697888980608832ULL, 10001032053520499588ull);
}

std::string Vtb_cache___024unit__03a__03acache_scoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_scoreboard::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_cache___024unit__03a__03acache_scoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_cache___024unit__03a__03acache_scoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mon2scb_mbx:" + VL_TO_STRING(__PVT__mon2scb_mbx);
    out += ", ref_mem:" + VL_TO_STRING(__PVT__ref_mem);
    out += ", match_count:" + VL_TO_STRING(__PVT__match_count);
    out += ", error_count:" + VL_TO_STRING(__PVT__error_count);
    return (out);
}
