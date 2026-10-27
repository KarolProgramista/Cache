// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cache.h for the primary calling header

#include "Vtb_cache__pch.h"

std::string VL_TO_STRING(const Vtb_cache_cache_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_cache_cache_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
