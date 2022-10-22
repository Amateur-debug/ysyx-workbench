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
    VL_OUT(inst,31,0);
    VL_OUT64(pc,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__WB__DOT__rst_r2;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD_IF_valid;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD_IF_enable;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD_ID_enable;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD_EXE_valid;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD_EXE_enable;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD_MEM_valid;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD_MEM_enable;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD_WB_valid;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__IFreg_valid_out;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__IF_valid_out;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__IDreg_valid_out;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__ID_valid_out;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__ID_PC_ctrl;
        CData/*2:0*/ ysyx_22041461_CPU__DOT__ID_CD_ctrl;
        CData/*4:0*/ ysyx_22041461_CPU__DOT__ID_EXE_ctrl;
        CData/*2:0*/ ysyx_22041461_CPU__DOT__ID_EXE_src;
        CData/*3:0*/ ysyx_22041461_CPU__DOT__ID_MEM_ctrl;
        CData/*3:0*/ ysyx_22041461_CPU__DOT__ID_WB_ctrl;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__EXEreg_valid_out;
        CData/*4:0*/ ysyx_22041461_CPU__DOT__EXEreg_rd_out;
        CData/*4:0*/ ysyx_22041461_CPU__DOT__EXEreg_rs1_out;
        CData/*4:0*/ ysyx_22041461_CPU__DOT__EXEreg_rs2_out;
        CData/*4:0*/ ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out;
        CData/*2:0*/ ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out;
        CData/*3:0*/ ysyx_22041461_CPU__DOT__EXEreg_MEM_ctrl_out;
        CData/*3:0*/ ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__MEMreg_valid_out;
        CData/*4:0*/ ysyx_22041461_CPU__DOT__MEMreg_rd_out;
        CData/*4:0*/ ysyx_22041461_CPU__DOT__MEMreg_rs1_out;
        CData/*4:0*/ ysyx_22041461_CPU__DOT__MEMreg_rs2_out;
        CData/*3:0*/ ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out;
        CData/*3:0*/ ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__WBreg_valid_out;
        CData/*4:0*/ ysyx_22041461_CPU__DOT__WBreg_rd_out;
        CData/*4:0*/ ysyx_22041461_CPU__DOT__WBreg_rs1_out;
        CData/*3:0*/ ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r1;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r1;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r1;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r1;
        CData/*7:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__wmask1;
        CData/*7:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__wmask2;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r1;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__WB__DOT__rst_r1;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__ID_rs1_read;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__ID_rs2_read;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__ID_mtvec_read;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__ID_mepc_read;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__EXE_ecall_write;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs1_read;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs2_read;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_read;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read;
    };
    struct {
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write;
        CData/*0:0*/ ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write;
        SData/*11:0*/ ysyx_22041461_CPU__DOT__EXEreg_csr_out;
        SData/*11:0*/ ysyx_22041461_CPU__DOT__MEMreg_csr_out;
        SData/*11:0*/ ysyx_22041461_CPU__DOT__WBreg_csr_out;
        SData/*15:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__wmask;
        IData/*31:0*/ ysyx_22041461_CPU__DOT__IDreg_inst_out;
        VlWide<4>/*127:0*/ ysyx_22041461_CPU__DOT__EXE__DOT__middle;
        IData/*31:0*/ ysyx_22041461_CPU__DOT__WB__DOT__i;
        IData/*31:0*/ ysyx_22041461_CPU__DOT__WB__DOT__j;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__IFreg_pc;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__IDreg_pc_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__ID_imm;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__ID_next_pc;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__EXEreg_imm_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__EXEreg_zimm_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__EXEreg_pc_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__EXE_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__MEMreg_EXE_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__MEMreg_imm_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__MEMreg_zimm_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__MEMreg_pc_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WBreg_EXE_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WBreg_MEM_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WBreg_imm_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WBreg_zimm_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WBreg_pc_out;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WB_ID_rs1_data;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WB_ID_rs2_data;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WB_EXE_rs1_data;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WB_EXE_csr_data;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WB_MEM_rs2_data;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__IF__DOT__rinst;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__EXE__DOT__src1;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__EXE__DOT__src2;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__read_data1;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__read_data2;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__read_data;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__write_data1;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__MEM__DOT__write_data2;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WB__DOT__mtvec;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WB__DOT__mtvec_next;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WB__DOT__mepc;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WB__DOT__mepc_next;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WB__DOT__mcause;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WB__DOT__mcause_next;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WB__DOT__mstatus;
        QData/*63:0*/ ysyx_22041461_CPU__DOT__WB__DOT__mstatus_next;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22041461_CPU__DOT__WB__DOT__x;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22041461_CPU__DOT__WB__DOT__d;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__ysyx_22041461_CPU__DOT__MEMreg_valid_out;
    CData/*4:0*/ __Vdly__ysyx_22041461_CPU__DOT__MEMreg_rd_out;
    CData/*4:0*/ __Vdly__ysyx_22041461_CPU__DOT__MEMreg_rs1_out;
    CData/*3:0*/ __Vdly__ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out;
    CData/*0:0*/ __VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2;
    CData/*0:0*/ __VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2;
    CData/*0:0*/ __VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2;
    CData/*0:0*/ __VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2;
    CData/*0:0*/ __VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2;
    CData/*0:0*/ __VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2;
    CData/*0:0*/ __Vchglast__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2;
    CData/*0:0*/ __Vchglast__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2;
    CData/*0:0*/ __Vchglast__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2;
    CData/*0:0*/ __Vchglast__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2;
    CData/*0:0*/ __Vchglast__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2;
    CData/*0:0*/ __Vchglast__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2;
    SData/*11:0*/ __Vdly__ysyx_22041461_CPU__DOT__MEMreg_csr_out;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immJ__8__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__12__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immB__16__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__25__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immS__46__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__51__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__57__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__60__INST;
    IData/*31:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__67__INST;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__IF__DOT__pmem_read_pc__1__rdata;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immJ__8__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__12__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immB__16__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__25__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immS__46__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__51__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__57__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__60__Vfuncout;
    QData/*63:0*/ __Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__67__Vfuncout;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__74__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__75__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__76__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__77__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__78__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__79__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__80__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__81__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__82__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__83__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__84__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__85__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__86__rdata;
    QData/*63:0*/ __Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__87__rdata;
    QData/*63:0*/ __Vdly__ysyx_22041461_CPU__DOT__IFreg_pc;
    QData/*63:0*/ __Vdly__ysyx_22041461_CPU__DOT__MEMreg_zimm_out;
    QData/*63:0*/ __Vdly__ysyx_22041461_CPU__DOT__MEMreg_EXE_out;
    QData/*63:0*/ __Vdly__ysyx_22041461_CPU__DOT__MEMreg_imm_out;
    QData/*63:0*/ __Vdly__ysyx_22041461_CPU__DOT__MEMreg_pc_out;
    VlUnpacked<CData/*0:0*/, 14> __Vm_traceActivity;

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
