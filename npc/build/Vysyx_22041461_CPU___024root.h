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
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    CData/*2:0*/ ysyx_22041461_CPU__DOT__ctrl_ALU;
    CData/*2:0*/ ysyx_22041461_CPU__DOT__sel_ALU;
    CData/*1:0*/ ysyx_22041461_CPU__DOT__sel_CMP;
    CData/*0:0*/ ysyx_22041461_CPU__DOT__ctrl_CMP;
    CData/*1:0*/ ysyx_22041461_CPU__DOT__CMP_out;
    CData/*2:0*/ ysyx_22041461_CPU__DOT__sel_REGS;
    CData/*1:0*/ ysyx_22041461_CPU__DOT__sel_PC;
    CData/*1:0*/ ysyx_22041461_CPU__DOT__ctrl_MEM;
    CData/*2:0*/ ysyx_22041461_CPU__DOT__sel_MEM_addr;
    CData/*2:0*/ ysyx_22041461_CPU__DOT__sel_MEM_data;
    IData/*31:0*/ ysyx_22041461_CPU__DOT__inst;
    IData/*31:0*/ ysyx_22041461_CPU__DOT__REGS__DOT__i;
    IData/*31:0*/ ysyx_22041461_CPU__DOT__REGS__DOT__j;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__imm;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__rs1_data;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__rs2_data;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__dest;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__mem;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__PC__DOT__npc;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__CMP__DOT__src1;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__CMP__DOT__src2;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__src1;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__src2;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__sum;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__rinst;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__addr;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22041461_CPU__DOT__REGS__DOT__x;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22041461_CPU__DOT__REGS__DOT__d;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*1:0*/ __Vchglast__TOP__ysyx_22041461_CPU__DOT__CMP_out;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__5__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__6__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__7__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__8__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__9__INST;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__5__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__6__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__7__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__8__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__9__Vfuncout;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__13__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__14__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__16__rdata;
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
