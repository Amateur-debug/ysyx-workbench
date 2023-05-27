// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041461_TOP.h for the primary calling header

#include "Vysyx_041461_TOP___024root.h"
#include "Vysyx_041461_TOP__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_041461_TOP___024root___ctor_var_reset(Vysyx_041461_TOP___024root* vlSelf);

Vysyx_041461_TOP___024root::Vysyx_041461_TOP___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_041461_TOP___024root___ctor_var_reset(this);
}

void Vysyx_041461_TOP___024root::__Vconfigure(Vysyx_041461_TOP__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_041461_TOP___024root::~Vysyx_041461_TOP___024root() {
}

void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__get_skip_TOP(CData/*7:0*/ a);
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_0fc9e6c7_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_ed9e6550_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_29e045f6_0;
extern const VlUnpacked<QData/*62:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_45c67848_0;
extern const VlUnpacked<QData/*63:0*/, 128> Vysyx_041461_TOP__ConstPool__TABLE_677b417c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_041461_TOP__ConstPool__TABLE_e8cdc630_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_d1140eb3_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_8cb9ad1b_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_be24ae63_0;
void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_84736496_0;

void Vysyx_041461_TOP___024root___settle__TOP__19(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___settle__TOP__19\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    CData/*6:0*/ __Vtableidx6;
    CData/*4:0*/ __Vtableidx7;
    SData/*8:0*/ __Vtableidx8;
    VlWide<3>/*95:0*/ __Vtemp4861;
    VlWide<3>/*95:0*/ __Vtemp4862;
    VlWide<3>/*95:0*/ __Vtemp4863;
    VlWide<3>/*95:0*/ __Vtemp4866;
    VlWide<3>/*95:0*/ __Vtemp4867;
    VlWide<3>/*95:0*/ __Vtemp4868;
    VlWide<4>/*127:0*/ __Vtemp4874;
    VlWide<4>/*127:0*/ __Vtemp4875;
    VlWide<4>/*127:0*/ __Vtemp4876;
    VlWide<4>/*127:0*/ __Vtemp4877;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bresp = 0U;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rresp = 0U;
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bresp = 0U;
    Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__get_skip_TOP(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_skip_difftets_out);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wlast 
        = (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__i = 0x40U;
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
                if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__i = 0x40U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
            if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__i = 0x40U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
        if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__i = 0x40U;
        }
    }
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid_next = 1U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen_next = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst_next = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen_next = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst_next = 0U;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst;
    }
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))) {
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awid_next = 1U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awlen_next = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awburst_next = 0U;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awid_next 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awid;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awlen_next 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awlen;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awburst_next 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awburst;
    }
    if (vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate) {
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arlen_next 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arlen;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arburst_next 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arburst;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arlen_next = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arburst_next = 0U;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_positive 
        = (1U & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__signed_buffer)) 
                 | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divw_buffer)
                     ? (~ (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend_buffer 
                                   >> 0x1fU))) : (~ (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend_buffer 
                                                             >> 0x3fU))))));
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
                if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                    __Vilp = 0U;
                    while ((__Vilp <= 0x3fU)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1_next[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                }
            } else if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                              [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                 >> 3U)))]))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1_next[(0x3fU 
                                                                           & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
            if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1_next[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
        if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x3fU)) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1_next[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_positive 
        = (1U & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__signed_buffer)) 
                 | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divw_buffer)
                     ? ((~ (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend_buffer 
                                    >> 0x1fU))) ^ (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer 
                                                           >> 0x1fU)))
                     : ((~ (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend_buffer 
                                    >> 0x3fU))) ^ (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer 
                                                           >> 0x3fU))))));
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
                if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                    __Vilp = 0U;
                    while ((__Vilp <= 0x3fU)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2_next[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                }
            } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                       [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                          >> 3U)))]) {
                if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                              >> 3U)))]))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
            if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2_next[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
        if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x3fU)) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2_next[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
                if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                    __Vilp = 0U;
                    while ((__Vilp <= 0x3fU)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3_next[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                }
            } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                       [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                          >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                               [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                  >> 3U)))]))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] = 1U;
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
            if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3_next[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
        if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x3fU)) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3_next[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
                if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                    __Vilp = 0U;
                    while ((__Vilp <= 0x3fU)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4_next[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                }
            } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                       [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                          >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                                   [(0x3fU & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                      >> 3U)))]))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] = 1U;
                        }
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
            if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4_next[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
        if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x3fU)) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4_next[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
                if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                    __Vilp = 0U;
                    while ((__Vilp <= 0x3fU)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5_next[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                }
            } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                       [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                          >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                                       [(0x3fU & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 3U)))]))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
            if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5_next[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
        if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x3fU)) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5_next[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
                if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                    __Vilp = 0U;
                    while ((__Vilp <= 0x3fU)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6_next[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                }
            } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                       [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                          >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))]))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
            if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6_next[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
        if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x3fU)) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6_next[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    }
    __Vtableidx2 = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed 
        = Vysyx_041461_TOP__ConstPool__TABLE_0fc9e6c7_0
        [__Vtableidx2];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_divw 
        = Vysyx_041461_TOP__ConstPool__TABLE_ed9e6550_0
        [__Vtableidx2];
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
                if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                    __Vilp = 0U;
                    while ((__Vilp <= 0x3fU)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7_next[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                }
            } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                       [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                          >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                            >> 3U)))]))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
            if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7_next[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
        if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x3fU)) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7_next[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    }
    __Vtableidx7 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out) 
                     << 1U) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl 
        = Vysyx_041461_TOP__ConstPool__TABLE_29e045f6_0
        [__Vtableidx7];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_CAUSE 
        = Vysyx_041461_TOP__ConstPool__TABLE_45c67848_0
        [__Vtableidx7];
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
                if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                    __Vilp = 0U;
                    while ((__Vilp <= 0x3fU)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8_next[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                }
            } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                       [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                          >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if ((1U & (~ 
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                               >> 3U)))]))) {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
            if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8_next[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
        if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
            __Vilp = 0U;
            while ((__Vilp <= 0x3fU)) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8_next[__Vilp] = 0U;
                __Vilp = ((IData)(1U) + __Vilp);
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bvalid 
        = (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bid 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rvalid 
        = (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rlast 
        = (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state));
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bvalid 
        = (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb 
        = ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
            ? ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                ? 0U : ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                         ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                             ? 0xffU : ((0U == (7U 
                                                & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))
                                         ? 0xfU : (
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))
                                                    ? 0xf0U
                                                    : 0U)))
                         : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                             ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 2U)))
                                 ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 1U)))
                                     ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                         ? 0U : 0xc0U)
                                     : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                         ? 0U : 0x30U))
                                 : ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 1U)))
                                     ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                         ? 0U : 0xcU)
                                     : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                         ? 0U : 3U)))
                             : ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 2U)))
                                 ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 1U)))
                                     ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                         ? 0x80U : 0x40U)
                                     : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                         ? 0x20U : 0x10U))
                                 : ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 1U)))
                                     ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                         ? 8U : 4U)
                                     : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                         ? 2U : 1U))))))
            : 0U);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rid 
        = ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid)
            : 0U);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bid 
        = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awid)
            : 0U);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID__DOT__valid_csr 
        = (((((((((((((((0xf11U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                    >> 0x14U)) | (0xf12U 
                                                  == 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                   >> 0x14U))) 
                       | (0xf13U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                     >> 0x14U))) | 
                      (0xf14U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                  >> 0x14U))) | (0x300U 
                                                 == 
                                                 (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0x14U))) 
                    | (0x301U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                  >> 0x14U))) | (0x304U 
                                                 == 
                                                 (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0x14U))) 
                  | (0x305U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                >> 0x14U))) | (0x340U 
                                               == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                   >> 0x14U))) 
                | (0x341U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 0x14U))) | (0x342U 
                                             == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0x14U))) 
              | (0x343U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                            >> 0x14U))) | (0x344U == 
                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                            >> 0x14U))) 
            | (0xb00U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                          >> 0x14U))) | (0xb02U == 
                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                          >> 0x14U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF2_trap 
        = (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
              & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
             | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out)))) 
            | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
               & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out)))) 
           | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
              & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))));
    __Vtemp4861[0U] = ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[2U] 
                        << 1U) | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[1U] 
                                  >> 0x1fU));
    __Vtemp4861[1U] = ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[3U] 
                        << 1U) | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[2U] 
                                  >> 0x1fU));
    __Vtemp4861[2U] = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[3U] 
                       >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp4862, (1ULL + (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer)));
    VL_EXTEND_WQ(65,64, __Vtemp4863, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer);
    VL_EXTEND_WQ(65,64, __Vtemp4866, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__signed_buffer) {
        __Vtemp4867[0U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer 
                                          >> 0x3fU)))
                            ? __Vtemp4862[0U] : __Vtemp4863[0U]);
        __Vtemp4867[1U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer 
                                          >> 0x3fU)))
                            ? __Vtemp4862[1U] : __Vtemp4863[1U]);
        __Vtemp4867[2U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer 
                                          >> 0x3fU)))
                            ? __Vtemp4862[2U] : __Vtemp4863[2U]);
    } else {
        __Vtemp4867[0U] = __Vtemp4866[0U];
        __Vtemp4867[1U] = __Vtemp4866[1U];
        __Vtemp4867[2U] = __Vtemp4866[2U];
    }
    VL_SUB_W(3, __Vtemp4868, __Vtemp4861, __Vtemp4867);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[0U] 
        = __Vtemp4868[0U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[1U] 
        = __Vtemp4868[1U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[2U] 
        = (1U & __Vtemp4868[2U]);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__subw_out 
        = (0x1ffffffffULL & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend_w 
                              >> 0x1fU) - ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__signed_buffer)
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer 
                                                           >> 0x1fU)))
                                                ? (QData)((IData)(
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer)))))
                                                : (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer)))
                                            : (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer)))));
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__state) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata_next[0U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata_next[1U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata_next[2U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata[2U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata_next[3U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata[3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata_next[0U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata_next[1U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata_next[2U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata[2U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata_next[3U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata[3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata_next[0U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata_next[1U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata_next[2U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata[2U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata_next[3U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata[3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata_next[0U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata_next[1U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata_next[2U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata[2U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata_next[3U] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata[3U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata_next[0U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q0[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata_next[1U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q0[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata_next[2U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q0[2U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata_next[3U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q0[3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata_next[0U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q1[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata_next[1U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q1[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata_next[2U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q1[2U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata_next[3U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q1[3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata_next[0U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q2[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata_next[1U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q2[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata_next[2U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q2[2U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata_next[3U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q2[3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata_next[0U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q3[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata_next[1U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q3[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata_next[2U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q3[2U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata_next[3U] 
            = vlSelf->ysyx_041461_TOP__DOT__Q3[3U];
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out 
        = ((1U & (((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie 
                            >> 7U)) & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip 
                                               >> 7U))) 
                  & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                             >> 3U)))) ? 8U : ((0U 
                                                != 
                                                (3U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)))
                                                ? 1U
                                                : 0U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit 
        = ((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr) 
           & (0x200bfffU >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit1 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit2 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit3 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit4 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit5 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit6 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit7 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit8 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached 
        = (1U & (~ ((0x80000000U <= (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)) 
                    & (0x88000000U > (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid 
        = (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c 
        = ((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))
            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
           [vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out]
            : ((6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out
                : ((7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))
                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out
                    : 0ULL)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__multiplication 
        = (((((0xbU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out)) 
              | (0xcU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
             | (0xdU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
            | (0xeU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
           | (0x18U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [(0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                   >> 0xfU))];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [(0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                   >> 0x14U))];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__division 
        = ((((((((0xfU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out)) 
                 | (0x10U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
                | (0x11U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
               | (0x12U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
              | (0x19U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
             | (0x1aU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
            | (0x1bU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
           | (0x1cU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out)));
    __Vtableidx6 = ((0x70U & ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out) 
                              << 4U)) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask 
        = Vysyx_041461_TOP__ConstPool__TABLE_677b417c_0
        [__Vtableidx6];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
           & ((((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out)) 
                    | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                   | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                  | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                 | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
               | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
              | (8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap 
        = ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
             & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
            | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
               & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out)))) 
           | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
              & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
           & ((((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out)) 
                    | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                   | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                  | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                 | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
               | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
              | (8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line 
        = ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) ? ((4U & 
                                              vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))])
                                              ? ((0x40U 
                                                  & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                              >> 3U)))])
                                                  ? 7U
                                                  : 6U)
                                              : ((0x20U 
                                                  & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                              >> 3U)))])
                                                  ? 5U
                                                  : 4U))
            : ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 3U)))]) ? ((0x10U 
                                                  & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                              >> 3U)))])
                                                  ? 3U
                                                  : 2U)
                : ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) ? 1U
                    : 0U)));
    __Vtableidx3 = ((0x70U & ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out) 
                              << 4U)) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align 
        = Vysyx_041461_TOP__ConstPool__TABLE_e8cdc630_0
        [__Vtableidx3];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                          >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line 
        = ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))]) ? ((4U & 
                                              vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree
                                              [(0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))])
                                              ? ((0x40U 
                                                  & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                              >> 3U)))])
                                                  ? 7U
                                                  : 6U)
                                              : ((0x20U 
                                                  & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                              >> 3U)))])
                                                  ? 5U
                                                  : 4U))
            : ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) ? ((0x10U 
                                                  & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                              >> 3U)))])
                                                  ? 3U
                                                  : 2U)
                : ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) ? 1U
                    : 0U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached 
        = (1U & (~ ((0x80000000U <= (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)) 
                    & (0x88000000U > (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))));
    __Vtableidx8 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out) 
                     << 6U) | (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out) 
                                << 1U) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs1_read 
        = Vysyx_041461_TOP__ConstPool__TABLE_d1140eb3_0
        [__Vtableidx8];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs2_read 
        = Vysyx_041461_TOP__ConstPool__TABLE_8cb9ad1b_0
        [__Vtableidx8];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_csr_read 
        = Vysyx_041461_TOP__ConstPool__TABLE_be24ae63_0
        [__Vtableidx8];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
           & ((((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)) 
                    | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                   | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                  | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                 | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
               | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
              | (8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store 
        = ((((8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)) 
             | (9U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) 
            | (0xaU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) 
           | (0xbU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap 
        = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
            & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out))) 
           | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
              & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_trap 
        = ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_valid_out) 
               & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_trap_out))) 
              | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                 & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out)))) 
             | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out)))) 
            | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
               & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out)))) 
           | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
              & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
           & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load 
        = (((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)) 
                | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) 
               | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) 
              | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) 
             | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) 
            | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) 
           | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)));
    if (vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate) {
        Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_read_TOP((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr)), vlSelf->__Vtask_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_read__17__rdata);
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rvalid = 1U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rid 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rresp = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rdata 
            = vlSelf->__Vtask_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_read__17__rdata;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rlast = 1U;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rvalid = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rid = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rresp = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rdata = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rlast = 0U;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out];
    __Vtableidx1 = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed 
        = Vysyx_041461_TOP__ConstPool__TABLE_84736496_0
        [__Vtableidx1];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[1U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[2U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[3U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[4U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[5U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[6U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[7U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[8U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[9U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0xaU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0xbU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0xcU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0xdU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0xeU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0xfU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x10U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x11U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x12U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x13U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x14U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x15U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x16U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x17U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x18U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x19U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x1aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x1bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x1cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x1dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x1eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x1fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x20U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x21U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x22U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x23U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x24U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x25U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x26U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x27U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x28U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x29U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x2aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x2bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x2cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x2dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x2eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x2fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x30U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x31U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x32U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x33U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x34U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x35U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x36U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x37U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x38U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x39U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x3aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x3bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x3cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x3dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x3eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x3fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x40U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x41U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x42U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x43U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x44U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x45U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x46U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x47U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x48U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x49U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x4aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x4bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x4cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x4dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x4eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x4fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x50U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x51U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x52U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x53U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x54U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x55U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x56U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x57U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x58U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x59U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x5aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x5bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x5cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x5dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x5eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x5fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x60U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x61U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x62U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x63U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x64U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x65U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x66U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x67U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x68U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x69U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x6aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x6bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x6cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x6dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x6eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x6fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x70U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x71U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x72U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x73U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x74U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x75U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x76U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x77U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x78U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x79U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x7aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x7bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x7cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x7dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x7eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x7fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    VL_ADD_W(4, __Vtemp4874, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src1, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src2);
    VL_EXTEND_WI(128,1, __Vtemp4875, (1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                    >> 0x20U))));
    VL_ADD_W(4, __Vtemp4876, __Vtemp4874, __Vtemp4875);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_hi 
        = (((QData)((IData)(__Vtemp4876[3U])) << 0x20U) 
           | (QData)((IData)(__Vtemp4876[2U])));
    VL_EXTEND_WI(128,1, __Vtemp4877, (1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                    >> 0x20U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_lo 
        = (((((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src1[1U])) 
              << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src1[0U]))) 
            + (((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src2[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src2[0U])))) 
           + (((QData)((IData)(__Vtemp4877[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp4877[0U]))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__t 
        = ((0x800U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
            ? ((0x400U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                ? ((0x200U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                    ? ((0x100U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                        ? ((0x80U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                            ? 0ULL : ((0x40U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                       ? 0ULL : ((0x20U 
                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                  ? 0ULL
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                       ? 0ULL
                                                       : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid))
                                                     : 0ULL))
                                                   : 0ULL))))
                        : 0ULL) : 0ULL) : ((0x200U 
                                            & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                            ? ((0x100U 
                                                & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                ? (
                                                   (0x80U 
                                                    & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                    ? 0ULL
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                     ? 0ULL
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                      ? 0ULL
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                       ? 0ULL
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                        ? 0ULL
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                         ? 0ULL
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                           ? 0ULL
                                                           : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__minstret)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                           ? 0ULL
                                                           : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcycle))))))))
                                                : 0ULL)
                                            : 0ULL))
            : ((0x400U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                ? 0ULL : ((0x200U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                           ? ((0x100U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                               ? ((0x80U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                   ? 0ULL : ((0x40U 
                                              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                              ? ((0x20U 
                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                  ? 0ULL
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                   ? 0ULL
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                       ? 0ULL
                                                       : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                       ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtval
                                                       : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                       ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc
                                                       : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mscratch))))))
                                              : ((0x20U 
                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                  ? 0ULL
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                   ? 0ULL
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                       ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec
                                                       : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))
                                                       ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__misa
                                                       : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus))))))))
                               : 0ULL) : 0ULL)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_csr_data 
        = ((0x800U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
            ? ((0x400U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                ? ((0x200U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                    ? ((0x100U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                        ? ((0x80U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                            ? 0ULL : ((0x40U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                       ? 0ULL : ((0x20U 
                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                  ? 0ULL
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                       ? 0ULL
                                                       : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid))
                                                     : 0ULL))
                                                   : 0ULL))))
                        : 0ULL) : 0ULL) : ((0x200U 
                                            & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                            ? ((0x100U 
                                                & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                ? (
                                                   (0x80U 
                                                    & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                    ? 0ULL
                                                    : 
                                                   ((0x40U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                     ? 0ULL
                                                     : 
                                                    ((0x20U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                      ? 0ULL
                                                      : 
                                                     ((0x10U 
                                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                       ? 0ULL
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                        ? 0ULL
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                         ? 0ULL
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                           ? 0ULL
                                                           : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__minstret)
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                           ? 0ULL
                                                           : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcycle))))))))
                                                : 0ULL)
                                            : 0ULL))
            : ((0x400U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                ? 0ULL : ((0x200U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                           ? ((0x100U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                               ? ((0x80U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                   ? 0ULL : ((0x40U 
                                              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                              ? ((0x20U 
                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                  ? 0ULL
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                   ? 0ULL
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                       ? 0ULL
                                                       : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                       ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtval
                                                       : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                       ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc
                                                       : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mscratch))))))
                                              : ((0x20U 
                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                  ? 0ULL
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                   ? 0ULL
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                    ? 0ULL
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                       ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec
                                                       : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                      ? 0ULL
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                                       ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__misa
                                                       : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus))))))))
                               : 0ULL) : 0ULL)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bresp = 0U;
    if ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bvalid 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bvalid;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bid 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bid;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bvalid 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
               & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bvalid));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bid 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate))
                ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bid)
                : 0U);
    }
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divw_buffer) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_out 
            = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__subw_out 
                              >> 0x20U))) ? ((QData)((IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_w 
                                                              >> 1U))) 
                                             << 1U)
                : (1ULL | ((QData)((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_w 
                                            >> 1U))) 
                           << 1U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_out 
            = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__subw_out 
                              >> 0x20U))) ? (QData)((IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend_w 
                                                             >> 0x1fU)))
                : (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__subw_out)));
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_out 
            = ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[2U])
                ? (0xfffffffffffffffeULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient)
                : (1ULL | (0xfffffffffffffffeULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_out 
            = ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[2U])
                ? (((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[3U])) 
                    << 0x21U) | (((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[2U])) 
                                  << 1U) | ((QData)((IData)(
                                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[1U])) 
                                            >> 0x1fU)))
                : (((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[0U]))));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2_inst 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit1_out)
            ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_pc_out 
                              >> 2U))) ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata_next[1U]
                : vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata_next[0U])
            : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit2_out)
                ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_pc_out 
                                  >> 2U))) ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata_next[3U]
                    : vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata_next[2U])
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit3_out)
                    ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_pc_out 
                                      >> 2U))) ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata_next[1U]
                        : vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata_next[0U])
                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit4_out)
                        ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_pc_out 
                                          >> 2U))) ? 
                           vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata_next[3U]
                            : vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata_next[2U])
                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit5_out)
                            ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_pc_out 
                                              >> 2U)))
                                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata_next[1U]
                                : vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata_next[0U])
                            : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit6_out)
                                ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_pc_out 
                                                  >> 2U)))
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata_next[3U]
                                    : vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata_next[2U])
                                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit7_out)
                                    ? ((1U & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_pc_out 
                                                      >> 2U)))
                                        ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata_next[1U]
                                        : vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata_next[0U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit8_out)
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_pc_out 
                                                          >> 2U)))
                                            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata_next[3U]
                                            : vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata_next[2U])
                                        : ((1U & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_pc_out 
                                                          >> 2U)))
                                            ? (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_AXI_rdata_out 
                                                       >> 0x20U))
                                            : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_AXI_rdata_out))))))))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit 
        = ((((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit1) 
                 | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit2)) 
                | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit3)) 
               | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit4)) 
              | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit5)) 
             | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit6)) 
            | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit7)) 
           | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit8));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_araddr 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)
            : ((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                        >> 3U)) << 3U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_wvalid 
        = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
           & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_MEM_ctrl = 0U;
    if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
         & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap)))) {
        if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                      >> 6U)))) {
            if ((0x20U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0xeU)))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_MEM_ctrl 
                                            = ((0x2000U 
                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                ? (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                    ? 0xbU
                                                    : 0xaU)
                                                : (
                                                   (0x1000U 
                                                    & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                    ? 9U
                                                    : 8U));
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                 >> 4U)))) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((0x4000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((0x2000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                        if ((1U & (~ 
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                    >> 0xcU)))) {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_MEM_ctrl = 6U;
                                        }
                                    } else {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_MEM_ctrl 
                                            = ((0x1000U 
                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                ? 4U
                                                : 3U);
                                    }
                                } else {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_MEM_ctrl 
                                        = ((0x2000U 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                            ? ((0x1000U 
                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                ? 7U
                                                : 5U)
                                            : ((0x1000U 
                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                ? 2U
                                                : 1U));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 0U;
    if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
         & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap)))) {
        if ((0x40U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((0x20U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((0U != (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 7U))) {
                                        if ((0x604000U 
                                             != (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 7U))) {
                                            if ((0x2000U 
                                                 != 
                                                 (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 7U))) {
                                                if (
                                                    (0x4000U 
                                                     & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                    if (
                                                        (0x2000U 
                                                         & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl 
                                                            = 
                                                            ((0x1000U 
                                                              & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                              ? 8U
                                                              : 7U);
                                                    }
                                                } else if (
                                                           (0x2000U 
                                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl 
                                                        = 
                                                        ((0x1000U 
                                                          & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                          ? 8U
                                                          : 7U);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if (((((((((1U == (
                                                   (0x3f8U 
                                                    & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                         >> 0xcU)))) 
                                           | (5U == 
                                              ((0x3f8U 
                                                & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                     >> 0xcU))))) 
                                          | (0x105U 
                                             == ((0x3f8U 
                                                  & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                       >> 0xcU))))) 
                                         | (0U == (
                                                   (0x3f8U 
                                                    & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                         >> 0xcU))))) 
                                        | (0x100U == 
                                           ((0x3f8U 
                                             & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 0x16U)) 
                                            | (7U & 
                                               (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 0xcU))))) 
                                       | (8U == ((0x3f8U 
                                                  & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                       >> 0xcU))))) 
                                      | (0xcU == ((0x3f8U 
                                                   & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                        >> 0xcU))))) 
                                     | (0xdU == ((0x3f8U 
                                                  & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                       >> 0xcU)))))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl 
                                        = ((1U == (
                                                   (0x3f8U 
                                                    & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                         >> 0xcU))))
                                            ? 0x13U
                                            : ((5U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                       >> 0xcU))))
                                                ? 0x14U
                                                : (
                                                   (0x105U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                           >> 0xcU))))
                                                    ? 0x15U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                            >> 0xcU))))
                                                     ? 0x16U
                                                     : 
                                                    ((0x100U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                             >> 0xcU))))
                                                      ? 0x17U
                                                      : 
                                                     ((8U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                              >> 0xcU))))
                                                       ? 0x18U
                                                       : 
                                                      ((0xcU 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                               >> 0xcU))))
                                                        ? 0x19U
                                                        : 0x1aU)))))));
                                } else if ((0xeU == 
                                            ((0x3f8U 
                                              & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                   >> 0xcU))))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 0x1bU;
                                } else if ((0xfU == 
                                            ((0x3f8U 
                                              & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                   >> 0xcU))))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 0x1cU;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                     >> 2U)))) {
                    if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                          >> 0x1fU)))) {
                                if ((0x40000000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0x1dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                    >> 0x1cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                     >> 0x1bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                         >> 0x1aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                             >> 0x19U)))) {
                                                        if (
                                                            (0x4000U 
                                                             & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                                     >> 0xdU)))) {
                                                                if (
                                                                    (0x1000U 
                                                                     & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 3U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                                        >> 0xdU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                                     >> 0xcU)))) {
                                                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 5U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                   >> 0x1dU)))) {
                                    if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0x1cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                    >> 0x1bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                     >> 0x1aU)))) {
                                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl 
                                                    = 
                                                    ((0x2000000U 
                                                      & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                         ? 0x12U
                                                         : 0x11U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                         ? 0x10U
                                                         : 0xfU))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                         ? 0xeU
                                                         : 0xdU)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                         ? 0xcU
                                                         : 0xbU)))
                                                      : 
                                                     ((0x4000U 
                                                       & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                       ? 
                                                      ((0x2000U 
                                                        & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                         ? 8U
                                                         : 7U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                         ? 2U
                                                         : 6U))
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                         ? 0xaU
                                                         : 9U)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                         ? 1U
                                                         : 4U))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 4U;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U == (7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                              >> 0xcU)))) {
                                if ((0U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                            >> 0x1aU))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 0x13U;
                                }
                            } else if ((5U == (7U & 
                                               (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 0xcU)))) {
                                if ((0U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                            >> 0x1aU))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 0x14U;
                                } else if ((0x10U == 
                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                             >> 0x1aU))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 0x15U;
                                }
                            } else if ((0U == (7U & 
                                               (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 0xcU)))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 0x16U;
                            }
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 4U;
                    }
                }
            } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((0x4000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((0x2000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl 
                                = ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                    ? 8U : 7U);
                        } else if ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((0U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x1aU))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 2U;
                            } else if ((0x10U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0x1aU))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 3U;
                            }
                        } else {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 6U;
                        }
                    } else if ((0x2000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl 
                            = ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                ? 0xaU : 9U);
                    } else if ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((0U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                    >> 0x1aU))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 1U;
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 4U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 4U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = 0U;
    if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
         & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap)))) {
        if ((0x40U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((0x20U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 4U)))) {
                    if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = 1U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((0U == (7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0xcU)))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = 1U;
                                }
                            }
                        }
                    } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                             >> 5U)))) {
            if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                          >> 4U)))) {
                if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((0x20U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                               >> 7U))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 0U;
    if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
         & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap)))) {
        if ((0x40U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((0x20U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((0U != (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 7U))) {
                                        if ((0x604000U 
                                             != (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 7U))) {
                                            if ((0x2000U 
                                                 != 
                                                 (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 7U))) {
                                                if (
                                                    (0x4000U 
                                                     & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                    if (
                                                        (0x2000U 
                                                         & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl 
                                                            = 
                                                            ((0x1000U 
                                                              & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                              ? 
                                                             ((0U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                                   >> 0xfU)))
                                                               ? 8U
                                                               : 6U)
                                                              : 
                                                             ((0U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                                   >> 0xfU)))
                                                               ? 8U
                                                               : 6U));
                                                    } else if (
                                                               (0x1000U 
                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 7U;
                                                    }
                                                } else if (
                                                           (0x2000U 
                                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl 
                                                        = 
                                                        ((0x1000U 
                                                          & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                               >> 0xfU)))
                                                           ? 8U
                                                           : 6U)
                                                          : 
                                                         ((0U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                               >> 0xfU)))
                                                           ? 8U
                                                           : 6U));
                                                } else if (
                                                           (0x1000U 
                                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 5U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 4U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((0U == (7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                              >> 0xcU)))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 4U;
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 3U;
                        }
                    }
                } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 1U;
                    }
                }
            }
        } else if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 1U;
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 1U;
                    }
                }
            } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 1U;
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 2U;
                    }
                }
            }
        }
    }
}

extern const VlUnpacked<CData/*2:0*/, 64> Vysyx_041461_TOP__ConstPool__TABLE_c8db6ae7_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_1adeb555_0;
void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

void Vysyx_041461_TOP___024root___settle__TOP__20(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___settle__TOP__20\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx4;
    CData/*5:0*/ __Vtableidx5;
    VlWide<4>/*127:0*/ __Vtemp4895;
    VlWide<4>/*127:0*/ __Vtemp4899;
    VlWide<4>/*127:0*/ __Vtemp4901;
    VlWide<4>/*127:0*/ __Vtemp4905;
    VlWide<4>/*127:0*/ __Vtemp4907;
    VlWide<4>/*127:0*/ __Vtemp4911;
    VlWide<4>/*127:0*/ __Vtemp4913;
    VlWide<4>/*127:0*/ __Vtemp4917;
    VlWide<4>/*127:0*/ __Vtemp4943;
    VlWide<4>/*127:0*/ __Vtemp4947;
    VlWide<4>/*127:0*/ __Vtemp4948;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src = 0U;
    if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
         & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap)))) {
        if ((0x40U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((0x20U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((0U != (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 7U))) {
                                        if ((0x604000U 
                                             != (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 7U))) {
                                            if ((0x2000U 
                                                 != 
                                                 (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 7U))) {
                                                if (
                                                    (0x4000U 
                                                     & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                    if (
                                                        (0x2000U 
                                                         & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src 
                                                            = 
                                                            ((0x1000U 
                                                              & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                              ? 7U
                                                              : 6U);
                                                    }
                                                } else if (
                                                           (0x2000U 
                                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src 
                                                        = 
                                                        ((0x1000U 
                                                          & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)
                                                          ? 5U
                                                          : 4U);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                     >> 2U)))) {
                    if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src = 1U;
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src = 2U;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src = 2U;
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src = 3U;
                    }
                }
            } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src = 2U;
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src = 2U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm = 0ULL;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc = 0ULL;
    if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
         & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap)))) {
        if ((0x40U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((0x20U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 4U)))) {
                    if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immJ__0__INST 
                                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out;
                                    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immJ__0__Vfuncout 
                                        = (((- (QData)((IData)(
                                                               (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immJ__0__INST 
                                                                >> 0x1fU)))) 
                                            << 0x15U) 
                                           | (QData)((IData)(
                                                             ((0x100000U 
                                                               & (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immJ__0__INST 
                                                                  >> 0xbU)) 
                                                              | ((0xff000U 
                                                                  & vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immJ__0__INST) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immJ__0__INST 
                                                                        >> 9U)) 
                                                                    | (0x7feU 
                                                                       & (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immJ__0__INST 
                                                                          >> 0x14U))))))));
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm 
                                        = vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immJ__0__Vfuncout;
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc 
                                        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out 
                                           + vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm);
                                }
                            }
                        }
                    } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__1__INST 
                                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out;
                                vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__1__Vfuncout 
                                    = (((- (QData)((IData)(
                                                           (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__1__INST 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__1__INST 
                                                                    >> 0x14U))));
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm 
                                    = vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__1__Vfuncout;
                                if ((0U == (7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0xcU)))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc 
                                        = (0xfffffffffffffffeULL 
                                           & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data 
                                              + vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm));
                                }
                            }
                        }
                    } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immB__2__INST 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out;
                            vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immB__2__Vfuncout 
                                = (((- (QData)((IData)(
                                                       (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immB__2__INST 
                                                        >> 0x1fU)))) 
                                    << 0xdU) | (QData)((IData)(
                                                               ((0x1000U 
                                                                 & (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immB__2__INST 
                                                                    >> 0x13U)) 
                                                                | ((0x800U 
                                                                    & (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immB__2__INST 
                                                                       << 4U)) 
                                                                   | ((0x7e0U 
                                                                       & (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immB__2__INST 
                                                                          >> 0x14U)) 
                                                                      | (0x1eU 
                                                                         & (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immB__2__INST 
                                                                            >> 7U))))))));
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm 
                                = vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immB__2__Vfuncout;
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc 
                                = (4ULL + vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out);
                            if ((0x4000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((0x2000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                        if ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data 
                                             >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data)) {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc 
                                                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out 
                                                   + vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm);
                                        }
                                    } else if ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data 
                                                < vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data)) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc 
                                            = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out 
                                               + vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm);
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if (VL_GTES_IQQ(1,64,64, vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data, vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data)) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc 
                                            = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out 
                                               + vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm);
                                    }
                                } else if (VL_LTS_IQQ(1,64,64, vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data, vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data)) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc 
                                        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out 
                                           + vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm);
                                }
                            } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0xdU)))) {
                                if ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data 
                                         != vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data)) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc 
                                            = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out 
                                               + vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm);
                                    }
                                } else if ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data 
                                            == vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data)) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc 
                                        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out 
                                           + vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm);
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 3U)))) {
                    if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immU__3__INST 
                                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out;
                                vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immU__3__Vfuncout 
                                    = (((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immU__3__INST 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immU__3__INST))));
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm 
                                    = vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immU__3__Vfuncout;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immS__4__INST 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out;
                            vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immS__4__Vfuncout 
                                = (((- (QData)((IData)(
                                                       (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immS__4__INST 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               ((0xfe0U 
                                                                 & (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immS__4__INST 
                                                                    >> 0x14U)) 
                                                                | (0x1fU 
                                                                   & (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immS__4__INST 
                                                                      >> 7U))))));
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm 
                                = vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immS__4__Vfuncout;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 2U)))) {
                    if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__5__INST 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out;
                            vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__5__Vfuncout 
                                = (((- (QData)((IData)(
                                                       (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__5__INST 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__5__INST 
                                                                >> 0x14U))));
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm 
                                = vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__5__Vfuncout;
                        }
                    }
                }
            } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immU__6__INST 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out;
                        vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immU__6__Vfuncout 
                            = (((QData)((IData)((- (IData)(
                                                           (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immU__6__INST 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immU__6__INST))));
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm 
                            = vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immU__6__Vfuncout;
                    }
                }
            } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__7__INST 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out;
                    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__7__Vfuncout 
                        = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__7__INST 
                                                >> 0x1fU)))) 
                            << 0xcU) | (QData)((IData)(
                                                       (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__7__INST 
                                                        >> 0x14U))));
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm 
                        = vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__7__Vfuncout;
                }
            }
        } else if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((0x20U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                       >> 7U))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc 
                                = (4ULL + vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out);
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                             >> 2U)))) {
            if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__8__INST 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out;
                    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__8__Vfuncout 
                        = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__8__INST 
                                                >> 0x1fU)))) 
                            << 0xcU) | (QData)((IData)(
                                                       (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__8__INST 
                                                        >> 0x14U))));
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm 
                        = vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__8__Vfuncout;
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
        = ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
            ? ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data
                : ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                    ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                        ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data
                        : ((0U == (7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))
                            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data
                            : ((4U == (7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))
                                ? (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                   << 0x20U) : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data)))
                    : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                        ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                          >> 2U))) ? 
                           ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 1U)))
                             ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                 ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data
                                 : (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                    << 0x30U)) : ((1U 
                                                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                                   ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data
                                                   : 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                                   << 0x20U)))
                            : ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                              >> 1U)))
                                ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data
                                    : (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                       << 0x10U)) : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data))
                        : ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                          >> 2U))) ? 
                           ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 1U)))
                             ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                 ? (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                    << 0x38U) : (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                                 << 0x30U))
                             : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                 ? (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                    << 0x28U) : (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                                 << 0x20U)))
                            : ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                              >> 1U)))
                                ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                    ? (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                       << 0x18U) : 
                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                    << 0x10U)) : ((1U 
                                                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                                   ? 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                                   << 8U)
                                                   : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data))))))
            : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data);
    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[0U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[1U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[2U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[3U] = 0xffffffffU;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[0U] = 0xffffffffU;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[1U] = 0xffffffffU;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[2U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[3U] = 0U;
                                                } else {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[0U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[1U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[2U] = 0xffffffffU;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[3U] = 0xffffffffU;
                                                }
                                            }
                                        }
                                    } else {
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[0U] = 0xffffffffU;
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[1U] = 0xffffffffU;
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[2U] = 0U;
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[3U] = 0U;
                                    }
                                } else {
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[0U] = 0U;
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[1U] = 0U;
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[2U] = 0xffffffffU;
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[3U] = 0xffffffffU;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen = 1U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen = 0U;
                                            }
                                        }
                                    } else {
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen = 0U;
                                    }
                                } else {
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[0U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[1U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[2U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[3U] = 0xffffffffU;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[0U] = 0xffffffffU;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[1U] = 0xffffffffU;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[2U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[3U] = 0U;
                                                } else {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[0U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[1U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[2U] = 0xffffffffU;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[3U] = 0xffffffffU;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[0U] = 0xffffffffU;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[1U] = 0xffffffffU;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[2U] = 0U;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[3U] = 0U;
                            }
                        } else {
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[0U] = 0U;
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[1U] = 0U;
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[2U] = 0xffffffffU;
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[3U] = 0xffffffffU;
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen = 1U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                     >> 1U)))) {
                                                vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen = 0U;
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen = 0U;
                            }
                        } else {
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[0U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[1U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[2U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[3U] = 0xffffffffU;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[0U] = 0xffffffffU;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[1U] = 0xffffffffU;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[2U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[3U] = 0U;
                                                } else {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[0U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[1U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[2U] = 0xffffffffU;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[3U] = 0xffffffffU;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[0U] = 0xffffffffU;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[1U] = 0xffffffffU;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[2U] = 0U;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[3U] = 0U;
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[0U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[1U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[2U] = 0xffffffffU;
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[3U] = 0xffffffffU;
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen = 1U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen = 0U;
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen = 0U;
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[0U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[1U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[2U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[3U] = 0xffffffffU;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[0U] = 0xffffffffU;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[1U] = 0xffffffffU;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[2U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[3U] = 0U;
                                                } else {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[0U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[1U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[2U] = 0xffffffffU;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[3U] = 0xffffffffU;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[0U] = 0xffffffffU;
                vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[1U] = 0xffffffffU;
                vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[2U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[3U] = 0U;
            }
        } else {
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[0U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[1U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[2U] = 0xffffffffU;
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[3U] = 0xffffffffU;
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen = 1U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                     >> 1U)))) {
                                                vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen = 0U;
            }
        } else {
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen = 0U;
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[0U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[1U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[2U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[3U] = 0U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                VL_EXTEND_WQ(128,64, __Vtemp4895, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[0U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[1U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[2U] 
                                                        = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[3U] 
                                                        = (IData)(
                                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata 
                                                                   >> 0x20U));
                                                } else {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[0U] 
                                                        = 
                                                        __Vtemp4895[0U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[1U] 
                                                        = 
                                                        __Vtemp4895[1U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[2U] 
                                                        = 
                                                        __Vtemp4895[2U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[3U] 
                                                        = 
                                                        __Vtemp4895[3U];
                                                }
                                            }
                                        }
                                    } else {
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[0U] = 0U;
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[1U] = 0U;
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[2U] 
                                            = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[3U] 
                                            = (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata 
                                                       >> 0x20U));
                                    }
                                } else {
                                    VL_EXTEND_WQ(128,64, __Vtemp4899, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[0U] 
                                        = __Vtemp4899[0U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[1U] 
                                        = __Vtemp4899[1U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[2U] 
                                        = __Vtemp4899[2U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[3U] 
                                        = __Vtemp4899[3U];
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[0U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[1U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[2U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[3U] = 0U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                     >> 1U)))) {
                                                VL_EXTEND_WQ(128,64, __Vtemp4901, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[0U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[1U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[2U] 
                                                        = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[3U] 
                                                        = (IData)(
                                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata 
                                                                   >> 0x20U));
                                                } else {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[0U] 
                                                        = 
                                                        __Vtemp4901[0U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[1U] 
                                                        = 
                                                        __Vtemp4901[1U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[2U] 
                                                        = 
                                                        __Vtemp4901[2U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[3U] 
                                                        = 
                                                        __Vtemp4901[3U];
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[0U] = 0U;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[1U] = 0U;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[2U] 
                                    = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[3U] 
                                    = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata 
                                               >> 0x20U));
                            }
                        } else {
                            VL_EXTEND_WQ(128,64, __Vtemp4905, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[0U] 
                                = __Vtemp4905[0U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[1U] 
                                = __Vtemp4905[1U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[2U] 
                                = __Vtemp4905[2U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[3U] 
                                = __Vtemp4905[3U];
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[0U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[1U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[2U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[3U] = 0U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                VL_EXTEND_WQ(128,64, __Vtemp4907, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[0U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[1U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[2U] 
                                                        = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[3U] 
                                                        = (IData)(
                                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata 
                                                                   >> 0x20U));
                                                } else {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[0U] 
                                                        = 
                                                        __Vtemp4907[0U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[1U] 
                                                        = 
                                                        __Vtemp4907[1U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[2U] 
                                                        = 
                                                        __Vtemp4907[2U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[3U] 
                                                        = 
                                                        __Vtemp4907[3U];
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[0U] = 0U;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[1U] = 0U;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[2U] 
                            = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[3U] 
                            = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata 
                                       >> 0x20U));
                    }
                } else {
                    VL_EXTEND_WQ(128,64, __Vtemp4911, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[0U] 
                        = __Vtemp4911[0U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[1U] 
                        = __Vtemp4911[1U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[2U] 
                        = __Vtemp4911[2U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[3U] 
                        = __Vtemp4911[3U];
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[0U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[1U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[2U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[3U] = 0U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                     >> 1U)))) {
                                                VL_EXTEND_WQ(128,64, __Vtemp4913, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                                if (
                                                    (1U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[0U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[1U] = 0U;
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[2U] 
                                                        = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[3U] 
                                                        = (IData)(
                                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata 
                                                                   >> 0x20U));
                                                } else {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[0U] 
                                                        = 
                                                        __Vtemp4913[0U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[1U] 
                                                        = 
                                                        __Vtemp4913[1U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[2U] 
                                                        = 
                                                        __Vtemp4913[2U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[3U] 
                                                        = 
                                                        __Vtemp4913[3U];
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[0U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[1U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[2U] 
                    = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[3U] 
                    = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata 
                               >> 0x20U));
            }
        } else {
            VL_EXTEND_WQ(128,64, __Vtemp4917, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[0U] 
                = __Vtemp4917[0U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[1U] 
                = __Vtemp4917[1U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[2U] 
                = __Vtemp4917[2U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[3U] 
                = __Vtemp4917[3U];
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 3U)))]) {
                                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                             >> 3U)))]) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                                = 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                            >> 9U)));
                                                        }
                                                    }
                                                }
                                            } else {
                                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                    = 
                                                    (0x7fffffU 
                                                     & (IData)(
                                                               (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                >> 9U)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 3U)))]) {
                                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                             >> 3U)))]) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line)))) {
                                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                                = 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                            >> 9U)));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                              >> 9U)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 3U)))]) {
                                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                             >> 3U)))]) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                                = 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                            >> 9U)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                            = (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 9U)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 3U)))]) {
                                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                             >> 3U)))]) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line)))) {
                                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                                = 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                            >> 9U)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                        = (0x7fffffU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                >> 9U)));
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 3U)))]) {
                                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                             >> 3U)))]) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                                = 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                            >> 9U)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                            = (0x7fffffU & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                    >> 9U)));
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 3U)))]) {
                                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                             >> 3U)))]) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line)))) {
                                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                                = 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                            >> 9U)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                = (0x7fffffU & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 9U)));
                        }
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 3U)))]) {
                                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                             >> 3U)))]) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                                = 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                            >> 9U)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                    = (0x7fffffU & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                            >> 9U)));
                            }
                        }
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 3U)))]) {
                                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                             >> 3U)))]) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line)))) {
                                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                                = 
                                                                (0x7fffffU 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                            >> 9U)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                        = (0x7fffffU 
                                           & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                      >> 9U)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit 
        = ((((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1) 
                 | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)) 
                | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3)) 
               | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4)) 
              | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5)) 
             | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6)) 
            | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7)) 
           | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8));
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (1U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (2U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (8U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (1U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (2U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x77U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (1U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x7dU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x10U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (1U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x7dU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x6fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x7eU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (4U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x20U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x7eU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (4U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x5fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x7eU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x7bU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x40U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x7eU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x7bU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                = (0x3fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                      >> 3U)))]);
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached)
            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata
            : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1)
                ? (((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__Q4[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__Q4[0U])))
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)
                    ? (((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__Q4[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__Q4[2U])))
                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3)
                        ? (((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__Q5[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__Q5[0U])))
                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4)
                            ? (((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__Q5[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_041461_TOP__DOT__Q5[2U])))
                            : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5)
                                ? (((QData)((IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__Q6[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_041461_TOP__DOT__Q6[0U])))
                                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6)
                                    ? (((QData)((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__Q6[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_041461_TOP__DOT__Q6[2U])))
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7)
                                        ? (((QData)((IData)(
                                                            vlSelf->ysyx_041461_TOP__DOT__Q7[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_041461_TOP__DOT__Q7[0U])))
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8)
                                            ? (((QData)((IData)(
                                                                vlSelf->ysyx_041461_TOP__DOT__Q7[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_041461_TOP__DOT__Q7[2U])))
                                            : 0ULL)))))))));
    __Vtableidx5 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out) 
                     << 2U) | (((0x3fU == (0x3fU & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                            >> 0x1aU)))) 
                                << 1U) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize 
        = Vysyx_041461_TOP__ConstPool__TABLE_c8db6ae7_0
        [__Vtableidx5];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr 
        = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached) 
            | (0x3fU == (0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                          >> 0x1aU)))))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)
            : ((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                        >> 3U)) << 3U));
    __Vtableidx4 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out) 
                     << 1U) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize 
        = Vysyx_041461_TOP__ConstPool__TABLE_1adeb555_0
        [__Vtableidx4];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)
            : ((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                        >> 3U)) << 3U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict = 0U;
    if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
          & ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE)) 
             | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE)))) 
         & (0U != (0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                            >> 0xfU))))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict = 1U;
            }
        }
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict = 1U;
            }
        }
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict = 1U;
            }
        }
    }
    if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
          & (1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) 
         & (0U != (0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                            >> 0x14U))))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict = 1U;
            }
        }
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict = 1U;
            }
        }
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict = 1U;
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict = 0U;
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs1_read) 
         & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out)))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict = 1U;
            }
        }
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict = 1U;
            }
        }
    }
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs2_read) 
         & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out)))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict = 1U;
            }
        }
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict = 1U;
            }
        }
    }
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_csr_read) {
        if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
             & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out)) 
                 | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))))) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_csr_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict = 1U;
            }
        }
        if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
             & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)) 
                 | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))))) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict = 1U;
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict = 0U;
    if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
          & (8U == (0xcU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)))) 
         & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out)))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict = 1U;
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ok 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap)
            : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state)) 
               & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap)));
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (((((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out))) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) 
         & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_trap)))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit1) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (1U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (2U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (8U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit2) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (1U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (2U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x77U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit3) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (1U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x7dU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x10U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit4) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (1U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x7dU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x6fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit5) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x7eU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (4U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x20U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit6) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x7eU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (4U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x5fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit7) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x7eU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x7bU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x40U | vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit8) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x7eU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x7bU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                = (0x3fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next
                   [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 3U)))]);
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ok 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap)
            : ((8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
               & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap)));
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                       [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                          >> 3U)))]))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1_next[(0x3fU 
                                                                            & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] = 1U;
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                              >> 3U)))]))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] = 1U;
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                               [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                  >> 3U)))]))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] = 1U;
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                                   [(0x3fU & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                      >> 3U)))]))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] = 1U;
                        }
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                       [(0x3fU & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                          >> 3U)))]))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))]))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                            >> 3U)))]))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if ((1U & (~ 
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                               >> 3U)))]))) {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((4U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                                            = 
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                        >> 9U)));
                                                    }
                                                }
                                            }
                                        } else {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                                = (0x7fffffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                              >> 9U)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((4U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line)))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                                            = 
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                        >> 9U)));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                            = (0x7fffffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                          >> 9U)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((4U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                                            = 
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                        >> 9U)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                        = (0x7fffffU 
                                           & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                      >> 9U)));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line)))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                                            = 
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                        >> 9U)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1_next[(0x3fU 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                    = (0x7fffffU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                            >> 9U)));
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                                            = 
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                        >> 9U)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                        = (0x7fffffU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                >> 9U)));
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line)))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                                            = 
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                        >> 9U)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                            = (0x7fffffU & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                    >> 9U)));
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                                            = 
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                        >> 9U)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                = (0x7fffffU & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 9U)));
                        }
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((4U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line)))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                                            = 
                                                            (0x7fffffU 
                                                             & (IData)(
                                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                        >> 9U)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                    = (0x7fffffU & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                            >> 9U)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen = 1U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                         >> 1U)))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen = 0U;
                }
            } else {
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen = 0U;
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1) {
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen = 0U;
            } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2) {
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen = 0U;
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[0U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[1U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[2U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[3U] = 0xffffffffU;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[0U] = 0xffffffffU;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[1U] = 0xffffffffU;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[2U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[3U] = 0U;
                                                    } else {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[0U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[1U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[2U] = 0xffffffffU;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[3U] = 0xffffffffU;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[0U] = 0xffffffffU;
                    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[1U] = 0xffffffffU;
                    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[2U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[3U] = 0U;
                }
            } else {
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[0U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[1U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[2U] = 0xffffffffU;
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[3U] = 0xffffffffU;
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1) {
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[0U] 
                    = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask);
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[1U] 
                    = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask 
                               >> 0x20U));
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[2U] = 0xffffffffU;
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[3U] = 0xffffffffU;
            } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2) {
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[0U] = 0xffffffffU;
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[1U] = 0xffffffffU;
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[2U] 
                    = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask);
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[3U] 
                    = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask 
                               >> 0x20U));
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen = 1U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen = 0U;
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen = 0U;
                    }
                }
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)))) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3) {
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen = 0U;
                    } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4) {
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen = 0U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[0U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[1U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[2U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[3U] = 0xffffffffU;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[0U] = 0xffffffffU;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[1U] = 0xffffffffU;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[2U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[3U] = 0U;
                                                    } else {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[0U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[1U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[2U] = 0xffffffffU;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[3U] = 0xffffffffU;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[0U] = 0xffffffffU;
                            vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[1U] = 0xffffffffU;
                            vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[2U] = 0U;
                            vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[3U] = 0U;
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[0U] = 0U;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[1U] = 0U;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[2U] = 0xffffffffU;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[3U] = 0xffffffffU;
                    }
                }
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)))) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3) {
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[0U] 
                            = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[1U] 
                            = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask 
                                       >> 0x20U));
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[2U] = 0xffffffffU;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[3U] = 0xffffffffU;
                    } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4) {
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[0U] = 0xffffffffU;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[1U] = 0xffffffffU;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[2U] 
                            = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[3U] 
                            = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask 
                                       >> 0x20U));
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen = 1U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((4U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                         >> 1U)))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen = 0U;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen = 0U;
                                }
                            } else {
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen = 0U;
                            }
                        }
                    }
                }
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4)))) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5) {
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen = 0U;
                            } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6) {
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[0U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[1U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[2U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[3U] = 0xffffffffU;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((4U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[0U] = 0xffffffffU;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[1U] = 0xffffffffU;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[2U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[3U] = 0U;
                                                    } else {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[0U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[1U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[2U] = 0xffffffffU;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[3U] = 0xffffffffU;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[0U] = 0xffffffffU;
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[1U] = 0xffffffffU;
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[2U] = 0U;
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[3U] = 0U;
                                }
                            } else {
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[0U] = 0U;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[1U] = 0U;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[2U] = 0xffffffffU;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[3U] = 0xffffffffU;
                            }
                        }
                    }
                }
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4)))) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5) {
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[0U] 
                                    = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[1U] 
                                    = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask 
                                               >> 0x20U));
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[2U] = 0xffffffffU;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[3U] = 0xffffffffU;
                            } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6) {
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[0U] = 0xffffffffU;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[1U] = 0xffffffffU;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[2U] 
                                    = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[3U] 
                                    = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask 
                                               >> 0x20U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen = 1U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((4U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen = 0U;
                                                }
                                            }
                                        } else {
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen = 0U;
                                        }
                                    } else {
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4)))) {
                            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5)))) {
                                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6)))) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7) {
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen = 0U;
                                    } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8) {
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[0U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[1U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[2U] = 0xffffffffU;
    vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[3U] = 0xffffffffU;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((4U 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[0U] = 0xffffffffU;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[1U] = 0xffffffffU;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[2U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[3U] = 0U;
                                                    } else {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[0U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[1U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[2U] = 0xffffffffU;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[3U] = 0xffffffffU;
                                                    }
                                                }
                                            }
                                        } else {
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[0U] = 0xffffffffU;
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[1U] = 0xffffffffU;
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[2U] = 0U;
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[3U] = 0U;
                                        }
                                    } else {
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[0U] = 0U;
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[1U] = 0U;
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[2U] = 0xffffffffU;
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[3U] = 0xffffffffU;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4)))) {
                            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5)))) {
                                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6)))) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7) {
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[0U] 
                                            = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[1U] 
                                            = (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask 
                                                       >> 0x20U));
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[2U] = 0xffffffffU;
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[3U] = 0xffffffffU;
                                    } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8) {
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[0U] = 0xffffffffU;
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[1U] = 0xffffffffU;
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[2U] 
                                            = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[3U] 
                                            = (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask 
                                                       >> 0x20U));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load)
            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata
            : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store)
                ? ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                    ? ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                        ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data
                        : ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                            ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data
                                : ((0U == (7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data
                                    : ((4U == (7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))
                                        ? (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                           << 0x20U)
                                        : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data)))
                            : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                  >> 2U)))
                                    ? ((1U & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                      >> 1U)))
                                        ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data
                                            : (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                               << 0x30U))
                                        : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data
                                            : (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                               << 0x20U)))
                                    : ((1U & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                      >> 1U)))
                                        ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data
                                            : (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                               << 0x10U))
                                        : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data))
                                : ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                  >> 2U)))
                                    ? ((1U & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                      >> 1U)))
                                        ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                            ? (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                               << 0x38U)
                                            : (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                               << 0x30U))
                                        : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                            ? (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                               << 0x28U)
                                            : (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                               << 0x20U)))
                                    : ((1U & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                      >> 1U)))
                                        ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                            ? (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                               << 0x18U)
                                            : (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                               << 0x10U))
                                        : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                            ? (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
                                               << 8U)
                                            : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data))))))
                    : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data)
                : 0ULL));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out 
        = ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
             & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out))) 
            & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align)))
            ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load)
                ? 6U : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store)
                         ? 7U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out)))
            : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out));
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rdata = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rdata = 0ULL;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rdata 
            = ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rdata
                : 0ULL);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rdata 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rdata
                : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                    ? ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                        ? (((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                            & (0x200bfffU >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))
                            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime
                            : (((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                & (0x2004007U >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))
                                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp
                                : 0ULL)) : 0ULL) : 0ULL));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rvalid 
        = ((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
           & ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
               ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rvalid)
               : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rvalid))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rvalid 
        = ((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
           & ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rvalid)));
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rid = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rid = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rresp = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rresp = 0U;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rid 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rid)
                : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                    ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rid)
                    : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rid 
            = ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rid)
                : 0U);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rresp 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rresp)
                : 0U);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rresp 
            = ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rresp)
                : 0U);
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rlast 
        = ((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
           & ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
               ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rlast)
               : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rlast))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rlast 
        = ((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
           & ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rlast)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[1U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [1U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[2U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [2U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[3U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [3U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[4U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [4U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[5U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [5U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[6U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [6U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[7U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [7U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[8U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [8U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[9U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [9U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0xaU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0xaU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0xbU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0xbU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0xcU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0xcU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0xdU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0xdU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0xeU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0xeU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0xfU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0xfU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x10U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x10U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x11U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x11U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x12U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x12U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x13U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x13U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x14U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x14U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x15U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x15U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x16U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x16U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x17U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x17U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x18U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x18U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x19U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x19U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x1aU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x1aU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x1bU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x1bU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x1cU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x1cU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x1dU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x1dU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x1eU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x1eU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0x1fU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [0x1fU];
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out)))) {
        if ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__t;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                = ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))
                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__t
                    : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))
                        ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__t
                        : (4ULL + vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out)));
        } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                = ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))
                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_imm_out
                    : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_MEM_out);
        } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out;
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0U] = 0ULL;
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
            = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))
                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out))
                           ? ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out))
                               ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_csr_data
                               : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out))
                                   ? (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data)
                                   : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data))
                           : ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out))
                               ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out))
                                   ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_pc_out
                                   : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data)
                               : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out))
                                   ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data
                                   : 0ULL))));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
            = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))
                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out))
                           ? ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out))
                               ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out))
                                   ? (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_zimm_out)
                                   : vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_zimm_out)
                               : vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_csr_data)
                           : ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out))
                               ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_imm_out
                               : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out))
                                   ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
                                  [vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out]
                                   : 0ULL))));
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 = 0ULL;
    }
    if (((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate)) 
         & ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
            & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid)))) {
        Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_write_TOP((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr)), vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata, (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
        = (1ULL + vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime);
    if (((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state)) 
         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_wvalid))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit) {
            if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize))) {
                    if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata;
                    } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)) {
                        if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
                                = ((0xffffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                                   | ((QData)((IData)((IData)(
                                                              (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                               >> 0x20U)))) 
                                      << 0x20U));
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
                            = ((0xffffffff00000000ULL 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                               | (IData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata)));
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
                        = ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize))
                            ? ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                ? ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                    ? ((0xffffffffffffULL 
                                        & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                                       | ((QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                      >> 0x30U))))) 
                                          << 0x30U))
                                    : ((0xffff0000ffffffffULL 
                                        & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                                       | ((QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                      >> 0x20U))))) 
                                          << 0x20U)))
                                : ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                    ? ((0xffffffff0000ffffULL 
                                        & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                                       | ((QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                      >> 0x10U))))) 
                                          << 0x10U))
                                    : ((0xffffffffffff0000ULL 
                                        & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                                       | (IData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata)))))))
                            : ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                ? ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                    ? ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                        ? ((0xffffffffffffffULL 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                          >> 0x38U))))) 
                                              << 0x38U))
                                        : ((0xff00ffffffffffffULL 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                          >> 0x30U))))) 
                                              << 0x30U)))
                                    : ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                        ? ((0xffff00ffffffffffULL 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                          >> 0x28U))))) 
                                              << 0x28U))
                                        : ((0xffffff00ffffffffULL 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                          >> 0x20U))))) 
                                              << 0x20U))))
                                : ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                    ? ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                        ? ((0xffffffff00ffffffULL 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                          >> 0x18U))))) 
                                              << 0x18U))
                                        : ((0xffffffffff00ffffULL 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                          >> 0x10U))))) 
                                              << 0x10U)))
                                    : ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                        ? ((0xffffffffffff00ffULL 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                          >> 8U))))) 
                                              << 8U))
                                        : ((0xffffffffffffff00ULL 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                                           | (IData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata)))))))));
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp;
    if (((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state)) 
         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_wvalid))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit)))) {
            if (((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr) 
                 & (0x2004007U >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize))) {
                        if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata;
                        } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)) {
                            if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
                                    = ((0xffffffffULL 
                                        & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                                       | ((QData)((IData)((IData)(
                                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                   >> 0x20U)))) 
                                          << 0x20U));
                            }
                        } else {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
                                = ((0xffffffff00000000ULL 
                                    & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                                   | (IData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata)));
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
                            = ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize))
                                ? ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                    ? ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                        ? ((0xffffffffffffULL 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                                           | ((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                          >> 0x30U))))) 
                                              << 0x30U))
                                        : ((0xffff0000ffffffffULL 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                                           | ((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                          >> 0x20U))))) 
                                              << 0x20U)))
                                    : ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                        ? ((0xffffffff0000ffffULL 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                                           | ((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                          >> 0x10U))))) 
                                              << 0x10U))
                                        : ((0xffffffffffff0000ULL 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                                           | (IData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata)))))))
                                : ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                    ? ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                        ? ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                            ? ((0xffffffffffffffULL 
                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                              >> 0x38U))))) 
                                                  << 0x38U))
                                            : ((0xff00ffffffffffffULL 
                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                              >> 0x30U))))) 
                                                  << 0x30U)))
                                        : ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                            ? ((0xffff00ffffffffffULL 
                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                              >> 0x28U))))) 
                                                  << 0x28U))
                                            : ((0xffffff00ffffffffULL 
                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                              >> 0x20U))))) 
                                                  << 0x20U))))
                                    : ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                        ? ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                            ? ((0xffffffff00ffffffULL 
                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                              >> 0x18U))))) 
                                                  << 0x18U))
                                            : ((0xffffffffff00ffffULL 
                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                              >> 0x10U))))) 
                                                  << 0x10U)))
                                        : ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)
                                            ? ((0xffffffffffff00ffULL 
                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                                               | ((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                                              >> 8U))))) 
                                                  << 8U))
                                            : ((0xffffffffffffff00ULL 
                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                                               | (IData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata)))))))));
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata 
        = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                          >> 2U))) ? ((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                     >> 1U)))
                                       ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                           ? (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata 
                                              >> 0x38U)
                                           : (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata 
                                              >> 0x30U))
                                       : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                           ? (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata 
                                              >> 0x28U)
                                           : (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata 
                                              >> 0x20U)))
            : ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                           ? (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata 
                                              >> 0x18U)
                                           : (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata 
                                              >> 0x10U))
                : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                    ? (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata 
                       >> 8U) : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize_next 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize)
            : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize));
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awsize_next 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize)
            : (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awsize));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wclint 
        = (((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr) 
            & (0x200bfffU >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr)) 
           | ((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr) 
              & (0x2004007U >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr_next 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr
            : vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr_next 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr
            : vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint 
        = (((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr) 
            & (0x200bfffU >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr)) 
           | ((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr) 
              & (0x2004007U >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 0U;
    if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
         & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap)))) {
        if ((0x40U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((0x20U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                    } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                    } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((0U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 7U))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 2U;
                            } else if ((0x604000U == 
                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                         >> 7U))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 3U;
                            } else if ((0x2000U == 
                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                         >> 7U))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 4U;
                            } else if ((0x4000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((0x2000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                        if ((1U & (
                                                   ((3U 
                                                     == 
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                      >> 0x1eU)) 
                                                    & (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                           >> 0xfU)))) 
                                                   | (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID__DOT__valid_csr))))) {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                                        }
                                    } else if ((1U 
                                                & (((3U 
                                                     == 
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                      >> 0x1eU)) 
                                                    & (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                           >> 0xfU)))) 
                                                   | (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID__DOT__valid_csr))))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((1U & ((3U 
                                                == 
                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0x1eU)) 
                                               | (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID__DOT__valid_csr))))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                                    }
                                } else {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                                }
                            } else if ((0x2000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((1U & (((3U 
                                                 == 
                                                 (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0x1eU)) 
                                                & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                       >> 0xfU)))) 
                                               | (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID__DOT__valid_csr))))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                                    }
                                } else if ((1U & ((
                                                   (3U 
                                                    == 
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                     >> 0x1eU)) 
                                                   & (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                          >> 0xfU)))) 
                                                  | (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID__DOT__valid_csr))))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                                }
                            } else if ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((1U & ((3U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                   >> 0x1eU)) 
                                           | (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID__DOT__valid_csr))))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                                }
                            } else {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                            }
                        } else {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                    }
                } else if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                            }
                        } else {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                    }
                } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((0U != (7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                              >> 0xcU)))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                            }
                        } else {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                    }
                } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                      >> 0xeU)))) {
                            if ((0x2000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                            }
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                }
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
            }
        } else if ((0x20U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                    } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & (~ ((((((((1U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                        >> 0xcU)))) 
                                                | (5U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                          >> 0xcU))))) 
                                               | (0x105U 
                                                  == 
                                                  ((0x3f8U 
                                                    & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                       >> 0x16U)) 
                                                   | (7U 
                                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                         >> 0xcU))))) 
                                              | (0U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                        >> 0xcU))))) 
                                             | (0x100U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                       >> 0xcU))))) 
                                            | (8U == 
                                               ((0x3f8U 
                                                 & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                      >> 0xcU))))) 
                                           | (0xcU 
                                              == ((0x3f8U 
                                                   & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                        >> 0xcU))))) 
                                          | (0xdU == 
                                             ((0x3f8U 
                                               & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                    >> 0xcU)))))))) {
                                if ((0xeU != ((0x3f8U 
                                               & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                    >> 0xcU))))) {
                                    if ((0xfU != ((0x3f8U 
                                                   & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                        >> 0xcU))))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                                    }
                                }
                            }
                        } else {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                    }
                } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                    }
                } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                             >> 0x1fU)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                        } else if ((0x40000000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((0x20000000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                            } else if ((0x10000000U 
                                        & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                            } else if ((0x8000000U 
                                        & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                            } else if ((0x4000000U 
                                        & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                            } else if ((0x2000000U 
                                        & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                            } else if ((0x4000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((0x2000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                                } else if ((1U & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                   >> 0xcU)))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                                }
                            } else if ((0x2000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                            } else if ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                            }
                        } else if ((0x20000000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                        } else if ((0x10000000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                        } else if ((0x8000000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                        } else if ((0x4000000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                }
            } else if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
            } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
            } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((0x4000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                }
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
            }
        } else if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U == (7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                          >> 0xcU)))) {
                            if ((0U != (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x1aU))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                            }
                        } else if ((5U == (7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0xcU)))) {
                            if ((0U != (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x1aU))) {
                                if ((0x10U != (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                               >> 0x1aU))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                                }
                            }
                        } else if ((0U != (7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0xcU)))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                }
            } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                }
            } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((0x4000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                      >> 0xdU)))) {
                            if ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((0U != (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                            >> 0x1aU))) {
                                    if ((0x10U != (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                   >> 0x1aU))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                         >> 0xdU)))) {
                        if ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((0U != (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x1aU))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                            }
                        }
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                }
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
            }
        } else if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((0x20U != (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                       >> 7U))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                        }
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                }
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
            }
        } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
        } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((0x4000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((0x2000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                        }
                    }
                }
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
            }
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
        }
    }
    if ((1U & (~ ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                    & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                   & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap))) 
                  & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict)))))) {
        if ((1U & (~ ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                        & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                       & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap))) 
                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict))))) {
            if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                  & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                 & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap)))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out;
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_valid_in 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state)) 
           & (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                 & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap))) 
               & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict))) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__division)));
    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] = 0U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 3U)))]) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                        [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 3U)))]) {
                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 3U)))]) {
                            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 3U)))]) {
                                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                    [(0x3fU & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 3U)))]) {
                                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                        [(0x3fU & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 3U)))]) {
                                        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line) 
                                                         >> 1U)))) {
                                                    VL_EXTEND_WQ(128,64, __Vtemp4943, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                                                            = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                                                            = (IData)(
                                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
                                                                       >> 0x20U));
                                                    } else {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] 
                                                            = 
                                                            __Vtemp4943[0U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                                                            = 
                                                            __Vtemp4943[1U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                                                            = 
                                                            __Vtemp4943[2U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                                                            = 
                                                            __Vtemp4943[3U];
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                        = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                        = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
                                   >> 0x20U));
                }
            } else {
                VL_EXTEND_WQ(128,64, __Vtemp4947, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] 
                    = __Vtemp4947[0U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                    = __Vtemp4947[1U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                    = __Vtemp4947[2U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                    = __Vtemp4947[3U];
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1) {
                VL_EXTEND_WQ(128,64, __Vtemp4948, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] 
                    = __Vtemp4948[0U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                    = __Vtemp4948[1U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                    = __Vtemp4948[2U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                    = __Vtemp4948[3U];
            } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2) {
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                    = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                    = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
                               >> 0x20U));
            }
        }
    }
}
