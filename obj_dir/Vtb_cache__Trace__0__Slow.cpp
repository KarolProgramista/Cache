// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_cache__Syms.h"


VL_ATTR_COLD void Vtb_cache___024root__trace_init_sub__TOP__tb_cache__DOT__cif__0(Vtb_cache___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_cache___024root__trace_init_sub__TOP__0(Vtb_cache___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root__trace_init_sub__TOP__0\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("tb_cache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+57,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cif", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_cache___024root__trace_init_sub__TOP__tb_cache__DOT__cif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+63,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+64,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"request",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"cpuDataIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+0,0,"cpuDataOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"memAddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+58,0,"memDataIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"memDataOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+4,0,"memWe",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"word_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("tags", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 15; ++i) {
        tracep->declBus(c+6+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 9,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 15; ++i) {
        tracep->declBit(c+21+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("dirty", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 15; ++i) {
        tracep->declBit(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+67,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+69,0,"tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+51,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"memory_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+62,0,"counted_memory_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+70,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+71,0,"LOOKUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+72,0,"FETCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"REPLACE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+52,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+53,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+54,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("ram_if", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vtb_cache___024root__trace_init_sub__TOP__tb_cache__DOT__cif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_cache___024root__trace_init_sub__TOP__tb_cache__DOT__cif__0(Vtb_cache___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root__trace_init_sub__TOP__tb_cache__DOT__cif__0\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+59,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+66,0,"cpuDataIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+55,0,"cpuDataOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,0,"memAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+58,0,"memDataIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"memDataOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+64,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"memWe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_cache___024root__trace_init_top(Vtb_cache___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root__trace_init_top\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cache___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_cache___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_cache___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_cache___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_cache___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_cache___024root__trace_register(Vtb_cache___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root__trace_register\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_cache___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_cache___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_cache___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_cache___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_cache___024root__trace_const_0_sub_0(Vtb_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_cache___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root__trace_const_0\n"); );
    // Body
    Vtb_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cache___024root*>(voidSelf);
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_cache___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_cache___024root__trace_const_0_sub_0(Vtb_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root__trace_const_0_sub_0\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullSData(oldp+63,(vlSymsp->TOP__tb_cache__DOT__cif.addr),16);
    bufp->fullBit(oldp+64,(vlSymsp->TOP__tb_cache__DOT__cif.we));
    bufp->fullBit(oldp+65,(vlSymsp->TOP__tb_cache__DOT__cif.request));
    bufp->fullSData(oldp+66,(vlSymsp->TOP__tb_cache__DOT__cif.cpuDataIn),16);
    bufp->fullCData(oldp+67,((0x0000000fU & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                             >> 2U))),4);
    bufp->fullCData(oldp+68,((3U & (IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr))),2);
    bufp->fullSData(oldp+69,((0x000003ffU & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                             >> 6U))),10);
    bufp->fullCData(oldp+70,(0U),2);
    bufp->fullCData(oldp+71,(1U),2);
    bufp->fullCData(oldp+72,(2U),2);
    bufp->fullCData(oldp+73,(3U),2);
}

VL_ATTR_COLD void Vtb_cache___024root__trace_full_0_sub_0(Vtb_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_cache___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root__trace_full_0\n"); );
    // Body
    Vtb_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cache___024root*>(voidSelf);
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_cache___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_cache___024root__trace_full_0_sub_0(Vtb_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root__trace_full_0_sub_0\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullSData(oldp+0,(vlSelfRef.tb_cache__DOT____Vcellout__dut__cpuDataOut),16);
    bufp->fullBit(oldp+1,(vlSelfRef.tb_cache__DOT____Vcellout__dut__ready));
    bufp->fullSData(oldp+2,(vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr),16);
    bufp->fullSData(oldp+3,(vlSelfRef.tb_cache__DOT____Vcellout__dut__memDataOut),16);
    bufp->fullBit(oldp+4,(vlSelfRef.tb_cache__DOT____Vcellout__dut__memWe));
    bufp->fullCData(oldp+5,(vlSelfRef.tb_cache__DOT__dut__DOT__word_counter),2);
    bufp->fullSData(oldp+6,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[0]),10);
    bufp->fullSData(oldp+7,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[1]),10);
    bufp->fullSData(oldp+8,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[2]),10);
    bufp->fullSData(oldp+9,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[3]),10);
    bufp->fullSData(oldp+10,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[4]),10);
    bufp->fullSData(oldp+11,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[5]),10);
    bufp->fullSData(oldp+12,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[6]),10);
    bufp->fullSData(oldp+13,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[7]),10);
    bufp->fullSData(oldp+14,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[8]),10);
    bufp->fullSData(oldp+15,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[9]),10);
    bufp->fullSData(oldp+16,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[10]),10);
    bufp->fullSData(oldp+17,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[11]),10);
    bufp->fullSData(oldp+18,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[12]),10);
    bufp->fullSData(oldp+19,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[13]),10);
    bufp->fullSData(oldp+20,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[14]),10);
    bufp->fullBit(oldp+21,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[0]));
    bufp->fullBit(oldp+22,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[1]));
    bufp->fullBit(oldp+23,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[2]));
    bufp->fullBit(oldp+24,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[3]));
    bufp->fullBit(oldp+25,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[4]));
    bufp->fullBit(oldp+26,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[5]));
    bufp->fullBit(oldp+27,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[6]));
    bufp->fullBit(oldp+28,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[7]));
    bufp->fullBit(oldp+29,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[8]));
    bufp->fullBit(oldp+30,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[9]));
    bufp->fullBit(oldp+31,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[10]));
    bufp->fullBit(oldp+32,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[11]));
    bufp->fullBit(oldp+33,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[12]));
    bufp->fullBit(oldp+34,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[13]));
    bufp->fullBit(oldp+35,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[14]));
    bufp->fullBit(oldp+36,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[0]));
    bufp->fullBit(oldp+37,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[1]));
    bufp->fullBit(oldp+38,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[2]));
    bufp->fullBit(oldp+39,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[3]));
    bufp->fullBit(oldp+40,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[4]));
    bufp->fullBit(oldp+41,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[5]));
    bufp->fullBit(oldp+42,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[6]));
    bufp->fullBit(oldp+43,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[7]));
    bufp->fullBit(oldp+44,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[8]));
    bufp->fullBit(oldp+45,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[9]));
    bufp->fullBit(oldp+46,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[10]));
    bufp->fullBit(oldp+47,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[11]));
    bufp->fullBit(oldp+48,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[12]));
    bufp->fullBit(oldp+49,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[13]));
    bufp->fullBit(oldp+50,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[14]));
    bufp->fullBit(oldp+51,(((0x0eU >= (0x0000000fU 
                                       & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                          >> 2U))) 
                            & (vlSelfRef.tb_cache__DOT__dut__DOT__valid
                               [(0x0000000fU & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                                >> 2U))] 
                               & (((0x0eU >= (0x0000000fU 
                                              & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                                 >> 2U)))
                                    ? vlSelfRef.tb_cache__DOT__dut__DOT__tags
                                   [(0x0000000fU & 
                                     ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                      >> 2U))] : 0U) 
                                  == (0x000003ffU & 
                                      ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                       >> 6U)))))));
    bufp->fullCData(oldp+52,(vlSelfRef.tb_cache__DOT__dut__DOT__state),2);
    bufp->fullIData(oldp+53,(vlSelfRef.tb_cache__DOT__dut__DOT__i),32);
    bufp->fullIData(oldp+54,(vlSelfRef.tb_cache__DOT__dut__DOT__j),32);
    bufp->fullSData(oldp+55,(vlSymsp->TOP__tb_cache__DOT__cif.cpuDataOut),16);
    bufp->fullBit(oldp+56,(vlSymsp->TOP__tb_cache__DOT__cif.ready));
    bufp->fullBit(oldp+57,(vlSelfRef.tb_cache__DOT__clk));
    bufp->fullSData(oldp+58,(((0x03feU >= (0x000003ffU 
                                           & (IData)(vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr)))
                               ? vlSelfRef.tb_cache__DOT__ram__DOT__mem
                              [(0x000003ffU & (IData)(vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr))]
                               : 0U)),16);
    bufp->fullBit(oldp+59,(vlSymsp->TOP__tb_cache__DOT__cif.clk));
    bufp->fullBit(oldp+60,(vlSymsp->TOP__tb_cache__DOT__cif.reset));
    bufp->fullCData(oldp+61,(vlSelfRef.tb_cache__DOT__dut__DOT__memory_address),6);
    bufp->fullCData(oldp+62,(vlSelfRef.tb_cache__DOT__dut__DOT__counted_memory_address),6);
}
