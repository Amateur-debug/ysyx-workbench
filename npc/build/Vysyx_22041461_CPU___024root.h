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
    CData/*4:0*/ ysyx_22041461_CPU__DOT__ctrl_ALU;
    CData/*2:0*/ ysyx_22041461_CPU__DOT__sel_ALU;
    CData/*1:0*/ ysyx_22041461_CPU__DOT__sel_CMP;
    CData/*0:0*/ ysyx_22041461_CPU__DOT__ctrl_CMP;
    CData/*1:0*/ ysyx_22041461_CPU__DOT__CMP_out;
    CData/*2:0*/ ysyx_22041461_CPU__DOT__sel_REGS;
    CData/*1:0*/ ysyx_22041461_CPU__DOT__sel_PC;
    CData/*3:0*/ ysyx_22041461_CPU__DOT__ctrl_MEM;
    CData/*2:0*/ ysyx_22041461_CPU__DOT__sel_MEM_addr;
    CData/*2:0*/ ysyx_22041461_CPU__DOT__sel_MEM_data;
    CData/*7:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__wmask1;
    CData/*7:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__wmask2;
    SData/*15:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__wmask;
    IData/*31:0*/ ysyx_22041461_CPU__DOT__inst;
    IData/*31:0*/ ysyx_22041461_CPU__DOT__REGS__DOT__i;
    IData/*31:0*/ ysyx_22041461_CPU__DOT__REGS__DOT__j;
    IData/*31:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__SRA__DOT__sra;
    VlWide<4>/*127:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__imm;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__rs1_data;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__rs2_data;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__dest;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__PC__DOT__npc;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__CMP__DOT__src1;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__CMP__DOT__src2;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__src1;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__src2;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__sum;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__SLL_out;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__SRA_out;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__sub;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__SRL_out;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__REM_out;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__SLL__DOT__sll;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__SRL__DOT__srl;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__rinst;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__read_data1;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__read_data2;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__rread_data;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__addr;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__write_data;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__write_data1;
    QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__write_data2;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22041461_CPU__DOT__REGS__DOT__x;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22041461_CPU__DOT__REGS__DOT__d;

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*1:0*/ __Vchglast__TOP__ysyx_22041461_CPU__DOT__CMP_out;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__5__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__6__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__7__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__8__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__9__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__10__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__11__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__12__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__13__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__14__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__15__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__16__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__17__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__18__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__19__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__20__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__21__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__22__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__23__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__24__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__25__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__26__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__27__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__28__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__29__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__30__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__31__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__32__INST;
        IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__33__INST;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__5__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__6__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__7__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__8__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__9__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__10__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__11__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__12__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__13__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__14__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__15__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__16__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__17__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__18__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__19__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__20__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__21__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__22__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__23__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__24__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__25__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__26__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__27__Vfuncout;
    };
    struct {
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__28__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__29__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__30__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__31__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__32__Vfuncout;
        QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__33__Vfuncout;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__37__rdata;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__38__rdata;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__39__rdata;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__40__rdata;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__41__rdata;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__42__rdata;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__43__rdata;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__44__rdata;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__45__rdata;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__46__rdata;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__47__rdata;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__48__rdata;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__49__rdata;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__50__rdata;
        QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__53__rdata;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

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
