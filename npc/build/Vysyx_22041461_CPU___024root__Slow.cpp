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

void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__ebreak_TOP();

void Vysyx_22041461_CPU___024root___settle__TOP__1(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___settle__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__i = 0x40U;
    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__11__rdata);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rinst 
        = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__11__rdata;
    vlSelf->ysyx_22041461_CPU__DOT__inst = ((0U == 
                                             (7U & (IData)(vlSelf->pc)))
                                             ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rinst)
                                             : ((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->pc)))
                                                 ? (IData)(
                                                           (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rinst 
                                                            >> 0x20U))
                                                 : 0U));
    vlSelf->ysyx_22041461_CPU__DOT__rs1_data = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
        [(0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__inst 
                   >> 0xfU))];
    vlSelf->ysyx_22041461_CPU__DOT__rs2_data = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
        [(0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__inst 
                   >> 0x14U))];
    if (((((((((0x13U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)) 
               | (0x67U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
              | (0x1013U == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
             | (0x3023U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
            | (0x17U == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
           | (0x37U == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
          | (0x6fU == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
         | (0x100073U == vlSelf->ysyx_22041461_CPU__DOT__inst))) {
        if ((0x13U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__Vfuncout;
        } else if ((0x67U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 2U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 3U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__Vfuncout;
        } else if ((0x1013U == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 3U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__Vfuncout;
        } else if ((0x3023U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 2U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__Vfuncout;
        } else if ((0x17U == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__4__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__4__Vfuncout 
                = (((QData)((IData)((- (IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__4__INST 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__4__INST))));
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__4__Vfuncout;
        } else if ((0x37U == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__5__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__5__Vfuncout 
                = (((QData)((IData)((- (IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__5__INST 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__5__INST))));
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 4U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__5__Vfuncout;
        } else if ((0x6fU == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__6__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__6__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__6__INST 
                                        >> 0x1fU)))) 
                    << 0x15U) | (QData)((IData)(((0x100000U 
                                                  & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__6__INST 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__6__INST) 
                                                    | ((0x800U 
                                                        & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__6__INST 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__6__INST 
                                                             >> 0x14U))))))));
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 3U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__6__Vfuncout;
        } else {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__ebreak_TOP();
        }
    }
    if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))) {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
            = ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
                ? vlSelf->ysyx_22041461_CPU__DOT__rs1_data
                : vlSelf->ysyx_22041461_CPU__DOT__imm);
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2 
            = ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
                ? vlSelf->ysyx_22041461_CPU__DOT__rs2_data
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
                    ? (4ULL + vlSelf->pc) : vlSelf->pc));
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
            = vlSelf->ysyx_22041461_CPU__DOT__rs1_data;
        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2 
            = ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
                ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
                    ? (4ULL + vlSelf->pc) : vlSelf->pc)
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU))
                    ? vlSelf->ysyx_22041461_CPU__DOT__imm
                    : vlSelf->ysyx_22041461_CPU__DOT__rs2_data));
    }
    VL_EXTEND_WQ(65,64, __Vtemp2, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
    VL_ADD_W(3, __Vtemp4, __Vtemp2, __Vtemp3);
    vlSelf->flag = (1U & __Vtemp4[2U]);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum = 
        (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
         + vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
    vlSelf->ysyx_22041461_CPU__DOT__dest = ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                             ? 0ULL
                                             : ((2U 
                                                 & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                  ? 
                                                 VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)
                                                  : 
                                                 (0xfffffffffffffffeULL 
                                                  & vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                  ? vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum
                                                  : 0ULL)));
    vlSelf->ysyx_22041461_CPU__DOT__PC__DOT__npc = 
        ((0U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
          ? (4ULL + vlSelf->pc) : ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
                                    ? vlSelf->ysyx_22041461_CPU__DOT__dest
                                    : vlSelf->pc));
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
        = ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr))
            ? ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr))
                ? 0x80000000ULL : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr))
                                    ? 0x80000000ULL
                                    : (4ULL + vlSelf->pc)))
            : ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr))
                ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr))
                    ? vlSelf->ysyx_22041461_CPU__DOT__imm
                    : vlSelf->ysyx_22041461_CPU__DOT__rs2_data)
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr))
                    ? vlSelf->ysyx_22041461_CPU__DOT__rs1_data
                    : vlSelf->ysyx_22041461_CPU__DOT__dest)));
    if ((0U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        vlSelf->ysyx_22041461_CPU__DOT__mem = 0ULL;
    } else if ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__9__rdata);
        vlSelf->ysyx_22041461_CPU__DOT__mem = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__9__rdata;
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__mem = 0ULL;
    }
    if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS))) {
        if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS))) {
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
            vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[(0x1fU 
                                                          & (vlSelf->ysyx_22041461_CPU__DOT__inst 
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
                                                          & (vlSelf->ysyx_22041461_CPU__DOT__inst 
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
                                                          & (vlSelf->ysyx_22041461_CPU__DOT__inst 
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
                                                          & (vlSelf->ysyx_22041461_CPU__DOT__inst 
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
                                                      & (vlSelf->ysyx_22041461_CPU__DOT__inst 
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
}

void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__REGS__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_22041461_CPU___024root___initial__TOP__3(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___initial__TOP__3\n"); );
    // Body
    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__REGS__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d);
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
    vlSelf->ysyx_22041461_CPU__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22041461_CPU__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__dest = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__mem = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22041461_CPU__DOT__sel_PC = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = VL_RAND_RESET_I(2);
    vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = VL_RAND_RESET_I(3);
    vlSelf->ysyx_22041461_CPU__DOT__PC__DOT__npc = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rinst = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__4__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__4__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__5__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__5__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__6__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__6__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__9__rdata = 0;
    vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__11__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
