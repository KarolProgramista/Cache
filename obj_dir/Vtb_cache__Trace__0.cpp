// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_cache__Syms.h"


void Vtb_cache___024root__trace_chg_0_sub_0(Vtb_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_cache___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root__trace_chg_0\n"); );
    // Body
    Vtb_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cache___024root*>(voidSelf);
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_cache___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_cache___024root__trace_chg_0_sub_0(Vtb_cache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root__trace_chg_0_sub_0\n"); );
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgSData(oldp+0,(vlSelfRef.tb_cache__DOT____Vcellout__dut__cpuDataOut),16);
        bufp->chgBit(oldp+1,(vlSelfRef.tb_cache__DOT____Vcellout__dut__ready));
        bufp->chgSData(oldp+2,(vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr),16);
        bufp->chgSData(oldp+3,(vlSelfRef.tb_cache__DOT____Vcellout__dut__memDataOut),16);
        bufp->chgBit(oldp+4,(vlSelfRef.tb_cache__DOT____Vcellout__dut__memWe));
        bufp->chgCData(oldp+5,(vlSelfRef.tb_cache__DOT__dut__DOT__word_counter),2);
        bufp->chgSData(oldp+6,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[0]),10);
        bufp->chgSData(oldp+7,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[1]),10);
        bufp->chgSData(oldp+8,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[2]),10);
        bufp->chgSData(oldp+9,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[3]),10);
        bufp->chgSData(oldp+10,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[4]),10);
        bufp->chgSData(oldp+11,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[5]),10);
        bufp->chgSData(oldp+12,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[6]),10);
        bufp->chgSData(oldp+13,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[7]),10);
        bufp->chgSData(oldp+14,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[8]),10);
        bufp->chgSData(oldp+15,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[9]),10);
        bufp->chgSData(oldp+16,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[10]),10);
        bufp->chgSData(oldp+17,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[11]),10);
        bufp->chgSData(oldp+18,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[12]),10);
        bufp->chgSData(oldp+19,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[13]),10);
        bufp->chgSData(oldp+20,(vlSelfRef.tb_cache__DOT__dut__DOT__tags[14]),10);
        bufp->chgBit(oldp+21,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[0]));
        bufp->chgBit(oldp+22,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[1]));
        bufp->chgBit(oldp+23,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[2]));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[3]));
        bufp->chgBit(oldp+25,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[4]));
        bufp->chgBit(oldp+26,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[5]));
        bufp->chgBit(oldp+27,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[6]));
        bufp->chgBit(oldp+28,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[7]));
        bufp->chgBit(oldp+29,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[8]));
        bufp->chgBit(oldp+30,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[9]));
        bufp->chgBit(oldp+31,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[10]));
        bufp->chgBit(oldp+32,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[11]));
        bufp->chgBit(oldp+33,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[12]));
        bufp->chgBit(oldp+34,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[13]));
        bufp->chgBit(oldp+35,(vlSelfRef.tb_cache__DOT__dut__DOT__valid[14]));
        bufp->chgBit(oldp+36,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[0]));
        bufp->chgBit(oldp+37,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[1]));
        bufp->chgBit(oldp+38,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[2]));
        bufp->chgBit(oldp+39,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[3]));
        bufp->chgBit(oldp+40,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[4]));
        bufp->chgBit(oldp+41,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[5]));
        bufp->chgBit(oldp+42,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[6]));
        bufp->chgBit(oldp+43,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[7]));
        bufp->chgBit(oldp+44,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[8]));
        bufp->chgBit(oldp+45,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[9]));
        bufp->chgBit(oldp+46,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[10]));
        bufp->chgBit(oldp+47,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[11]));
        bufp->chgBit(oldp+48,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[12]));
        bufp->chgBit(oldp+49,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[13]));
        bufp->chgBit(oldp+50,(vlSelfRef.tb_cache__DOT__dut__DOT__dirty[14]));
        bufp->chgBit(oldp+51,(((0x0eU >= (0x0000000fU 
                                          & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                             >> 2U))) 
                               & (vlSelfRef.tb_cache__DOT__dut__DOT__valid
                                  [(0x0000000fU & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                                   >> 2U))] 
                                  & (((0x0eU >= (0x0000000fU 
                                                 & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                                    >> 2U)))
                                       ? vlSelfRef.tb_cache__DOT__dut__DOT__tags
                                      [(0x0000000fU 
                                        & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                           >> 2U))]
                                       : 0U) == (0x000003ffU 
                                                 & ((IData)(vlSymsp->TOP__tb_cache__DOT__cif.addr) 
                                                    >> 6U)))))));
        bufp->chgCData(oldp+52,(vlSelfRef.tb_cache__DOT__dut__DOT__state),2);
        bufp->chgIData(oldp+53,(vlSelfRef.tb_cache__DOT__dut__DOT__i),32);
        bufp->chgIData(oldp+54,(vlSelfRef.tb_cache__DOT__dut__DOT__j),32);
        bufp->chgSData(oldp+55,(vlSymsp->TOP__tb_cache__DOT__cif.cpuDataOut),16);
        bufp->chgBit(oldp+56,(vlSymsp->TOP__tb_cache__DOT__cif.ready));
    }
    bufp->chgBit(oldp+57,(vlSelfRef.tb_cache__DOT__clk));
    bufp->chgSData(oldp+58,(((0x03feU >= (0x000003ffU 
                                          & (IData)(vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr)))
                              ? vlSelfRef.tb_cache__DOT__ram__DOT__mem
                             [(0x000003ffU & (IData)(vlSelfRef.tb_cache__DOT____Vcellout__dut__memAddr))]
                              : 0U)),16);
    bufp->chgBit(oldp+59,(vlSymsp->TOP__tb_cache__DOT__cif.clk));
    bufp->chgBit(oldp+60,(vlSymsp->TOP__tb_cache__DOT__cif.reset));
    bufp->chgCData(oldp+61,(vlSelfRef.tb_cache__DOT__dut__DOT__memory_address),6);
    bufp->chgCData(oldp+62,(vlSelfRef.tb_cache__DOT__dut__DOT__counted_memory_address),6);
}

void Vtb_cache___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cache___024root__trace_cleanup\n"); );
    // Body
    Vtb_cache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cache___024root*>(voidSelf);
    Vtb_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
