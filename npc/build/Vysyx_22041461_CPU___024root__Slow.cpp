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

void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_pc_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__ebreak_TOP();
void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__invalid_inst_TOP();
extern const VlUnpacked<SData/*15:0*/, 16> Vysyx_22041461_CPU__ConstPool__TABLE_36a1c83b_0;
void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__set_difftest_next_TOP();

void Vysyx_22041461_CPU___024root___settle__TOP__1(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___settle__TOP__1\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<4>/*127:0*/ __Vtemp6;
    VlWide<4>/*127:0*/ __Vtemp7;
    VlWide<4>/*127:0*/ __Vtemp8;
    VlWide<4>/*127:0*/ __Vtemp9;
    VlWide<4>/*127:0*/ __Vtemp10;
    VlWide<4>/*127:0*/ __Vtemp11;
    VlWide<4>/*127:0*/ __Vtemp12;
    VlWide<4>/*127:0*/ __Vtemp13;
    VlWide<4>/*127:0*/ __Vtemp14;
    VlWide<4>/*127:0*/ __Vtemp15;
    VlWide<4>/*127:0*/ __Vtemp16;
    VlWide<4>/*127:0*/ __Vtemp17;
    VlWide<4>/*127:0*/ __Vtemp18;
    VlWide<4>/*127:0*/ __Vtemp19;
    VlWide<4>/*127:0*/ __Vtemp20;
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__i = 0x40U;
    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_pc_TOP(vlSelf->pc, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_pc__59__rdata);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rinst 
        = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_pc__59__rdata;
    vlSelf->inst = ((0U == (7U & (IData)(vlSelf->pc)))
                     ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rinst)
                     : ((0U == (3U & (IData)(vlSelf->pc)))
                         ? (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rinst 
                                    >> 0x20U)) : 0U));
    vlSelf->ysyx_22041461_CPU__DOT__rs2_data = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->ysyx_22041461_CPU__DOT__rs1_data = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    if (((((((((0x33U == (0xfe00707fU & vlSelf->inst)) 
               | (0x3bU == (0xfe00707fU & vlSelf->inst))) 
              | (0x40000033U == (0xfe00707fU & vlSelf->inst))) 
             | (0x103bU == (0xfe00707fU & vlSelf->inst))) 
            | (0x7033U == (0xfe00707fU & vlSelf->inst))) 
           | (0x3033U == (0xfe00707fU & vlSelf->inst))) 
          | (0x6033U == (0xfe00707fU & vlSelf->inst))) 
         | (0x200003bU == (0xfe00707fU & vlSelf->inst)))) {
        if ((0x33U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x3bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 4U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x40000033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 5U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x103bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 8U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x7033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 7U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x3033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS 
                = ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out))
                    ? 7U : 6U);
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x6033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0xaU;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0xcU;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        }
    } else if (((((((((0x200403bU == (0xfe00707fU & vlSelf->inst)) 
                      | (0x200603bU == (0xfe00707fU 
                                        & vlSelf->inst))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelf->inst))) 
                    | (0x200703bU == (0xfe00707fU & vlSelf->inst))) 
                   | (0x4000003bU == (0xfe00707fU & vlSelf->inst))) 
                  | (0x2033U == (0xfe00707fU & vlSelf->inst))) 
                 | (0x2000033U == (0xfe00707fU & vlSelf->inst))) 
                | (0x4000503bU == (0xfe00707fU & vlSelf->inst)))) {
        if ((0x200403bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x11U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x200603bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x15U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x2007033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x17U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x200703bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x16U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x4000003bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x19U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x2033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS 
                = ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out))
                    ? 7U : 6U);
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x2000033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x10U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x1cU;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        }
    } else if (((((((((0x503bU == (0xfe00707fU & vlSelf->inst)) 
                      | (0x2005033U == (0xfe00707fU 
                                        & vlSelf->inst))) 
                     | (0x2004033U == (0xfe00707fU 
                                       & vlSelf->inst))) 
                    | (0x4033U == (0xfe00707fU & vlSelf->inst))) 
                   | (0x1033U == (0xfe00707fU & vlSelf->inst))) 
                  | (0x200503bU == (0xfe00707fU & vlSelf->inst))) 
                 | (0x30200073U == vlSelf->inst)) | 
                (0x13U == (0x707fU & vlSelf->inst)))) {
        if ((0x503bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x1eU;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x2005033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x13U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x2004033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x14U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x4033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 9U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x1033U == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 3U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x200503bU == (0xfe00707fU & vlSelf->inst))) {
            vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x12U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        } else if ((0x30200073U == vlSelf->inst)) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 2U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__Vfuncout;
        } else {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__Vfuncout;
        }
    } else if (((((((((0x67U == (0x707fU & vlSelf->inst)) 
                      | (0x1013U == (0xfc00707fU & vlSelf->inst))) 
                     | (0x2003U == (0x707fU & vlSelf->inst))) 
                    | (0x3013U == (0x707fU & vlSelf->inst))) 
                   | (0x2013U == (0x707fU & vlSelf->inst))) 
                  | (0x1bU == (0x707fU & vlSelf->inst))) 
                 | (0x3003U == (0x707fU & vlSelf->inst))) 
                | (0x40005013U == (0xfc00707fU & vlSelf->inst)))) {
        if ((0x67U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 2U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 3U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__Vfuncout;
        } else if ((0x1013U == (0xfc00707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 3U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__Vfuncout;
        } else if ((0x2003U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 5U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 2U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__Vfuncout;
        } else if ((0x3013U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__5__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__5__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__5__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__5__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS 
                = ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out))
                    ? 7U : 6U);
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__5__Vfuncout;
        } else if ((0x2013U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__6__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__6__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__6__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__6__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS 
                = ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out))
                    ? 7U : 6U);
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__6__Vfuncout;
        } else if ((0x1bU == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__7__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__7__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__7__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__7__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 4U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__7__Vfuncout;
        } else if ((0x3003U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__8__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__8__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__8__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__8__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 5U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__8__Vfuncout;
        } else {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__9__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__9__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__9__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__9__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 6U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__9__Vfuncout;
        }
    } else if (((((((((0x4003U == (0x707fU & vlSelf->inst)) 
                      | (0x7013U == (0x707fU & vlSelf->inst))) 
                     | (0x4013U == (0x707fU & vlSelf->inst))) 
                    | (0x5013U == (0xfc00707fU & vlSelf->inst))) 
                   | (0x1003U == (0x707fU & vlSelf->inst))) 
                  | (0x5003U == (0x707fU & vlSelf->inst))) 
                 | (0x101bU == (0xfc00707fU & vlSelf->inst))) 
                | (0x4000501bU == (0xfc00707fU & vlSelf->inst)))) {
        if ((0x4003U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__10__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__10__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__10__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__10__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 5U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 7U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__10__Vfuncout;
        } else if ((0x7013U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__11__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__11__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__11__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__11__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 7U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__11__Vfuncout;
        } else if ((0x4013U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__12__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__12__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__12__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__12__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 9U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__12__Vfuncout;
        } else if ((0x5013U == (0xfc00707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__13__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__13__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__13__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__13__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0xbU;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__13__Vfuncout;
        } else if ((0x1003U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__14__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__14__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__14__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__14__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 5U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 3U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__14__Vfuncout;
        } else if ((0x5003U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__15__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__15__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__15__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__15__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 5U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 6U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__15__Vfuncout;
        } else if ((0x101bU == (0xfc00707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__16__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__16__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__16__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__16__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x1aU;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__16__Vfuncout;
        } else {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__17__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__17__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__17__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__17__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x1bU;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__17__Vfuncout;
        }
    } else if (((((((((0x501bU == (0xfc00707fU & vlSelf->inst)) 
                      | (0x6003U == (0x707fU & vlSelf->inst))) 
                     | (0x6013U == (0x707fU & vlSelf->inst))) 
                    | (3U == (0x707fU & vlSelf->inst))) 
                   | (0x1073U == (0x707fU & vlSelf->inst))) 
                  | (0x2073U == (0x707fU & vlSelf->inst))) 
                 | (0x73U == vlSelf->inst)) | (0x3023U 
                                               == (0x707fU 
                                                   & vlSelf->inst)))) {
        if ((0x501bU == (0xfc00707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__18__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__18__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__18__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__18__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x1dU;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__18__Vfuncout;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS 
                = ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__imm 
                                  >> 5U))) ? 0U : 1U);
        } else if ((0x6003U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__19__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__19__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__19__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__19__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 5U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 5U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__19__Vfuncout;
        } else if ((0x6013U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__20__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__20__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__20__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__20__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0xaU;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__20__Vfuncout;
        } else if ((3U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__21__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__21__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__21__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__21__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 5U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 4U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__21__Vfuncout;
        } else if ((0x1073U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__22__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__22__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__22__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__22__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 8U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__22__Vfuncout;
        } else if ((0x2073U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__23__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__23__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__23__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__23__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0xaU;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 6U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 8U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 2U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__23__Vfuncout;
        } else if ((0x73U == vlSelf->inst)) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__24__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__24__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__24__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__24__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 3U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 3U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__24__Vfuncout;
        } else {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__25__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__25__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__25__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__25__INST 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__25__INST 
                                                      >> 7U))))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 8U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 2U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__25__Vfuncout;
        }
    } else if (((((((((0x1023U == (0x707fU & vlSelf->inst)) 
                      | (0x23U == (0x707fU & vlSelf->inst))) 
                     | (0x2023U == (0x707fU & vlSelf->inst))) 
                    | (0x63U == (0x707fU & vlSelf->inst))) 
                   | (0x1063U == (0x707fU & vlSelf->inst))) 
                  | (0x5063U == (0x707fU & vlSelf->inst))) 
                 | (0x7063U == (0x707fU & vlSelf->inst))) 
                | (0x6063U == (0x707fU & vlSelf->inst)))) {
        if ((0x1023U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__26__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__26__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__26__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__26__INST 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__26__INST 
                                                      >> 7U))))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0xaU;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 2U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__26__Vfuncout;
        } else if ((0x23U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__27__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__27__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__27__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__27__INST 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__27__INST 
                                                      >> 7U))))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0xbU;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 2U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__27__Vfuncout;
        } else if ((0x2023U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__28__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__28__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__28__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__28__INST 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__28__INST 
                                                      >> 7U))))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 9U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 2U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__28__Vfuncout;
        } else if ((0x63U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__29__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__29__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__29__INST 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__29__INST 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__29__INST 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__29__INST 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__29__INST 
                                                            >> 7U))))))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC 
                = ((0U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out))
                    ? 1U : 0U);
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__29__Vfuncout;
        } else if ((0x1063U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__30__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__30__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__30__INST 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__30__INST 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__30__INST 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__30__INST 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__30__INST 
                                                            >> 7U))))))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC 
                = ((0U != (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out))
                    ? 1U : 0U);
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__30__Vfuncout;
        } else if ((0x5063U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__31__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__31__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__31__INST 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__31__INST 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__31__INST 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__31__INST 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__31__INST 
                                                            >> 7U))))))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC 
                = (((0U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out)) 
                    | (2U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out)))
                    ? 1U : 0U);
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__31__Vfuncout;
        } else if ((0x7063U == (0x707fU & vlSelf->inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__32__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__32__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__32__INST 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__32__INST 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__32__INST 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__32__INST 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__32__INST 
                                                            >> 7U))))))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC 
                = (((0U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out)) 
                    | (2U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out)))
                    ? 1U : 0U);
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__32__Vfuncout;
        } else {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__33__INST 
                = vlSelf->inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__33__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__33__INST 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__33__INST 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__33__INST 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__33__INST 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__33__INST 
                                                            >> 7U))))))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC 
                = ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out))
                    ? 1U : 0U);
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__33__Vfuncout;
        }
    } else if ((0x4063U == (0x707fU & vlSelf->inst))) {
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__34__INST 
            = vlSelf->inst;
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__34__Vfuncout 
            = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__34__INST 
                                    >> 0x1fU)))) << 0xdU) 
               | (QData)((IData)(((0x1000U & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__34__INST 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__34__INST 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__34__INST 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__34__INST 
                                            >> 7U))))))));
        vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 1U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_PC = ((1U 
                                                   == (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out))
                                                   ? 1U
                                                   : 0U);
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__34__Vfuncout;
    } else if ((0x17U == (0x7fU & vlSelf->inst))) {
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__35__INST 
            = vlSelf->inst;
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__35__Vfuncout 
            = (((QData)((IData)((- (IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__35__INST 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)((0xfffff000U 
                                             & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__35__INST))));
        vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__35__Vfuncout;
    } else if ((0x37U == (0x7fU & vlSelf->inst))) {
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__36__INST 
            = vlSelf->inst;
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__36__Vfuncout 
            = (((QData)((IData)((- (IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__36__INST 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)((0xfffff000U 
                                             & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__36__INST))));
        vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 4U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__36__Vfuncout;
    } else if ((0x6fU == (0x7fU & vlSelf->inst))) {
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__37__INST 
            = vlSelf->inst;
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__37__Vfuncout 
            = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__37__INST 
                                    >> 0x1fU)))) << 0x15U) 
               | (QData)((IData)(((0x100000U & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__37__INST 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__37__INST) 
                                     | ((0x800U & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__37__INST 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__37__INST 
                                            >> 0x14U))))))));
        vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 3U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 1U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__37__Vfuncout;
    } else if ((0x100073U == vlSelf->inst)) {
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__ebreak_TOP();
    } else {
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__invalid_inst_TOP();
    }
    vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src1 
        = vlSelf->ysyx_22041461_CPU__DOT__rs1_data;
    __Vtableidx1 = vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM;
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask 
        = Vysyx_22041461_CPU__ConstPool__TABLE_36a1c83b_0
        [__Vtableidx1];
    vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src2 
        = ((0U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_CMP))
            ? vlSelf->ysyx_22041461_CPU__DOT__rs2_data
            : ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_CMP))
                ? vlSelf->ysyx_22041461_CPU__DOT__imm
                : vlSelf->ysyx_22041461_CPU__DOT__rs2_data));
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
        = ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
            ? ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
                ? vlSelf->ysyx_22041461_CPU__DOT__rs1_data
                : vlSelf->ysyx_22041461_CPU__DOT__imm)
            : vlSelf->ysyx_22041461_CPU__DOT__rs1_data);
    vlSelf->ysyx_22041461_CPU__DOT__csr_data = ((0x305U 
                                                 == 
                                                 (0xfffU 
                                                  & (IData)(vlSelf->ysyx_22041461_CPU__DOT__imm)))
                                                 ? vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mtvec
                                                 : 
                                                ((0x341U 
                                                  == 
                                                  (0xfffU 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__imm)))
                                                  ? vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc
                                                  : 
                                                 ((0x342U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__imm)))
                                                   ? vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mcause
                                                   : 
                                                  ((0x300U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->ysyx_22041461_CPU__DOT__imm)))
                                                    ? vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mstatus
                                                    : 0ULL))));
    if (vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP) {
        if (vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP) {
            if ((vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src1 
                 == vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src2)) {
                vlSelf->ysyx_22041461_CPU__DOT__CMP_out = 0U;
            } else if ((1U & ((IData)((vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src1 
                                       >> 0x3fU)) & 
                              (~ (IData)((vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src2 
                                          >> 0x3fU)))))) {
                vlSelf->ysyx_22041461_CPU__DOT__CMP_out = 1U;
            } else if ((1U & ((~ (IData)((vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src1 
                                          >> 0x3fU))) 
                              & (IData)((vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src2 
                                         >> 0x3fU))))) {
                vlSelf->ysyx_22041461_CPU__DOT__CMP_out = 2U;
            } else if (((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src1 
                                       >> 0x3fU))) 
                        == (1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src2 
                                          >> 0x3fU))))) {
                vlSelf->ysyx_22041461_CPU__DOT__CMP_out 
                    = (((0x7fffffffffffffffULL & vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src1) 
                        < (0x7fffffffffffffffULL & vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src2))
                        ? 1U : 2U);
            }
        }
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__CMP_out = (
                                                   (vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src1 
                                                    == vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src2)
                                                    ? 0U
                                                    : 
                                                   ((vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src1 
                                                     < vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src2)
                                                     ? 1U
                                                     : 2U));
    }
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2 
        = ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
            ? ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
                ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
                    ? vlSelf->ysyx_22041461_CPU__DOT__rs2_data
                    : vlSelf->ysyx_22041461_CPU__DOT__csr_data)
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
                    ? (4ULL + vlSelf->pc) : vlSelf->pc))
            : ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
                ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
                    ? (4ULL + vlSelf->pc) : vlSelf->pc)
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
                    ? vlSelf->ysyx_22041461_CPU__DOT__imm
                    : vlSelf->ysyx_22041461_CPU__DOT__rs2_data)));
    VL_EXTEND_WQ(65,64, __Vtemp2, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
    VL_ADD_W(3, __Vtemp4, __Vtemp2, __Vtemp3);
    vlSelf->flag = (1U & __Vtemp4[2U]);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum = 
        (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
         + vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sub = 
        (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
         - vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
    if ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL__DOT__sll 
            = (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
               << (0x3fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)));
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL_out 
            = vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL__DOT__sll;
    } else if ((8U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL__DOT__sll 
            = (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
               << (0x1fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)));
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL_out 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL__DOT__sll 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL__DOT__sll)));
    } else if ((0x1aU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL__DOT__sll 
            = (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
               << (0x3fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)));
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL_out 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL__DOT__sll 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL__DOT__sll)));
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL__DOT__sll = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL_out = 0ULL;
    }
    if ((6U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA__DOT__sra = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA_out 
            = VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1, 
                             (0x3fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)));
    } else if ((0x1bU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA__DOT__sra 
            = ((0x1fU >= (0x3fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)))
                ? VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1), 
                                 (0x3fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)))
                : (- ((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1) 
                      >> 0x1fU)));
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA_out 
            = (((QData)((IData)((- (IData)((vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA__DOT__sra 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA__DOT__sra)));
    } else if ((0x1cU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA__DOT__sra 
            = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1), 
                             (0x1fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)));
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA_out 
            = (((QData)((IData)((- (IData)((vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA__DOT__sra 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA__DOT__sra)));
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA__DOT__sra = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA_out = 0ULL;
    }
    if ((0xbU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL__DOT__srl 
            = (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
               >> (0x3fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)));
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL_out 
            = vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL__DOT__srl;
    } else if ((0x1dU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL__DOT__srl 
            = (QData)((IData)(((0x1fU >= (0x3fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)))
                                ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1) 
                                   >> (0x3fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)))
                                : 0U)));
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL_out 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL__DOT__srl 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL__DOT__srl)));
    } else if ((0x1eU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL__DOT__srl 
            = (QData)((IData)(((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1) 
                               >> (0x1fU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)))));
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL_out 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL__DOT__srl 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL__DOT__srl)));
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL__DOT__srl = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL_out = 0ULL;
    }
    if ((0x10U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
        if ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out = 0ULL;
        } else if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out = 0ULL;
        } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out = 0ULL;
        } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out = 0ULL;
        } else {
            VL_EXTEND_WQ(128,64, __Vtemp6, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1);
            VL_EXTEND_WQ(128,64, __Vtemp7, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
            VL_MUL_W(4, __Vtemp8, __Vtemp6, __Vtemp7);
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] 
                = __Vtemp8[0U];
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] 
                = __Vtemp8[1U];
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] 
                = __Vtemp8[2U];
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] 
                = __Vtemp8[3U];
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out 
                = (((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U])));
        }
    } else if ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
        if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
            if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
                if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
                    VL_EXTENDS_WQ(128,64, __Vtemp9, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1);
                    VL_EXTENDS_WQ(128,64, __Vtemp10, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
                    VL_MULS_WWW(128,128,128, __Vtemp11, __Vtemp9, __Vtemp10);
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] 
                        = __Vtemp11[0U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] 
                        = __Vtemp11[1U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] 
                        = __Vtemp11[2U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] 
                        = __Vtemp11[3U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out 
                        = (((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U])));
                } else {
                    VL_EXTEND_WQ(128,64, __Vtemp12, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1);
                    VL_EXTEND_WQ(128,64, __Vtemp13, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
                    VL_MUL_W(4, __Vtemp14, __Vtemp12, __Vtemp13);
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] 
                        = __Vtemp14[0U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] 
                        = __Vtemp14[1U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] 
                        = __Vtemp14[2U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] 
                        = __Vtemp14[3U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out 
                        = (((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U])));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
                VL_EXTEND_WQ(128,64, __Vtemp15, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1);
                VL_EXTEND_WQ(128,64, __Vtemp16, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
                VL_MUL_W(4, __Vtemp17, __Vtemp15, __Vtemp16);
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] 
                    = __Vtemp17[0U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] 
                    = __Vtemp17[1U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] 
                    = __Vtemp17[2U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] 
                    = __Vtemp17[3U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out 
                    = (((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U])));
            } else {
                VL_EXTEND_WQ(128,64, __Vtemp18, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1);
                VL_EXTEND_WQ(128,64, __Vtemp19, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
                VL_MUL_W(4, __Vtemp20, __Vtemp18, __Vtemp19);
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] 
                    = __Vtemp20[0U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] 
                    = __Vtemp20[1U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] 
                    = __Vtemp20[2U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] 
                    = __Vtemp20[3U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U])));
            }
        } else {
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out = 0ULL;
        }
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out = 0ULL;
    }
    if ((0x10U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
        if ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out = 0ULL;
        } else if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
            if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div = 0ULL;
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out = 0ULL;
            } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div = 0ULL;
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out = 0ULL;
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div 
                    = VL_DIVS_QQQ(64, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out 
                    = vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div;
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
            if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div 
                    = VL_DIV_QQQ(64, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out 
                    = vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div;
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div 
                    = (QData)((IData)(VL_DIV_III(32, (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1), (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2))));
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div)));
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div 
                = (QData)((IData)(VL_DIVS_III(32, (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1), (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2))));
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out 
                = (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div)));
        } else {
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out = 0ULL;
        }
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out = 0ULL;
    }
    if ((0x10U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
        if ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out = 0ULL;
        } else if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
            if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
                if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem 
                        = VL_MODDIV_QQQ(64, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out 
                        = vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem;
                } else {
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem 
                        = (QData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1), (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2))));
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out 
                        = (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem)));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem 
                    = (QData)((IData)(VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1), (IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2))));
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem)));
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem 
                    = VL_MODDIVS_QQQ(64, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out 
                    = vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem;
            }
        } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
            if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem 
                    = VL_MODDIV_QQQ(64, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out 
                    = vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem;
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem = 0ULL;
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out = 0ULL;
            }
        } else {
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem = 0ULL;
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out = 0ULL;
        }
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out = 0ULL;
    }
    vlSelf->ysyx_22041461_CPU__DOT__dest = ((0x10U 
                                             & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                             ? ((8U 
                                                 & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                    ? 0ULL
                                                    : vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL_out)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                    ? vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL_out
                                                    : vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA_out))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                    ? vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA_out
                                                    : vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL_out)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sub 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sub)))
                                                    : vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out)))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                   ? vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                    ? vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out
                                                    : vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                   ? vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                    ? vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out
                                                    : vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out))))
                                             : ((8U 
                                                 & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                  ? vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                    ? vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL_out
                                                    : 
                                                   (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
                                                    | vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                    ? 
                                                   (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
                                                    ^ vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)
                                                    : vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL_out)))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                    ? 
                                                   (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
                                                    & vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)
                                                    : vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA_out)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                    ? vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sub
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum)))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                    ? vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL_out
                                                    : 
                                                   (0xfffffffffffffffeULL 
                                                    & vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                    ? vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum
                                                    : 0ULL)))));
    vlSelf->ysyx_22041461_CPU__DOT__PC__DOT__npc = 
        ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
          ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
              ? vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mtvec
              : vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc)
          : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
              ? vlSelf->ysyx_22041461_CPU__DOT__dest
              : (4ULL + vlSelf->pc)));
    vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mtvec_next 
        = vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mtvec;
    vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc_next 
        = vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc;
    vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mcause_next 
        = vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mcause;
    vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mstatus_next 
        = vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mstatus;
    if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS))) {
        if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS))) {
            vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc_next 
                = vlSelf->pc;
            vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mcause_next = 0xbULL;
        } else if ((0x305U == (0xfffU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__imm)))) {
            vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mtvec_next 
                = vlSelf->ysyx_22041461_CPU__DOT__dest;
        } else if ((0x341U == (0xfffU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__imm)))) {
            vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc_next 
                = vlSelf->ysyx_22041461_CPU__DOT__dest;
        } else if ((0x342U == (0xfffU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__imm)))) {
            vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mcause_next 
                = vlSelf->ysyx_22041461_CPU__DOT__dest;
        } else if ((0x300U == (0xfffU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__imm)))) {
            vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mstatus_next 
                = vlSelf->ysyx_22041461_CPU__DOT__dest;
        } else {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__ebreak_TOP();
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS))) {
        if ((0x305U == (0xfffU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__imm)))) {
            vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mtvec_next 
                = vlSelf->ysyx_22041461_CPU__DOT__rs1_data;
        } else if ((0x341U == (0xfffU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__imm)))) {
            vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc_next 
                = vlSelf->ysyx_22041461_CPU__DOT__rs1_data;
        } else if ((0x342U == (0xfffU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__imm)))) {
            vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mcause_next 
                = vlSelf->ysyx_22041461_CPU__DOT__rs1_data;
        } else if ((0x300U == (0xfffU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__imm)))) {
            vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mstatus_next 
                = vlSelf->ysyx_22041461_CPU__DOT__rs1_data;
        } else {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__ebreak_TOP();
        }
    }
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data 
        = ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
            ? ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                ? 0ULL : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                           ? 0ULL : (4ULL + vlSelf->pc)))
            : ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                    ? vlSelf->ysyx_22041461_CPU__DOT__imm
                    : vlSelf->ysyx_22041461_CPU__DOT__rs2_data)
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                    ? vlSelf->ysyx_22041461_CPU__DOT__rs1_data
                    : vlSelf->ysyx_22041461_CPU__DOT__dest)));
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
        = ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr))
            ? ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr))
                ? 0x80000000ULL : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr))
                                    ? (4ULL + vlSelf->pc)
                                    : vlSelf->ysyx_22041461_CPU__DOT__imm))
            : ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr))
                ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr))
                    ? vlSelf->ysyx_22041461_CPU__DOT__rs2_data
                    : vlSelf->ysyx_22041461_CPU__DOT__rs1_data)
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr))
                    ? vlSelf->ysyx_22041461_CPU__DOT__dest
                    : 0x80000000ULL)));
    if ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                       >> 2U)))) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask2 
            = (0xffU & ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                                    ? 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       >> 1U))
                                                    : 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       >> 2U)))
                         : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                             ? (0xffU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                         >> 3U)) : 
                            (0xffU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                      >> 4U)))));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask1 
            = (0xffU & ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                                    ? 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       << 7U))
                                                    : 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       << 6U)))
                         : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                             ? (0xffffU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                           << 5U)) : 
                            (0xffffU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                        << 4U)))));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data1 
            = ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                           ? ((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data)))) 
                                              << 0x38U)
                                           : ((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data)))) 
                                              << 0x30U))
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                    ? ((QData)((IData)((0xffffffU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data)))) 
                       << 0x28U) : ((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data)) 
                                    << 0x20U)));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data2 
            = ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                           ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data 
                                              >> 8U)
                                           : (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data 
                                              >> 0x10U))
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                    ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data 
                       >> 0x18U) : (QData)((IData)(
                                                   (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data 
                                                    >> 0x20U)))));
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask2 
            = (0xffU & ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                                    ? 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       >> 5U))
                                                    : 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       >> 6U)))
                         : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                             ? (0xffU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                         >> 7U)) : 
                            ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                             >> 8U))));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask1 
            = (0xffU & ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                                       >> 1U))) ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                                    ? 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       << 3U))
                                                    : 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                                       << 2U)))
                         : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                             ? (0xffffU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask) 
                                           << 1U)) : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data1 
            = ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                           ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data 
                                              << 0x18U)
                                           : (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data 
                                              << 0x10U))
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                    ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data 
                       << 8U) : vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data2 
            = ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                           ? (QData)((IData)(
                                                             (0xffffffU 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data 
                                                                         >> 0x28U)))))
                                           : (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data 
                                                                         >> 0x30U))))))
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                    ? (QData)((IData)((0xffU & (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data 
                                                        >> 0x38U)))))
                    : 0ULL));
    }
    if ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 = 0ULL;
    } else if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
            if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__42__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__42__rdata;
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__43__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__43__rdata;
            } else {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__44__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__44__rdata;
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__45__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__45__rdata;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__46__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__46__rdata;
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__47__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__47__rdata;
        } else {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__48__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__48__rdata;
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__49__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__49__rdata;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__50__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__50__rdata;
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__51__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__51__rdata;
        } else {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__52__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__52__rdata;
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__53__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__53__rdata;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__54__rdata);
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
            = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__54__rdata;
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__55__rdata);
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
            = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__55__rdata;
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 = 0ULL;
    }
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data 
        = ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                          >> 2U))) ? ((1U & (IData)(
                                                    (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                                                     >> 1U)))
                                       ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
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
                                       : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
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
            : ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
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
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                    ? (((QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2)))) 
                        << 0x38U) | (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                                     >> 8U)) : vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1)));
    if ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        vlSelf->ysyx_22041461_CPU__DOT__mem = 0ULL;
    } else if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        vlSelf->ysyx_22041461_CPU__DOT__mem = ((2U 
                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data))))
                                                    : (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data)))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                                    ? (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data 
                                                                                >> 7U)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data)))))));
    } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        vlSelf->ysyx_22041461_CPU__DOT__mem = ((1U 
                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data)))))
                                                : (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data))));
    } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        vlSelf->ysyx_22041461_CPU__DOT__mem = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data;
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__mem = 0ULL;
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__set_difftest_next_TOP();
    }
    if ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS))) {
        if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS))) {
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
        } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS))) {
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
        } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS))) {
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
        } else {
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[(0x1fU 
                                                          & (vlSelf->inst 
                                                             >> 7U))] 
                = vlSelf->ysyx_22041461_CPU__DOT__csr_data;
        }
    } else if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS))) {
        if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS))) {
            if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS))) {
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [1U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [2U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [3U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [4U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [5U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [6U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [7U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [8U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [9U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xaU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xbU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xcU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xdU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xeU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xfU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x10U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x11U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x12U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x13U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x14U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x15U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x16U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x17U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x18U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x19U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1aU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1bU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1cU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1dU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1eU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1fU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [1U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [2U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [3U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [4U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [5U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [6U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [7U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [8U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [9U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xaU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xbU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xcU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xdU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xeU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xfU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x10U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x11U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x12U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x13U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x14U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x15U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x16U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x17U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x18U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x19U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1aU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1bU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1cU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1dU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1eU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1fU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[(0x1fU 
                                                              & (vlSelf->inst 
                                                                 >> 7U))] = 1ULL;
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [1U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [2U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [3U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [4U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [5U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [6U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [7U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [8U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [9U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xaU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xbU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xcU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xdU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xeU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xfU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x10U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x11U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x12U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x13U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x14U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x15U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x16U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x17U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x18U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x19U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1aU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1bU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1cU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1dU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1eU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1fU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [1U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [2U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [3U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [4U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [5U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [6U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [7U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [8U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [9U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xaU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xbU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xcU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xdU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xeU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0xfU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x10U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x11U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x12U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x13U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x14U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x15U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x16U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x17U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x18U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x19U];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1aU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1bU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1cU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1dU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1eU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                    = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                    [0x1fU];
                vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[(0x1fU 
                                                              & (vlSelf->inst 
                                                                 >> 7U))] = 0ULL;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS))) {
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[(0x1fU 
                                                          & (vlSelf->inst 
                                                             >> 7U))] 
                = vlSelf->ysyx_22041461_CPU__DOT__mem;
        } else {
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[(0x1fU 
                                                          & (vlSelf->inst 
                                                             >> 7U))] 
                = vlSelf->ysyx_22041461_CPU__DOT__imm;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS))) {
        if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS))) {
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[(0x1fU 
                                                          & (vlSelf->inst 
                                                             >> 7U))] 
                = (4ULL + vlSelf->pc);
        } else {
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [1U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [2U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [3U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [4U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [5U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [6U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [7U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [8U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [9U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xaU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xbU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xcU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xdU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xeU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0xfU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x10U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x11U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x12U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x13U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x14U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x15U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x16U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x17U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x18U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x19U];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1aU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1bU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1cU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1dU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1eU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
                = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
                [0x1fU];
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[(0x1fU 
                                                          & (vlSelf->inst 
                                                             >> 7U))] 
                = vlSelf->pc;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS))) {
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [1U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [2U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [3U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [4U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [5U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [6U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [7U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [8U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [9U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xaU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xbU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xcU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xdU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xeU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xfU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x10U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x11U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x12U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x13U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x14U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x15U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x16U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x17U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x18U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x19U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1aU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1bU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1cU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1dU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1eU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1fU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [1U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [2U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [3U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [4U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [5U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [6U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [7U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [8U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [9U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xaU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xbU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xcU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xdU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xeU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xfU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x10U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x11U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x12U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x13U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x14U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x15U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x16U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x17U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x18U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x19U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1aU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1bU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1cU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1dU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1eU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1fU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[(0x1fU 
                                                      & (vlSelf->inst 
                                                         >> 7U))] 
            = vlSelf->ysyx_22041461_CPU__DOT__dest;
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [1U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [2U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [3U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [4U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [5U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [6U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [7U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [8U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [9U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xaU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xbU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xcU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xdU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xeU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xfU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x10U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x11U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x12U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x13U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x14U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x15U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x16U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x17U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x18U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x19U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1aU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1bU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1cU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1dU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1eU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1fU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [1U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [2U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [3U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [4U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [5U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [6U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [7U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [8U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [9U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xaU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xaU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xbU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xbU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xcU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xcU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xdU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xdU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xeU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xeU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0xfU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0xfU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x10U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x10U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x11U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x11U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x12U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x12U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x13U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x13U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x14U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x14U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x15U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x15U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x16U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x16U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x17U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x17U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x18U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x18U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x19U] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x19U];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1aU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1aU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1bU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1bU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1cU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1cU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1dU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1dU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1eU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1eU];
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0x1fU] 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
            [0x1fU];
    }
    vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] = 0ULL;
}

void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__PC__DOT__set_pc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);
void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__REGS__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22041461_CPU___024root___initial__TOP__3(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___initial__TOP__3\n"); );
    // Body
    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__PC__DOT__set_pc_ptr__Vdpioc2_TOP(vlSelf->pc);
    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__REGS__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x);
}

void Vysyx_22041461_CPU___024root___eval_initial(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vysyx_22041461_CPU___024root___initial__TOP__3(vlSelf);
}

void Vysyx_22041461_CPU___024root___eval_settle(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___eval_settle\n"); );
    // Body
    Vysyx_22041461_CPU___024root___settle__TOP__1(vlSelf);
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
    vlSelf->flag = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22041461_CPU__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__dest = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__mem = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = VL_RAND_RESET_I(5);
    vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__CMP_out = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22041461_CPU__DOT__sel_PC = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = VL_RAND_RESET_I(4);
    vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22041461_CPU__DOT__csr_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__PC__DOT__npc = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sub = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL__DOT__sll = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA__DOT__sra = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL__DOT__srl = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rinst = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask = VL_RAND_RESET_I(16);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask1 = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask2 = VL_RAND_RESET_I(8);
    vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mtvec_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mcause_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mstatus_next = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__5__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__5__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__6__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__6__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__7__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__7__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__8__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__8__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__9__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__9__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__10__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__10__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__11__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__11__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__12__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__12__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__13__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__13__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__14__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__14__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__15__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__15__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__16__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__16__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__17__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__17__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__18__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__18__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__19__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__19__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__20__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__20__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__21__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__21__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__22__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__22__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__23__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__23__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__24__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__24__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__25__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__25__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__26__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__26__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__27__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__27__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__28__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__28__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__29__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__29__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__30__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__30__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__31__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__31__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__32__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__32__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__33__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__33__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__34__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__34__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__35__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__35__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__36__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__36__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__37__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__37__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__42__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__43__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__44__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__45__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__46__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__47__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__48__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__49__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__50__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__51__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__52__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__53__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__54__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__55__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_pc__59__rdata = 0;
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__CMP_out = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
