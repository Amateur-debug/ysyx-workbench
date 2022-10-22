// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22041461_CPU.h for the primary calling header

#include "Vysyx_22041461_CPU___024root.h"
#include "Vysyx_22041461_CPU__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22041461_CPU___024root___ctor_var_reset(Vysyx_22041461_CPU___024root* vlSelf);

Vysyx_22041461_CPU___024root::Vysyx_22041461_CPU___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22041461_CPU___024root___ctor_var_reset(this);
}

void Vysyx_22041461_CPU___024root::__Vconfigure(Vysyx_22041461_CPU__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22041461_CPU___024root::~Vysyx_22041461_CPU___024root() {
}

void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__IF_reg__DOT__set_pc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);
void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__WB__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22041461_CPU___024root___initial__TOP__8(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___initial__TOP__8\n"); );
    // Body
    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__IF_reg__DOT__set_pc_ptr__Vdpioc2_TOP(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc);
    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__WB__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x);
}

void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__IF__DOT__pmem_read_pc_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__ebreak_TOP();
extern const VlUnpacked<SData/*15:0*/, 16> Vysyx_22041461_CPU__ConstPool__TABLE_e6aad71a_0;
void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(QData/*63:0*/ rMEM_EXE_in, QData/*63:0*/ &rdata);
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_22041461_CPU__ConstPool__TABLE_d1140eb3_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_22041461_CPU__ConstPool__TABLE_8cb9ad1b_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_22041461_CPU__ConstPool__TABLE_be24ae63_0;
void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__set_difftest_next_TOP();
void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_write_TOP(QData/*63:0*/ wMEM_EXE_in, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

void Vysyx_22041461_CPU___024root___settle__TOP__9(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___settle__TOP__9\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    SData/*8:0*/ __Vtableidx2;
    VlWide<4>/*127:0*/ __Vtemp19;
    VlWide<4>/*127:0*/ __Vtemp20;
    VlWide<4>/*127:0*/ __Vtemp21;
    VlWide<4>/*127:0*/ __Vtemp22;
    VlWide<4>/*127:0*/ __Vtemp23;
    VlWide<4>/*127:0*/ __Vtemp24;
    VlWide<4>/*127:0*/ __Vtemp25;
    VlWide<4>/*127:0*/ __Vtemp26;
    VlWide<4>/*127:0*/ __Vtemp27;
    // Body
    vlSelf->pc = vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out;
    vlSelf->inst = vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out;
    if (vlSelf->ysyx_22041461_CPU__DOT__IFreg_valid_out) {
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__IF__DOT__pmem_read_pc_TOP(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__IF__DOT__pmem_read_pc__1__rdata);
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__rinst 
            = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__IF__DOT__pmem_read_pc__1__rdata;
        vlSelf->ysyx_22041461_CPU__DOT__IF_valid_out = 1U;
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__rinst = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__IF_valid_out = 0U;
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__WBreg_valid_out) {
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__i = 0x20U;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[1U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [1U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[2U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [2U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[3U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [3U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[4U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [4U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[5U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [5U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[6U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [6U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[7U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [7U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[8U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [8U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[9U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [9U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0xaU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0xaU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0xbU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0xbU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0xcU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0xcU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0xdU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0xdU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0xeU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0xeU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0xfU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0xfU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x10U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x10U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x11U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x11U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x12U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x12U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x13U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x13U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x14U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x14U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x15U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x15U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x16U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x16U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x17U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x17U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x18U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x18U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x19U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x19U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x1aU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x1aU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x1bU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x1bU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x1cU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x1cU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x1dU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x1dU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x1eU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x1eU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x1fU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x1fU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec_next 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc_next 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause_next 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus_next 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus;
        if ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out)))) {
                        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc_next 
                            = vlSelf->ysyx_22041461_CPU__DOT__WBreg_pc_out;
                        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause_next = 0xbULL;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))) {
            if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))) {
                    if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec;
                        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec_next 
                            = vlSelf->ysyx_22041461_CPU__DOT__WBreg_zimm_out;
                    } else if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc;
                        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc_next 
                            = vlSelf->ysyx_22041461_CPU__DOT__WBreg_zimm_out;
                    } else if ((0x342U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause;
                        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause_next 
                            = vlSelf->ysyx_22041461_CPU__DOT__WBreg_zimm_out;
                    } else if ((0x300U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus;
                        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus_next 
                            = vlSelf->ysyx_22041461_CPU__DOT__WBreg_zimm_out;
                    } else {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__ebreak_TOP();
                    }
                } else if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec;
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec_next 
                        = vlSelf->ysyx_22041461_CPU__DOT__WBreg_EXE_out;
                } else if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc;
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc_next 
                        = vlSelf->ysyx_22041461_CPU__DOT__WBreg_EXE_out;
                } else if ((0x342U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause;
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause_next 
                        = vlSelf->ysyx_22041461_CPU__DOT__WBreg_EXE_out;
                } else if ((0x300U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus;
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus_next 
                        = vlSelf->ysyx_22041461_CPU__DOT__WBreg_EXE_out;
                } else {
                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__ebreak_TOP();
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))) {
                if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec;
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec_next 
                        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
                        [vlSelf->ysyx_22041461_CPU__DOT__WBreg_rs1_out];
                } else if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc;
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc_next 
                        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
                        [vlSelf->ysyx_22041461_CPU__DOT__WBreg_rs1_out];
                } else if ((0x342U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause;
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause_next 
                        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
                        [vlSelf->ysyx_22041461_CPU__DOT__WBreg_rs1_out];
                } else if ((0x300U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus;
                    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus_next 
                        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
                        [vlSelf->ysyx_22041461_CPU__DOT__WBreg_rs1_out];
                } else {
                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__ebreak_TOP();
                }
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                    = (4ULL + vlSelf->ysyx_22041461_CPU__DOT__WBreg_pc_out);
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))) {
            vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                = ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))
                    ? vlSelf->ysyx_22041461_CPU__DOT__WBreg_imm_out
                    : vlSelf->ysyx_22041461_CPU__DOT__WBreg_MEM_out);
        } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))) {
            vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out] 
                = vlSelf->ysyx_22041461_CPU__DOT__WBreg_EXE_out;
        }
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__i = 0x20U;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec_next 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc_next 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause_next 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus_next 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[1U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [1U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[2U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [2U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[3U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [3U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[4U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [4U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[5U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [5U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[6U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [6U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[7U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [7U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[8U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [8U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[9U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [9U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0xaU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0xaU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0xbU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0xbU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0xcU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0xcU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0xdU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0xdU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0xeU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0xeU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0xfU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0xfU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x10U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x10U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x11U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x11U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x12U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x12U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x13U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x13U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x14U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x14U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x15U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x15U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x16U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x16U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x17U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x17U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x18U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x18U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x19U] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x19U];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x1aU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x1aU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x1bU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x1bU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x1cU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x1cU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x1dU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x1dU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x1eU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x1eU];
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0x1fU] 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
            [0x1fU];
    }
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0U] = 0ULL;
    vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_rs1_data 
        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
        [vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out];
    vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
        [vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out];
    __Vtableidx1 = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out;
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask 
        = Vysyx_22041461_CPU__ConstPool__TABLE_e6aad71a_0
        [__Vtableidx1];
    if (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out) {
        if ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))) {
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 = 0ULL;
        } else if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))) {
            if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))) {
                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__74__rdata);
                    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                        = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__74__rdata;
                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__75__rdata);
                    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                        = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__75__rdata;
                } else {
                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__76__rdata);
                    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                        = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__76__rdata;
                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__77__rdata);
                    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                        = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__77__rdata;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))) {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__78__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__78__rdata;
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__79__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__79__rdata;
            } else {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__80__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__80__rdata;
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__81__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__81__rdata;
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))) {
            if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))) {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__82__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__82__rdata;
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__83__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__83__rdata;
            } else {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__84__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__84__rdata;
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__85__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__85__rdata;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))) {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__86__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__86__rdata;
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__87__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__87__rdata;
        } else {
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 = 0ULL;
        }
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 = 0ULL;
    }
    vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_csr_data 
        = ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out))
            ? vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec
            : ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out))
                ? vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc
                : ((0x342U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out))
                    ? vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause
                    : ((0x300U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out))
                        ? vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus
                        : 0ULL))));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out) 
           & (((((((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out)) 
                   | (2U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out))) 
                  | (3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out))) 
                 | (4U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out))) 
                | (5U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out))) 
               | (6U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out))) 
              | (7U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out))));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out) 
           & (((5U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out)) 
               | (6U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out))) 
              | (7U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out))));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_ecall_write 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out) 
           & (8U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out)));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out) 
           & (IData)((8U == (0xcU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out)))));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out) 
           & (((((((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out)) 
                   | (2U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out))) 
                  | (3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out))) 
                 | (4U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out))) 
                | (5U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out))) 
               | (6U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out))) 
              | (7U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out))));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out) 
           & (((5U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out)) 
               | (6U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out))) 
              | (7U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out))));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out) 
           & (8U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out)));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_valid_out) 
           & (((5U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out)) 
               | (6U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))) 
              | (7U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_valid_out) 
           & (8U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out)));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_valid_out) 
           & (((((((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out)) 
                   | (2U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))) 
                  | (3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))) 
                 | (4U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))) 
                | (5U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))) 
               | (6U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))) 
              | (7U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out))));
    __Vtableidx2 = (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out) 
                     << 6U) | (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out) 
                                << 1U) | (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out)));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs1_read 
        = Vysyx_22041461_CPU__ConstPool__TABLE_d1140eb3_0
        [__Vtableidx2];
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs2_read 
        = Vysyx_22041461_CPU__ConstPool__TABLE_8cb9ad1b_0
        [__Vtableidx2];
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_read 
        = Vysyx_22041461_CPU__ConstPool__TABLE_be24ae63_0
        [__Vtableidx2];
    vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs1_data 
        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
        [(0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                   >> 0xfU))];
    vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs2_data 
        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
        [(0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                   >> 0x14U))];
    if ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                       >> 2U)))) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data1 
            = ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                           ? ((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data)))) 
                                              << 0x38U)
                                           : ((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data)))) 
                                              << 0x30U))
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                    ? ((QData)((IData)((0xffffffU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data)))) 
                       << 0x28U) : ((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data)) 
                                    << 0x20U)));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data2 
            = ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                           ? (vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
                                              >> 8U)
                                           : (vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
                                              >> 0x10U))
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                    ? (vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
                       >> 0x18U) : (QData)((IData)(
                                                   (vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
                                                    >> 0x20U)))));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask2 
            = (0xffU & ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                                    ? 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       >> 1U))
                                                    : 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       >> 2U)))
                         : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                             ? (0xffU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                         >> 3U)) : 
                            (0xffU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                      >> 4U)))));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask1 
            = (0xffU & ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                                    ? 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       << 7U))
                                                    : 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       << 6U)))
                         : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                             ? (0xffffU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                           << 5U)) : 
                            (0xffffU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                        << 4U)))));
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data1 
            = ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                           ? (vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
                                              << 0x18U)
                                           : (vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
                                              << 0x10U))
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                    ? (vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
                       << 8U) : vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data2 
            = ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                           ? (QData)((IData)(
                                                             (0xffffffU 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
                                                                         >> 0x28U)))))
                                           : (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
                                                                         >> 0x30U))))))
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                    ? (QData)((IData)((0xffU & (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
                                                        >> 0x38U)))))
                    : 0ULL));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask2 
            = (0xffU & ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                                    ? 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       >> 5U))
                                                    : 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       >> 6U)))
                         : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                             ? (0xffU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                         >> 7U)) : 
                            ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                             >> 8U))));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask1 
            = (0xffU & ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                                    ? 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       << 3U))
                                                    : 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       << 2U)))
                         : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                             ? (0xffffU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                           << 1U)) : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))));
    }
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out)
            ? ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                              >> 2U))) ? ((1U & (IData)(
                                                        (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                         >> 1U)))
                                           ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                               ? ((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                                                                                >> 0x38U))))))
                                               : ((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                                                                                >> 0x30U)))))))
                                           : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                               ? ((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                                                   << 0x18U) 
                                                  | (QData)((IData)(
                                                                    (0xffffffU 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                                                                                >> 0x28U))))))
                                               : (((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                                                                     >> 0x20U))))))
                : ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                  >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                               ? (((QData)((IData)(
                                                                   (0xffffffU 
                                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2)))) 
                                                   << 0x28U) 
                                                  | (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                                                     >> 0x18U))
                                               : (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2)))) 
                                                   << 0x30U) 
                                                  | (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                                                     >> 0x10U)))
                    : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                        ? (((QData)((IData)((0xffU 
                                             & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2)))) 
                            << 0x38U) | (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                                         >> 8U)) : vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1)))
            : 0ULL);
    if ((1U & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out)))) {
        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 = 0ULL;
    }
    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
        = ((0U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))
            ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out))
                       ? ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out))
                           ? vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_csr_data
                           : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out))
                               ? (~ vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_rs1_data)
                               : vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_rs1_data))
                       : ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out))
                           ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out))
                               ? vlSelf->ysyx_22041461_CPU__DOT__EXEreg_pc_out
                               : vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_rs1_data)
                           : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out))
                               ? vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_rs1_data
                               : 0ULL))));
    if ((1U & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out)))) {
        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2 = 0ULL;
    }
    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2 
        = ((0U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))
            ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out))
                       ? ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out))
                           ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out))
                               ? (~ vlSelf->ysyx_22041461_CPU__DOT__EXEreg_zimm_out)
                               : vlSelf->ysyx_22041461_CPU__DOT__EXEreg_zimm_out)
                           : vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_csr_data)
                       : ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out))
                           ? vlSelf->ysyx_22041461_CPU__DOT__EXEreg_imm_out
                           : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out))
                               ? vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
                              [vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out]
                               : 0ULL))));
    vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable = 1U;
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable = 0U;
            }
        }
    }
    vlSelf->ysyx_22041461_CPU__DOT__CD_WBreg_valid = 1U;
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_WBreg_valid = 0U;
            }
        }
    }
    vlSelf->ysyx_22041461_CPU__DOT__CD_MEM_valid = 1U;
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_MEM_valid = 0U;
            }
        }
    }
    vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_valid = 1U;
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs1_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_valid = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_valid = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write) {
            if (((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out)) 
                 | (0x342U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out)))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write) {
            if (((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out)) 
                 | (0x342U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out)))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_valid = 0U;
            }
        }
    }
    vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable = 1U;
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs1_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write) {
            if (((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out)) 
                 | (0x300U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out)))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write) {
            if (((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out)) 
                 | (0x300U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out)))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out) {
        vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 1U;
        vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ID_MEM_ctrl = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 0U;
        if ((0x40U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
            if ((0x20U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                if ((0x10U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                    if ((8U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                    } else if ((4U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                    } else if ((2U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            if ((0U == (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                        >> 7U))) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc 
                                    = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec;
                                vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = 1U;
                                vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl = 4U;
                                vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 8U;
                            } else if ((0x604000U == 
                                        (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                         >> 7U))) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc 
                                    = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc;
                                vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = 1U;
                                vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl = 5U;
                            } else if ((0x2000U == 
                                        (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                         >> 7U))) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl = 7U;
                            } else if ((0x4000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                if ((0x2000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                    if ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                        vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 8U;
                                        vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src = 7U;
                                        vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 6U;
                                    } else {
                                        vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 7U;
                                        vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src = 6U;
                                        vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 6U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 7U;
                                } else {
                                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                                }
                            } else if ((0x2000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                if ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 4U;
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src = 5U;
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 6U;
                                } else {
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 7U;
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src = 4U;
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 6U;
                                }
                            } else if ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 5U;
                            } else {
                                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                            }
                        } else {
                            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                        }
                    } else {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                    }
                } else if ((8U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                    if ((4U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        if ((2U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            if ((1U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immJ__8__INST 
                                    = vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out;
                                vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immJ__8__Vfuncout 
                                    = (((- (QData)((IData)(
                                                           (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immJ__8__INST 
                                                            >> 0x1fU)))) 
                                        << 0x15U) | (QData)((IData)(
                                                                    ((0x100000U 
                                                                      & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immJ__8__INST 
                                                                         >> 0xbU)) 
                                                                     | ((0xff000U 
                                                                         & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immJ__8__INST) 
                                                                        | ((0x800U 
                                                                            & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immJ__8__INST 
                                                                               >> 9U)) 
                                                                           | (0x7feU 
                                                                              & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immJ__8__INST 
                                                                                >> 0x14U))))))));
                                vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = 1U;
                                vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl = 2U;
                                vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 4U;
                                vlSelf->ysyx_22041461_CPU__DOT__ID_imm 
                                    = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immJ__8__Vfuncout;
                                vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc 
                                    = (vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out 
                                       + vlSelf->ysyx_22041461_CPU__DOT__ID_imm);
                            } else {
                                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                            }
                        } else {
                            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                        }
                    } else {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                    }
                } else if ((4U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                    if ((2U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__12__INST 
                                = vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out;
                            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__12__Vfuncout 
                                = (((- (QData)((IData)(
                                                       (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__12__INST 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__12__INST 
                                                                >> 0x14U))));
                            vlSelf->ysyx_22041461_CPU__DOT__ID_imm 
                                = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__12__Vfuncout;
                            if ((0U == (7U & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                              >> 0xcU)))) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc 
                                    = (0xfffffffffffffffeULL 
                                       & (vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs1_data 
                                          + vlSelf->ysyx_22041461_CPU__DOT__ID_imm));
                                vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = 1U;
                                vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl = 3U;
                                vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 4U;
                            } else {
                                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                            }
                        } else {
                            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                        }
                    } else {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                    }
                } else if ((2U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immB__16__INST 
                            = vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out;
                        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immB__16__Vfuncout 
                            = (((- (QData)((IData)(
                                                   (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immB__16__INST 
                                                    >> 0x1fU)))) 
                                << 0xdU) | (QData)((IData)(
                                                           ((0x1000U 
                                                             & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immB__16__INST 
                                                                >> 0x13U)) 
                                                            | ((0x800U 
                                                                & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immB__16__INST 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immB__16__INST 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immB__16__INST 
                                                                        >> 7U))))))));
                        vlSelf->ysyx_22041461_CPU__DOT__ID_imm 
                            = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immB__16__Vfuncout;
                        vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = 1U;
                        vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl = 1U;
                        if ((0x4000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            if ((0x2000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                if ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                    if ((vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs1_data 
                                         >= vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs2_data)) {
                                        vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc 
                                            = (vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out 
                                               + vlSelf->ysyx_22041461_CPU__DOT__ID_imm);
                                    } else {
                                        vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = 0U;
                                    }
                                } else if ((vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs1_data 
                                            < vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs2_data)) {
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc 
                                        = (vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out 
                                           + vlSelf->ysyx_22041461_CPU__DOT__ID_imm);
                                } else {
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = 0U;
                                }
                            } else if ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                if (VL_GTES_IQQ(1,64,64, vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs1_data, vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs2_data)) {
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc 
                                        = (vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out 
                                           + vlSelf->ysyx_22041461_CPU__DOT__ID_imm);
                                } else {
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = 0U;
                                }
                            } else if (VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs1_data, vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs2_data)) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc 
                                    = (vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out 
                                       + vlSelf->ysyx_22041461_CPU__DOT__ID_imm);
                            } else {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = 0U;
                            }
                        } else if ((0x2000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl = 0U;
                            vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = 0U;
                        } else if ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            if ((vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs1_data 
                                 != vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs2_data)) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc 
                                    = (vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out 
                                       + vlSelf->ysyx_22041461_CPU__DOT__ID_imm);
                            } else {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = 0U;
                            }
                        } else if ((vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs1_data 
                                    == vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs2_data)) {
                            vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc 
                                = (vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out 
                                   + vlSelf->ysyx_22041461_CPU__DOT__ID_imm);
                        } else {
                            vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = 0U;
                        }
                    } else {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                    }
                } else {
                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                    vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                }
            } else {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
            }
        } else if ((0x20U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
            if ((0x10U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                if ((8U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                    if ((4U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                    } else if ((2U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src = 1U;
                            vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 1U;
                            if (((((((((1U == ((0x3f8U 
                                                & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                     >> 0xcU)))) 
                                       | (5U == ((0x3f8U 
                                                  & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                       >> 0xcU))))) 
                                      | (0x105U == 
                                         ((0x3f8U & 
                                           (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                            >> 0x16U)) 
                                          | (7U & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                   >> 0xcU))))) 
                                     | (0U == ((0x3f8U 
                                                & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                     >> 0xcU))))) 
                                    | (0x100U == ((0x3f8U 
                                                   & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                        >> 0xcU))))) 
                                   | (8U == ((0x3f8U 
                                              & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                   >> 0xcU))))) 
                                  | (0xcU == ((0x3f8U 
                                               & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                    >> 0xcU))))) 
                                 | (0xdU == ((0x3f8U 
                                              & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                   >> 0xcU)))))) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl 
                                    = ((1U == ((0x3f8U 
                                                & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                     >> 0xcU))))
                                        ? 0x13U : (
                                                   (5U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                           >> 0xcU))))
                                                    ? 0x14U
                                                    : 
                                                   ((0x105U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                            >> 0xcU))))
                                                     ? 0x15U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                             >> 0xcU))))
                                                      ? 0x16U
                                                      : 
                                                     ((0x100U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                              >> 0xcU))))
                                                       ? 0x17U
                                                       : 
                                                      ((8U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                               >> 0xcU))))
                                                        ? 0x18U
                                                        : 
                                                       ((0xcU 
                                                         == 
                                                         ((0x3f8U 
                                                           & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                              >> 0x16U)) 
                                                          | (7U 
                                                             & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                                >> 0xcU))))
                                                         ? 0x19U
                                                         : 0x1aU)))))));
                            } else if ((0xeU == ((0x3f8U 
                                                  & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                       >> 0xcU))))) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 0x1bU;
                            } else if ((0xfU == ((0x3f8U 
                                                  & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                       >> 0xcU))))) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 0x1cU;
                            } else {
                                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                            }
                        } else {
                            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                        }
                    } else {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                    }
                } else if ((4U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                    if ((2U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__25__INST 
                                = vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out;
                            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__25__Vfuncout 
                                = (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__25__INST 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (0xfffff000U 
                                                                 & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__25__INST))));
                            vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 3U;
                            vlSelf->ysyx_22041461_CPU__DOT__ID_imm 
                                = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__25__Vfuncout;
                        } else {
                            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                        }
                    } else {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                    }
                } else if ((2U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src = 1U;
                        vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 1U;
                        if ((vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                             >> 0x1fU)) {
                            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                        } else if ((0x40000000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            if ((0x20000000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                            } else if ((0x10000000U 
                                        & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                            } else if ((0x8000000U 
                                        & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                            } else if ((0x4000000U 
                                        & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                            } else if ((0x2000000U 
                                        & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                            } else if ((0x4000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                if ((0x2000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                                } else if ((0x1000U 
                                            & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 3U;
                                } else {
                                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                    vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                                }
                            } else if ((0x2000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                            } else if ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                            } else {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 5U;
                            }
                        } else if ((0x20000000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                        } else if ((0x10000000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                        } else if ((0x8000000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                        } else if ((0x4000000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                        } else {
                            vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl 
                                = ((0x2000000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                    ? ((0x4000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                        ? ((0x2000U 
                                            & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                            ? ((0x1000U 
                                                & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                                ? 0x12U
                                                : 0x11U)
                                            : ((0x1000U 
                                                & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                                ? 0x10U
                                                : 0xfU))
                                        : ((0x2000U 
                                            & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                            ? ((0x1000U 
                                                & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                                ? 0xeU
                                                : 0xdU)
                                            : ((0x1000U 
                                                & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                                ? 0xcU
                                                : 0xbU)))
                                    : ((0x4000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                        ? ((0x2000U 
                                            & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                            ? ((0x1000U 
                                                & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                                ? 8U
                                                : 7U)
                                            : ((0x1000U 
                                                & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                                ? 2U
                                                : 6U))
                                        : ((0x2000U 
                                            & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                            ? ((0x1000U 
                                                & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                                ? 0xaU
                                                : 9U)
                                            : ((0x1000U 
                                                & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                                ? 1U
                                                : 4U))));
                        }
                    } else {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                    }
                } else {
                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                    vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                }
            } else if ((8U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
            } else if ((4U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
            } else if ((2U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                if ((1U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immS__46__INST 
                        = vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out;
                    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immS__46__Vfuncout 
                        = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immS__46__INST 
                                                >> 0x1fU)))) 
                            << 0xcU) | (QData)((IData)(
                                                       ((0xfe0U 
                                                         & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immS__46__INST 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immS__46__INST 
                                                              >> 7U))))));
                    vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 4U;
                    vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src = 2U;
                    if ((0x4000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                    } else {
                        vlSelf->ysyx_22041461_CPU__DOT__ID_MEM_ctrl 
                            = ((0x2000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                ? ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                    ? 0xbU : 0xaU) : 
                               ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                 ? 9U : 8U));
                    }
                    vlSelf->ysyx_22041461_CPU__DOT__ID_imm 
                        = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immS__46__Vfuncout;
                } else {
                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                    vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                }
            } else {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
            }
        } else if ((0x10U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
            if ((8U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                if ((4U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                    vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                } else if ((2U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__51__INST 
                            = vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out;
                        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__51__Vfuncout 
                            = (((- (QData)((IData)(
                                                   (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__51__INST 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__51__INST 
                                                            >> 0x14U))));
                        vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src = 2U;
                        vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 1U;
                        if ((1U == (7U & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                          >> 0xcU)))) {
                            if ((0U == (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                        >> 0x1aU))) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 0x13U;
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out 
                                    = (1U & (~ (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                >> 0x19U)));
                            } else {
                                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                            }
                        } else if ((5U == (7U & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                 >> 0xcU)))) {
                            if ((0U == (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                        >> 0x1aU))) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 0x14U;
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out 
                                    = (1U & (~ (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                >> 0x19U)));
                            } else if ((0x10U == (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                  >> 0x1aU))) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 0x15U;
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out 
                                    = (1U & (~ (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                >> 0x19U)));
                            } else {
                                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                            }
                        } else if ((0U == (7U & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                 >> 0xcU)))) {
                            vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 0x16U;
                        } else {
                            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                        }
                        vlSelf->ysyx_22041461_CPU__DOT__ID_imm 
                            = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__51__Vfuncout;
                    } else {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                    }
                } else {
                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                    vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                }
            } else if ((4U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                if ((2U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__57__INST 
                            = vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out;
                        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__57__Vfuncout 
                            = (((QData)((IData)((- (IData)(
                                                           (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__57__INST 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__57__INST))));
                        vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 4U;
                        vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src = 3U;
                        vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 1U;
                        vlSelf->ysyx_22041461_CPU__DOT__ID_imm 
                            = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__57__Vfuncout;
                    } else {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                    }
                } else {
                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                    vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                }
            } else if ((2U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                if ((1U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__60__INST 
                        = vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out;
                    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__60__Vfuncout 
                        = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__60__INST 
                                                >> 0x1fU)))) 
                            << 0xcU) | (QData)((IData)(
                                                       (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__60__INST 
                                                        >> 0x14U))));
                    vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src = 2U;
                    vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 1U;
                    if ((0x4000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        if ((0x2000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl 
                                = ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                    ? 8U : 7U);
                        } else if ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            if ((0U == (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                        >> 0x1aU))) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 2U;
                            } else if ((0x10U == (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                  >> 0x1aU))) {
                                vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 3U;
                            } else {
                                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            }
                        } else {
                            vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 6U;
                        }
                    } else if ((0x2000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl 
                            = ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                ? 0xaU : 9U);
                    } else if ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        if ((0U == (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                    >> 0x1aU))) {
                            vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 1U;
                        } else {
                            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                        }
                    } else {
                        vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 4U;
                    }
                    vlSelf->ysyx_22041461_CPU__DOT__ID_imm 
                        = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__60__Vfuncout;
                } else {
                    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                    vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                }
            } else {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
            }
        } else if ((8U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
        } else if ((4U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
        } else if ((2U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
            if ((1U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__67__INST 
                    = vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out;
                vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__67__Vfuncout 
                    = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__67__INST 
                                            >> 0x1fU)))) 
                        << 0xcU) | (QData)((IData)(
                                                   (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__67__INST 
                                                    >> 0x14U))));
                vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 4U;
                vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src = 2U;
                vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 2U;
                if ((0x4000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                    if ((0x2000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                        if ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)) {
                            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
                        } else {
                            vlSelf->ysyx_22041461_CPU__DOT__ID_MEM_ctrl = 6U;
                        }
                    } else {
                        vlSelf->ysyx_22041461_CPU__DOT__ID_MEM_ctrl 
                            = ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                ? 4U : 3U);
                    }
                } else {
                    vlSelf->ysyx_22041461_CPU__DOT__ID_MEM_ctrl 
                        = ((0x2000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                            ? ((0x1000U & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                ? 7U : 5U) : ((0x1000U 
                                               & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)
                                               ? 2U
                                               : 1U));
                }
                vlSelf->ysyx_22041461_CPU__DOT__ID_imm 
                    = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__67__Vfuncout;
            } else {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
            }
        } else {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
            vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
        }
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ID_MEM_ctrl = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = 0U;
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out) {
        if ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))) {
            vlSelf->ysyx_22041461_CPU__DOT__MEM_out = 0ULL;
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__set_difftest_next_TOP();
        } else if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))) {
            vlSelf->ysyx_22041461_CPU__DOT__MEM_out 
                = ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                    ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                        ? vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data
                        : (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data)))
                    : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data)))
                        : (QData)((IData)((0xffffU 
                                           & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data))))));
        } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))) {
            vlSelf->ysyx_22041461_CPU__DOT__MEM_out 
                = ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                    ? (QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data))))
                    : (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data 
                                                          >> 0xfU)))))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data))))));
        } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))) {
            vlSelf->ysyx_22041461_CPU__DOT__MEM_out 
                = (((- (QData)((IData)((1U & (IData)(
                                                     (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data 
                                                      >> 7U)))))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data)))));
        } else {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__set_difftest_next_TOP();
            vlSelf->ysyx_22041461_CPU__DOT__MEM_out = 0ULL;
        }
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__MEM_out = 0ULL;
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out) {
        if ((0x10U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
            if ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                    if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE_out = 0ULL;
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                    } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE_out = 0ULL;
                    } else {
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                            = VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1), (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2));
                        vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                            = (((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U])));
                    }
                } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                    if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                            = VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1), (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2));
                        vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                            = (((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U])));
                    } else {
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                            = VL_DIV_III(32, (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1), (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2));
                        vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                            = (((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U])));
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                        = VL_DIVS_III(32, (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1), (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2));
                    vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U])));
                } else {
                    VL_EXTENDS_WQ(128,64, __Vtemp19, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1);
                    VL_EXTENDS_WQ(128,64, __Vtemp20, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
                    VL_MULS_WWW(128,128,128, __Vtemp21, __Vtemp19, __Vtemp20);
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                        = __Vtemp21[0U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] 
                        = __Vtemp21[1U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] 
                        = __Vtemp21[2U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] 
                        = __Vtemp21[3U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U])));
                }
            } else if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                    if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                            = (IData)((vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
                                       - vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2));
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] 
                            = (IData)(((vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
                                        - vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2) 
                                       >> 0x20U));
                        vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                            = (((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U])));
                    } else {
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                            = (IData)((vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
                                       + vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2));
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] 
                            = (IData)(((vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
                                        + vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2) 
                                       >> 0x20U));
                        vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                            = (((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U])));
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1), 
                                         (0x1fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2)));
                    vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U])));
                } else {
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1) 
                           >> (0x1fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2)));
                    vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U])));
                }
            } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                        = (IData)((vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
                                   << (0x1fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2))));
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] 
                        = (IData)(((vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
                                    << (0x1fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2))) 
                                   >> 0x20U));
                    vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U])));
                } else {
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                        = VL_MODDIV_QQQ(64, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                    = VL_MODDIVS_QQQ(64, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                    = VL_DIV_QQQ(64, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
            }
        } else if ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
            if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                    if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                            = VL_DIVS_QQQ(64, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
                    } else {
                        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP();
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                        vlSelf->ysyx_22041461_CPU__DOT__EXE_out = 0ULL;
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                    VL_EXTEND_WQ(128,64, __Vtemp22, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1);
                    VL_EXTEND_WQ(128,64, __Vtemp23, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
                    VL_MUL_W(4, __Vtemp24, __Vtemp22, __Vtemp23);
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                        = __Vtemp24[0U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] 
                        = __Vtemp24[1U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] 
                        = __Vtemp24[2U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] 
                        = __Vtemp24[3U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                        = (((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U])));
                } else {
                    VL_EXTENDS_WQ(128,64, __Vtemp25, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1);
                    VL_EXTENDS_WQ(128,64, __Vtemp26, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
                    VL_MULS_WWW(128,128,128, __Vtemp27, __Vtemp25, __Vtemp26);
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                        = __Vtemp27[0U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] 
                        = __Vtemp27[1U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] 
                        = __Vtemp27[2U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] 
                        = __Vtemp27[3U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                        = (((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U])));
                }
            } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                        = VL_MULS_QQQ(64,64,64, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
                } else {
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                        = ((vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
                            < vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2)
                            ? 1ULL : 0ULL);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                    = (VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2)
                        ? 1ULL : 0ULL);
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                    = (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
                       & vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
            }
        } else if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
            if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                        = (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
                           | vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
                } else {
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                    vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                        = (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
                           ^ vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                    = (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
                       - vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                    = (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
                       + vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
            if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                    = VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1, 
                                     (0x3fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2)));
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                    = (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
                       >> (0x3fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2)));
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out))) {
            vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                = (vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 
                   << (0x3fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2)));
        } else {
            vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__EXE_out = 0ULL;
        }
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__EXE_out = 0ULL;
    }
    if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out) 
         & (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEM_valid))) {
        if (((((8U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out)) 
               | (9U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))) 
              | (0xaU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))) 
             | (0xbU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out)))) {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_write_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out, vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data1, (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask1));
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_write_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out), vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data2, (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask2));
        }
    }
    vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_valid = 1U;
    if (vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out) {
        if (vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_valid = 0U;
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out) {
        if (((((7U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl)) 
               & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out))) 
              & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out))) 
             & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_valid_out)))) {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__ebreak_TOP();
        }
    }
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs1_read 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out) 
           & ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl)) 
              | (3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl))));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs2_read 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out) 
           & (1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl)));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mtvec_read 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out) 
           & (4U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl)));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mepc_read 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out) 
           & (5U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl)));
    vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 1U;
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs1_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mtvec_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write) {
            if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write) {
            if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write) {
            if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mepc_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write) {
            if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_ecall_write) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write) {
            if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write) {
            if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out) {
        if ((7U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl))) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = 0U;
        }
    }
    vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 1U;
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs1_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mtvec_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write) {
            if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write) {
            if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write) {
            if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mepc_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write) {
            if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_ecall_write) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write) {
            if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write) {
            if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
        }
    }
    if (((6U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl)) 
         & (0xcU != (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out)))) {
        vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out) {
        if ((7U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl))) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = 0U;
        }
    }
    vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 1U;
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs1_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mtvec_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write) {
            if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write) {
            if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write) {
            if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mepc_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write) {
            if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_ecall_write) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write) {
            if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write) {
            if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs1_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write) {
            if (((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out)) 
                 | (0x342U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out)))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write) {
            if (((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out)) 
                 | (0x342U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out)))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
            }
        }
    }
    vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 1U;
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs1_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mtvec_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write) {
            if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write) {
            if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write) {
            if ((0x305U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mepc_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write) {
            if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_ecall_write) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write) {
            if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write) {
            if ((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs1_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write) {
            if (((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out)) 
                 | (0x342U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out)))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write) {
            if (((0x341U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out)) 
                 | (0x342U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out)))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
            }
        }
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out) {
        if ((7U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl))) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
        }
    }
}

void Vysyx_22041461_CPU___024root___eval_initial(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2;
    Vysyx_22041461_CPU___024root___initial__TOP__8(vlSelf);
}

void Vysyx_22041461_CPU___024root___eval_settle(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___eval_settle\n"); );
    // Body
    Vysyx_22041461_CPU___024root___settle__TOP__9(vlSelf);
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22041461_CPU___024root___final(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___final\n"); );
}

void Vysyx_22041461_CPU___024root___ctor_var_reset(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD_MEM_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD_WBreg_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__IFreg_valid_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__IF_valid_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ID_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22041461_CPU__DOT__ID_MEM_ctrl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22041461_CPU__DOT__EXEreg_imm_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__EXEreg_zimm_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__EXEreg_pc_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22041461_CPU__DOT__EXEreg_MEM_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22041461_CPU__DOT__EXE_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs1_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_imm_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_zimm_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_pc_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22041461_CPU__DOT__MEM_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WBreg_valid_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__WBreg_EXE_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WBreg_MEM_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22041461_CPU__DOT__WBreg_rs1_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22041461_CPU__DOT__WBreg_imm_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WBreg_zimm_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WBreg_pc_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__rinst = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle);
    vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask = VL_RAND_RESET_I(16);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask1 = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask2 = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs1_read = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs2_read = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mtvec_read = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mepc_read = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_ecall_write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs1_read = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs2_read = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_read = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__IF__DOT__pmem_read_pc__1__rdata = 0;
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immJ__8__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immJ__8__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__12__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__12__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immB__16__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immB__16__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__25__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__25__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immS__46__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immS__46__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__51__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__51__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__57__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immU__57__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__60__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__60__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__67__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__ID__DOT__immI__67__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__74__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__75__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__76__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__77__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__78__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__79__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__80__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__81__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__82__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__83__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__84__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__85__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__86__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__87__rdata = 0;
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__IFreg_pc = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_valid_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_zimm_out = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_EXE_out = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_rd_out = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_rs1_out = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_csr_out = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_imm_out = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_pc_out = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<15; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
