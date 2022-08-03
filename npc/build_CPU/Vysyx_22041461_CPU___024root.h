// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22041461_CPU.h for the primary calling header

#ifndef VERILATED_VYSYX_22041461_CPU___024ROOT_H_
#define VERILATED_VYSYX_22041461_CPU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22041461_CPU__Syms;
class Vysyx_22041461_CPU_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22041461_CPU___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(flag,0,0);
    VL_IN(inst,31,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ ysyx_22041461_CPU__DOT__en_regw;
    IData/*31:0*/ ysyx_22041461_CPU__DOT__REGS__DOT__i;
    IData/*31:0*/ ysyx_22041461_CPU__DOT__REGS__DOT__j;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__imm;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__data_rs1;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22041461_CPU__DOT__REGS__DOT__x;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22041461_CPU__DOT__REGS__DOT__d;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22041461_CPU__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22041461_CPU___024root);  ///< Copying not allowed
  public:
    Vysyx_22041461_CPU___024root(const char* name);
    ~Vysyx_22041461_CPU___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22041461_CPU__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
