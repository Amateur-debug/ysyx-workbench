// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22041461_ADDER__Syms.h"


void Vysyx_22041461_ADDER___024root__traceInitSub0(Vysyx_22041461_ADDER___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22041461_ADDER___024root__traceInitTop(Vysyx_22041461_ADDER___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_ADDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22041461_ADDER___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22041461_ADDER___024root__traceInitSub0(Vysyx_22041461_ADDER___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_ADDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declQuad(c+1,"in1", false,-1, 63,0);
        tracep->declQuad(c+3,"in2", false,-1, 63,0);
        tracep->declQuad(c+5,"sum", false,-1, 63,0);
        tracep->declBus(c+7,"flag", false,-1, 0,0);
        tracep->declQuad(c+1,"ysyx_22041461_ADDER in1", false,-1, 63,0);
        tracep->declQuad(c+3,"ysyx_22041461_ADDER in2", false,-1, 63,0);
        tracep->declQuad(c+5,"ysyx_22041461_ADDER sum", false,-1, 63,0);
        tracep->declBus(c+7,"ysyx_22041461_ADDER flag", false,-1, 0,0);
    }
}

void Vysyx_22041461_ADDER___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22041461_ADDER___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22041461_ADDER___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22041461_ADDER___024root__traceRegister(Vysyx_22041461_ADDER___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_ADDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22041461_ADDER___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22041461_ADDER___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22041461_ADDER___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22041461_ADDER___024root__traceFullSub0(Vysyx_22041461_ADDER___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22041461_ADDER___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22041461_ADDER___024root* const __restrict vlSelf = static_cast<Vysyx_22041461_ADDER___024root*>(voidSelf);
    Vysyx_22041461_ADDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22041461_ADDER___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22041461_ADDER___024root__traceFullSub0(Vysyx_22041461_ADDER___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_ADDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->in1),64);
        tracep->fullQData(oldp+3,(vlSelf->in2),64);
        tracep->fullQData(oldp+5,(vlSelf->sum),64);
        tracep->fullBit(oldp+7,(vlSelf->flag));
    }
}
