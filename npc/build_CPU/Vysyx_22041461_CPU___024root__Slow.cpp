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

void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__IDU__DOT__ebreak_TOP();

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
    if ((0x13U == ((0x380U & (vlSelf->inst >> 5U)) 
                   | (0x7fU & vlSelf->inst)))) {
        vlSelf->ysyx_22041461_CPU__DOT__imm = (((- (QData)((IData)(
                                                                   (vlSelf->inst 
                                                                    >> 0x1fU)))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x14U))));
        vlSelf->ysyx_22041461_CPU__DOT__en_regw = 1U;
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__imm = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__en_regw = 0U;
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__IDU__DOT__ebreak_TOP();
    }
    vlSelf->ysyx_22041461_CPU__DOT__data_rs1 = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    VL_EXTEND_WQ(65,64, __Vtemp2, vlSelf->ysyx_22041461_CPU__DOT__data_rs1);
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->ysyx_22041461_CPU__DOT__imm);
    VL_ADD_W(3, __Vtemp4, __Vtemp2, __Vtemp3);
    vlSelf->flag = (1U & __Vtemp4[2U]);
    if (vlSelf->ysyx_22041461_CPU__DOT__en_regw) {
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
            = (vlSelf->ysyx_22041461_CPU__DOT__data_rs1 
               + vlSelf->ysyx_22041461_CPU__DOT__imm);
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

void Vysyx_22041461_CPU___024root___eval_initial(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
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
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_22041461_CPU__DOT__en_regw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22041461_CPU__DOT__data_rs1 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
