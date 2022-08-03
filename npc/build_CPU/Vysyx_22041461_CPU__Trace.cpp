// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22041461_CPU__Syms.h"


void Vysyx_22041461_CPU___024root__traceChgSub0(Vysyx_22041461_CPU___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22041461_CPU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22041461_CPU___024root* const __restrict vlSelf = static_cast<Vysyx_22041461_CPU___024root*>(voidSelf);
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22041461_CPU___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22041461_CPU___024root__traceChgSub0(Vysyx_22041461_CPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+1,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0]),64);
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[1]),64);
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[2]),64);
            tracep->chgQData(oldp+7,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[3]),64);
            tracep->chgQData(oldp+9,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[4]),64);
            tracep->chgQData(oldp+11,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[5]),64);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[6]),64);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[7]),64);
            tracep->chgQData(oldp+17,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[8]),64);
            tracep->chgQData(oldp+19,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[9]),64);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[10]),64);
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[11]),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[12]),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[13]),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[14]),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[15]),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[16]),64);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[17]),64);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[18]),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[19]),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[20]),64);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[21]),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[22]),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[23]),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[24]),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[25]),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[26]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[27]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[28]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[29]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[30]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[31]),64);
            tracep->chgIData(oldp+65,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__j),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22041461_CPU__DOT__imm),64);
            tracep->chgBit(oldp+68,(vlSelf->ysyx_22041461_CPU__DOT__en_regw));
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22041461_CPU__DOT__data_rs1),64);
            tracep->chgQData(oldp+71,((vlSelf->ysyx_22041461_CPU__DOT__data_rs1 
                                       + vlSelf->ysyx_22041461_CPU__DOT__imm)),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0]),64);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1]),64);
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2]),64);
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3]),64);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4]),64);
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5]),64);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6]),64);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7]),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8]),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9]),64);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[10]),64);
            tracep->chgQData(oldp+95,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[11]),64);
            tracep->chgQData(oldp+97,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[12]),64);
            tracep->chgQData(oldp+99,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[13]),64);
            tracep->chgQData(oldp+101,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[14]),64);
            tracep->chgQData(oldp+103,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[15]),64);
            tracep->chgQData(oldp+105,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[16]),64);
            tracep->chgQData(oldp+107,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[17]),64);
            tracep->chgQData(oldp+109,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[18]),64);
            tracep->chgQData(oldp+111,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[19]),64);
            tracep->chgQData(oldp+113,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[20]),64);
            tracep->chgQData(oldp+115,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[21]),64);
            tracep->chgQData(oldp+117,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[22]),64);
            tracep->chgQData(oldp+119,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[23]),64);
            tracep->chgQData(oldp+121,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[24]),64);
            tracep->chgQData(oldp+123,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[25]),64);
            tracep->chgQData(oldp+125,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[26]),64);
            tracep->chgQData(oldp+127,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[27]),64);
            tracep->chgQData(oldp+129,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[28]),64);
            tracep->chgQData(oldp+131,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[29]),64);
            tracep->chgQData(oldp+133,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[30]),64);
            tracep->chgQData(oldp+135,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[31]),64);
        }
        tracep->chgBit(oldp+137,(vlSelf->clk));
        tracep->chgBit(oldp+138,(vlSelf->rst));
        tracep->chgIData(oldp+139,(vlSelf->inst),32);
        tracep->chgQData(oldp+140,(vlSelf->pc),64);
        tracep->chgBit(oldp+142,(vlSelf->flag));
        tracep->chgCData(oldp+143,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+144,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+145,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+146,((0x7fU & vlSelf->inst)),7);
    }
}

void Vysyx_22041461_CPU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22041461_CPU___024root* const __restrict vlSelf = static_cast<Vysyx_22041461_CPU___024root*>(voidSelf);
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
