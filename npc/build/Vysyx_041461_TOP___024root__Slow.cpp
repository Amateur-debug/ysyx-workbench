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

void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__get_WB_valid_TOP(CData/*7:0*/ a);
void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__ebreak_TOP();
void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_d1140eb3_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_8cb9ad1b_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_be24ae63_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_a802bbfe_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_1adeb555_0;
void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

void Vysyx_041461_TOP___024root___settle__TOP__8(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___settle__TOP__8\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    SData/*8:0*/ __Vtableidx3;
    VlWide<4>/*127:0*/ __Vtemp104;
    VlWide<4>/*127:0*/ __Vtemp106;
    VlWide<4>/*127:0*/ __Vtemp108;
    VlWide<4>/*127:0*/ __Vtemp109;
    VlWide<4>/*127:0*/ __Vtemp111;
    VlWide<4>/*127:0*/ __Vtemp121;
    VlWide<4>/*127:0*/ __Vtemp122;
    VlWide<4>/*127:0*/ __Vtemp124;
    VlWide<4>/*127:0*/ __Vtemp126;
    VlWide<4>/*127:0*/ __Vtemp127;
    VlWide<4>/*127:0*/ __Vtemp130;
    VlWide<4>/*127:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp134;
    VlWide<4>/*127:0*/ __Vtemp135;
    VlWide<4>/*127:0*/ __Vtemp137;
    VlWide<4>/*127:0*/ __Vtemp138;
    VlWide<4>/*127:0*/ __Vtemp139;
    VlWide<4>/*127:0*/ __Vtemp140;
    VlWide<4>/*127:0*/ __Vtemp141;
    VlWide<4>/*127:0*/ __Vtemp142;
    VlWide<4>/*127:0*/ __Vtemp143;
    VlWide<4>/*127:0*/ __Vtemp144;
    VlWide<4>/*127:0*/ __Vtemp145;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bresp = 0U;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rresp = 0U;
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bresp = 0U;
    Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__get_WB_valid_TOP(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wlast 
        = (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state));
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) {
        if ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl 
                = ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))
                    ? 0U : ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))
                             ? 0U : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))
                                      ? 0U : 1U)));
        } else if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
            if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl = 1U;
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl = 1U;
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl = 1U;
                Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__ebreak_TOP();
            }
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl 
                = ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))
                    ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))
                        ? 2U : 1U) : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))
                                       ? 1U : 0U));
        }
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl = 0U;
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid_next 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
            ? ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? 1U : 0U) : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid));
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid_next 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid)
            : ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                    ? 0U : 1U) : 0U));
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) {
            if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                       [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                          >> 3U)))]))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[(0x3fU 
                                                                             & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                    = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                       >> 9U);
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
                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                               [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                  >> 3U)))]))) {
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
                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                               [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                  >> 3U)))]))) {
                        vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen = 0U;
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen = 0U;
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
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))]) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
                [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
                           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                              >> 3U)))]))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                           >> 9U);
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
                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                               [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                  >> 3U)))]))) {
                        vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[0U] = 0U;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[1U] = 0U;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[2U] 
                            = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[3U] 
                            = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata 
                                       >> 0x20U));
                    }
                } else {
                    VL_EXTEND_WQ(128,64, __Vtemp104, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[0U] 
                        = __Vtemp104[0U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[1U] 
                        = __Vtemp104[1U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[2U] 
                        = __Vtemp104[2U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[3U] 
                        = __Vtemp104[3U];
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
                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                               [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                  >> 3U)))]))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                            = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 9U);
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
                            if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                       [(0x3fU & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 3U)))]))) {
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
                            if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                       [(0x3fU & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 3U)))]))) {
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
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
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
                        if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
                                   [(0x3fU & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                      >> 3U)))]))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 9U);
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
                            if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                       [(0x3fU & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 3U)))]))) {
                                vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[0U] = 0U;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[1U] = 0U;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[2U] 
                                    = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[3U] 
                                    = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata 
                                               >> 0x20U));
                            }
                        } else {
                            VL_EXTEND_WQ(128,64, __Vtemp106, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[0U] 
                                = __Vtemp106[0U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[1U] 
                                = __Vtemp106[1U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[2U] 
                                = __Vtemp106[2U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[3U] 
                                = __Vtemp106[3U];
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
                            if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                       [(0x3fU & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 3U)))]))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                    = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                       >> 9U);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid;
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) {
        if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
            if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                    if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                        if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                if ((0x342U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                    if ((0x300U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                        if ((0x304U 
                                             != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                            if ((0x344U 
                                                 != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                                if (
                                                    (0xf14U 
                                                     == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid_next 
                                                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            if ((0x342U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                if ((0x300U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                    if ((0x304U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                        if ((0x344U 
                                             != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                            if ((0xf14U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid_next 
                                                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                    if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            if ((0x342U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                if ((0x300U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                    if ((0x304U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                        if ((0x344U 
                                             != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                            if ((0xf14U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid_next 
                                                    = 
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
                                                    [vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out];
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie;
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) {
        if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
            if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                    if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                        if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                if ((0x342U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                    if ((0x300U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                        if ((0x304U 
                                             == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next 
                                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            if ((0x342U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                if ((0x300U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                    if ((0x304U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next 
                                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                    if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            if ((0x342U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                if ((0x300U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                    if ((0x304U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next 
                                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
                                            [vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out];
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next 
        = (0xffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next 
        = (0xffffffffffffff80ULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause;
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) {
        if ((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
            if ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out)))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next = 0x8000000000000007ULL;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next 
                    = ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))
                        ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))
                            ? 6ULL : 4ULL) : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))
                                               ? 2ULL
                                               : 3ULL));
            } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out)))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next = 0xbULL;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next = 0ULL;
            }
        } else if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
            if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                    if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            if ((0x342U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next 
                                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out;
                            }
                        }
                    }
                } else if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                    if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        if ((0x342U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out;
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                    if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        if ((0x342U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
                                [vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out];
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus;
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) {
        if ((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
            if ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out)))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                                = (0xfffffffffffffff7ULL 
                                   & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                                = ((0xffffffffffffff7fULL 
                                    & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next) 
                                   | ((QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                                  >> 3U))))) 
                                      << 7U));
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                    if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                            = (0xfffffffffffffff7ULL 
                               & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                            = ((0xffffffffffffff7fULL 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next) 
                               | ((QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                              >> 3U))))) 
                                  << 7U));
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                            = (0xfffffffffffffff7ULL 
                               & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                            = ((0xffffffffffffff7fULL 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next) 
                               | ((QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                              >> 3U))))) 
                                  << 7U));
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                        = (0xfffffffffffffff7ULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                        = ((0xffffffffffffff7fULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next) 
                           | ((QData)((IData)((1U & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                             >> 3U))))) 
                              << 7U));
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                        = (0xfffffffffffffff7ULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                        = ((0xffffffffffffff7fULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next) 
                           | ((QData)((IData)((1U & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                             >> 3U))))) 
                              << 7U));
                }
            } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                        = ((0xfffffffffffffff7ULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next) 
                           | ((QData)((IData)((1U & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                             >> 7U))))) 
                              << 3U));
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                        = (0x80ULL | vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                        = (0xfffffffffffffff7ULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                        = ((0xffffffffffffff7fULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next) 
                           | ((QData)((IData)((1U & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                             >> 3U))))) 
                              << 7U));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                    = (0xfffffffffffffff7ULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                    = ((0xffffffffffffff7fULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next) 
                       | ((QData)((IData)((1U & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                         >> 3U))))) 
                          << 7U));
            }
        } else if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
            if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                    if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            if ((0x342U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                if ((0x300U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out;
                                }
                            }
                        }
                    }
                } else if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                    if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        if ((0x342U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            if ((0x300U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out;
                            }
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                    if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        if ((0x342U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            if ((0x300U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
                                    [vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out];
                            }
                        }
                    }
                }
            }
        }
    }
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
                                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                            >> 3U)))]))) {
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
                                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                            >> 3U)))]))) {
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
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen = 0U;
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
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
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
                                if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))]))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                           >> 9U);
                                }
                            }
                        }
                    }
                }
            }
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
                                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                            >> 3U)))]))) {
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
                                    VL_EXTEND_WQ(128,64, __Vtemp108, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[0U] 
                                        = __Vtemp108[0U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[1U] 
                                        = __Vtemp108[1U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[2U] 
                                        = __Vtemp108[2U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[3U] 
                                        = __Vtemp108[3U];
                                }
                            }
                        }
                    }
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
                                        VL_EXTEND_WQ(128,64, __Vtemp109, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[0U] 
                                            = __Vtemp109[0U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[1U] 
                                            = __Vtemp109[1U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[2U] 
                                            = __Vtemp109[2U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[3U] 
                                            = __Vtemp109[3U];
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
            VL_EXTEND_WQ(128,64, __Vtemp111, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[0U] 
                = __Vtemp111[0U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[1U] 
                = __Vtemp111[1U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[2U] 
                = __Vtemp111[2U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[3U] 
                = __Vtemp111[3U];
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
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
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                            = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 9U);
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
                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                   >> 9U);
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
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
                                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                            >> 3U)))]))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                            = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 9U);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip;
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) {
        if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
            if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                    if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                        if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                if ((0x342U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                    if ((0x300U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                        if ((0x304U 
                                             != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                            if ((0x344U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip_next 
                                                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            if ((0x342U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                if ((0x300U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                    if ((0x304U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                        if ((0x344U 
                                             == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip_next 
                                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                    if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        if ((0x341U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            if ((0x342U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                if ((0x300U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                    if ((0x304U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                        if ((0x344U 
                                             == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip_next 
                                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
                                                [vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out];
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip_next 
        = ((QData)((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime 
                            >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp))) 
           << 7U);
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rid 
        = ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid)
            : 0U);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bid 
        = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awid)
            : 0U);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit1 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit2 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit3 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit4 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit5 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit6 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit7 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit8 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached 
        = (1U & (~ ((0x80000000U <= (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)) 
                    & (0x88000000U > (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit 
        = ((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr) 
           & (0x200bfffU >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtimecmp_hit 
        = ((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr) 
           & (0x2004007U >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid 
        = (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [(0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                   >> 0xfU))];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [(0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                   >> 0x14U))];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask 
        = ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
            ? ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                ? 0xffffffffffffffffULL : ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                                ? 0ULL
                                                : (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))
                                                    ? 0xffffffff00000000ULL
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))
                                                     ? 0xffffffffULL
                                                     : 0xffffffffffffffffULL)))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                                      ? 0xffffffffffffffffULL
                                                      : 0xffffffffffffULL)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                                      ? 0xffffffffffffffffULL
                                                      : 0xffff0000ffffffffULL))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                                      ? 0xffffffffffffffffULL
                                                      : 0xffffffff0000ffffULL)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                                      ? 0xffffffffffffffffULL
                                                      : 0xffffffffffff0000ULL)))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                               >> 2U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                                      ? 0xffffffffffffffULL
                                                      : 0xff00ffffffffffffULL)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                                      ? 0xffff00ffffffffffULL
                                                      : 0xffffff00ffffffffULL))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                                      ? 0xffffffff00ffffffULL
                                                      : 0xffffffffff00ffffULL)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                                      ? 0xffffffffffff00ffULL
                                                      : 0xffffffffffffff00ULL))))))
            : 0xffffffffffffffffULL);
    if (vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate) {
        Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_read_TOP((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr)), vlSelf->__Vtask_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_read__15__rdata);
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rvalid = 1U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rid 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rresp = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rdata 
            = vlSelf->__Vtask_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_read__15__rdata;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rlast = 1U;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rvalid = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rid = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rresp = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rdata = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rlast = 0U;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached 
        = (1U & (~ ((0x80000000U <= (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)) 
                    & (0x88000000U > (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2 
        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                              >> 3U)))] & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
           & (((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out)) 
                   | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                  | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                 | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
               | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
              | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
           & (((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out)) 
                   | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                  | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                 | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
               | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
              | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))));
    __Vtableidx3 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out) 
                     << 6U) | (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out) 
                                << 1U) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs1_read 
        = Vysyx_041461_TOP__ConstPool__TABLE_d1140eb3_0
        [__Vtableidx3];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs2_read 
        = Vysyx_041461_TOP__ConstPool__TABLE_8cb9ad1b_0
        [__Vtableidx3];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_csr_read 
        = Vysyx_041461_TOP__ConstPool__TABLE_be24ae63_0
        [__Vtableidx3];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
           & (((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)) 
                   | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                  | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                 | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
               | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
              | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out)
            : 0U);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out)
            : 0U);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align 
        = (1U & ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                  ? (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out) 
                      >> 2U) | ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                 ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                     ? (0U == (7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))
                                     : ((0U == (7U 
                                                & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))) 
                                        | (4U == (7U 
                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))))
                                 : ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)) 
                                    | ((1U & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                      >> 2U)))
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                          >> 1U)))
                                            ? (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                            : (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))
                                        : ((1U & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                          >> 1U)))
                                            ? (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                            : (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))))))
                  : ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                      ? ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                          ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                              ? (0U == (7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))
                              : ((0U == (7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))) 
                                 | (4U == (7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))))
                          : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                              ? ((0U == (7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))) 
                                 | (4U == (7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))))
                              : ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                >> 2U)))
                                  ? ((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                    >> 1U)))
                                      ? (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                      : (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))
                                  : ((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                    >> 1U)))
                                      ? (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                      : (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))))))
                      : ((~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out) 
                             >> 1U)) | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out) 
                                        | ((1U & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                          >> 2U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 1U)))
                                                ? (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                                : (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 1U)))
                                                ? (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))
                                                : (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))))))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store 
        = ((((8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)) 
             | (9U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) 
            | (0xaU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) 
           | (0xbU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load 
        = (((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)) 
                | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) 
               | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) 
              | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) 
             | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) 
            | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) 
           | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec;
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) {
        if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
            if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                    if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                        if ((0x305U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec_next 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out;
                        }
                    } else if ((0x305U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec_next 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out;
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                    if ((0x305U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec_next 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
                            [vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out];
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc;
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) {
        if ((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
            if ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out)))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out;
            } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out)))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out;
            }
        } else if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
            if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                    if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        if ((0x341U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out;
                        }
                    }
                } else if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                    if ((0x341U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out;
                    }
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                if ((0x305U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                    if ((0x341U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
                            [vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out];
                    }
                }
            }
        }
    }
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
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) {
        if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))) {
            if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                    if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                        if ((0x305U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec;
                        } else if ((0x341U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc;
                        } else if ((0x342U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause;
                        } else if ((0x300U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus;
                        } else if ((0x304U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie;
                        } else if ((0x344U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip;
                        } else if ((0xf14U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid;
                        }
                    } else if ((0x305U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec;
                    } else if ((0x341U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc;
                    } else if ((0x342U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause;
                    } else if ((0x300U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus;
                    } else if ((0x304U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie;
                    } else if ((0x344U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip;
                    } else if ((0xf14U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid;
                    }
                } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) {
                    if ((0x305U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec;
                    } else if ((0x341U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc;
                    } else if ((0x342U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause;
                    } else if ((0x300U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus;
                    } else if ((0x304U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie;
                    } else if ((0x344U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip;
                    } else if ((0xf14U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid;
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out] 
                        = (4ULL + vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out);
                }
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
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0U] = 0ULL;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_csr_data 
        = ((0x305U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec
            : ((0x341U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc
                : ((0x342U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause
                    : ((0x300U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                        ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus
                        : ((0x304U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie
                            : ((0x344U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip
                                : ((0xf14U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out))
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid
                                    : 0ULL)))))));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_inst 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit1)
            ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                              >> 2U))) ? vlSelf->ysyx_041461_TOP__DOT__Q0[1U]
                : vlSelf->ysyx_041461_TOP__DOT__Q0[0U])
            : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit2)
                ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                  >> 2U))) ? vlSelf->ysyx_041461_TOP__DOT__Q0[3U]
                    : vlSelf->ysyx_041461_TOP__DOT__Q0[2U])
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit3)
                    ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                      >> 2U))) ? vlSelf->ysyx_041461_TOP__DOT__Q1[1U]
                        : vlSelf->ysyx_041461_TOP__DOT__Q1[0U])
                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit4)
                        ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                          >> 2U))) ? 
                           vlSelf->ysyx_041461_TOP__DOT__Q1[3U]
                            : vlSelf->ysyx_041461_TOP__DOT__Q1[2U])
                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit5)
                            ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                              >> 2U)))
                                ? vlSelf->ysyx_041461_TOP__DOT__Q2[1U]
                                : vlSelf->ysyx_041461_TOP__DOT__Q2[0U])
                            : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit6)
                                ? ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                  >> 2U)))
                                    ? vlSelf->ysyx_041461_TOP__DOT__Q2[3U]
                                    : vlSelf->ysyx_041461_TOP__DOT__Q2[2U])
                                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit7)
                                    ? ((1U & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                      >> 2U)))
                                        ? vlSelf->ysyx_041461_TOP__DOT__Q3[1U]
                                        : vlSelf->ysyx_041461_TOP__DOT__Q3[0U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit8)
                                        ? ((1U & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 2U)))
                                            ? vlSelf->ysyx_041461_TOP__DOT__Q3[3U]
                                            : vlSelf->ysyx_041461_TOP__DOT__Q3[2U])
                                        : ((1U & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 2U)))
                                            ? (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata 
                                                       >> 0x20U))
                                            : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata))))))))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rvalid 
        = ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
           & (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rvalid));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rvalid 
        = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rvalid)
            : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
               & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rvalid)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rid 
        = ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rid)
            : 0U);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rid 
        = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rid)
            : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rid)
                : 0U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rresp 
        = ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rresp)
            : 0U);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rresp 
        = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rresp)
            : 0U);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rlast 
        = ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
           & (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rlast));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rlast 
        = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rlast)
            : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
               & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rlast)));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)
            : ((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                        >> 3U)) << 3U));
    __Vtableidx2 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out) 
                     << 1U) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize 
        = Vysyx_041461_TOP__ConstPool__TABLE_a802bbfe_0
        [__Vtableidx2];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)
            : ((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                        >> 3U)) << 3U));
    __Vtableidx1 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out) 
                     << 1U) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize 
        = Vysyx_041461_TOP__ConstPool__TABLE_1adeb555_0
        [__Vtableidx1];
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit 
        = ((((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1) 
                 | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)) 
                | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3)) 
               | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4)) 
              | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5)) 
             | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6)) 
            | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7)) 
           | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict = 0U;
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs1_read) {
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
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs2_read) {
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
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
         & (IData)((8U == (0xcU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)))))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict = 1U;
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
                if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2
                           [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                              >> 3U)))]))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                           >> 9U);
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
                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3
                               [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                  >> 3U)))]))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                            = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 9U);
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
                        if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                                   [(0x3fU & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                      >> 3U)))]))) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                   >> 9U);
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
                            if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5
                                       [(0x3fU & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                          >> 3U)))]))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                    = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 9U);
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
                                if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))]))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                           >> 9U);
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
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1
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
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1_next[(0x3fU 
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
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1_next[(0x3fU 
                                                                            & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] = 1U;
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
                                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7
                                               [(0x3fU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                            >> 3U)))]))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                            = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                               >> 9U);
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
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 9U);
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
                    = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                       >> 9U);
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
                                        if ((1U & (~ 
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                               >> 3U)))]))) {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                                                >> 3U)))] 
                                                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                   >> 9U);
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
                        if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                                   [(0x3fU & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                      >> 3U)))]))) {
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
                        if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4
                                   [(0x3fU & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                      >> 3U)))]))) {
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
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen = 0U;
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
                                if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))]))) {
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
                                if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                        >> 3U)))]))) {
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
                                        if ((1U & (~ 
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                               >> 3U)))]))) {
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
                                        if ((1U & (~ 
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                               >> 3U)))]))) {
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata;
    if ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rdata;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata_next 
        = ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rdata
            : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr_next 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr
            : vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr_next 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr
            : vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize_next 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize)
            : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize));
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awsize_next 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize)
            : (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awsize));
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr_next 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
            ? vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr
            : ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                    ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                        ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)
                        : ((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                    >> 3U)) << 3U))
                    : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr)
                : 0U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr
            : 0U);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arsize_next 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arsize)
            : ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                    ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                        ? 2U : 3U) : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize))
                : 0U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_arsize 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize)
            : 0U);
    if (((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate)) 
         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid))) {
        Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_write_TOP((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr)), vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata, (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb));
    }
    if ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp;
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit)))) {
                if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtimecmp_hit) {
                    if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
                            = ((0xffffffffffffff00ULL 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                               | (IData)((IData)((0xffU 
                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata)))));
                    }
                    if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
                            = ((0xffffffffffff00ffULL 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                               | ((QData)((IData)((0xffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                              >> 8U))))) 
                                  << 8U));
                    }
                    if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
                            = ((0xffffffffff00ffffULL 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                               | ((QData)((IData)((0xffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                              >> 0x10U))))) 
                                  << 0x10U));
                    }
                    if ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
                            = ((0xffffffff00ffffffULL 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                               | ((QData)((IData)((0xffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                              >> 0x18U))))) 
                                  << 0x18U));
                    }
                    if ((0x10U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
                            = ((0xffffff00ffffffffULL 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                               | ((QData)((IData)((0xffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                              >> 0x20U))))) 
                                  << 0x20U));
                    }
                    if ((0x20U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
                            = ((0xffff00ffffffffffULL 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                               | ((QData)((IData)((0xffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                              >> 0x28U))))) 
                                  << 0x28U));
                    }
                    if ((0x40U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
                            = ((0xff00ffffffffffffULL 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                               | ((QData)((IData)((0xffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                              >> 0x30U))))) 
                                  << 0x30U));
                    }
                    if ((0x80U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
                            = ((0xffffffffffffffULL 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next) 
                               | ((QData)((IData)((0xffU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                              >> 0x38U))))) 
                                  << 0x38U));
                    }
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp;
                }
            }
        }
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp;
    }
    if ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime;
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit) {
                if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
                        = ((0xffffffffffffff00ULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                           | (IData)((IData)((0xffU 
                                              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata)))));
                }
                if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
                        = ((0xffffffffffff00ffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                           | ((QData)((IData)((0xffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                          >> 8U))))) 
                              << 8U));
                }
                if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
                        = ((0xffffffffff00ffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                           | ((QData)((IData)((0xffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                          >> 0x10U))))) 
                              << 0x10U));
                }
                if ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
                        = ((0xffffffff00ffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                           | ((QData)((IData)((0xffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                          >> 0x18U))))) 
                              << 0x18U));
                }
                if ((0x10U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
                        = ((0xffffff00ffffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                           | ((QData)((IData)((0xffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                          >> 0x20U))))) 
                              << 0x20U));
                }
                if ((0x20U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
                        = ((0xffff00ffffffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                           | ((QData)((IData)((0xffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                          >> 0x28U))))) 
                              << 0x28U));
                }
                if ((0x40U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
                        = ((0xff00ffffffffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                           | ((QData)((IData)((0xffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                          >> 0x30U))))) 
                              << 0x30U));
                }
                if ((0x80U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
                        = ((0xffffffffffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next) 
                           | ((QData)((IData)((0xffU 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata 
                                                          >> 0x38U))))) 
                              << 0x38U));
                }
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
                    = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtimecmp_hit)
                        ? (1ULL + vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime)
                        : ((0xffffffffffffffffULL == vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime)
                            ? 0ULL : (1ULL + vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime)));
            }
        }
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next 
            = ((0xffffffffffffffffULL == vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime)
                ? 0ULL : (1ULL + vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime));
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
    vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] = 0U;
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
                            vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] = 0U;
                            vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] = 0U;
                            vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                                = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                            vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                                = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
                                           >> 0x20U));
                        }
                    } else {
                        VL_EXTEND_WQ(128,64, __Vtemp121, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] 
                            = __Vtemp121[0U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] 
                            = __Vtemp121[1U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                            = __Vtemp121[2U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                            = __Vtemp121[3U];
                    }
                }
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)))) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3) {
                        VL_EXTEND_WQ(128,64, __Vtemp122, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] 
                            = __Vtemp122[0U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] 
                            = __Vtemp122[1U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                            = __Vtemp122[2U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                            = __Vtemp122[3U];
                    } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4) {
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] = 0U;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] = 0U;
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                            = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                            = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
                                       >> 0x20U));
                    }
                }
            }
        }
    }
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
                                            VL_EXTEND_WQ(128,64, __Vtemp124, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] 
                                                = __Vtemp124[0U];
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                                                = __Vtemp124[1U];
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                                                = __Vtemp124[2U];
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                                                = __Vtemp124[3U];
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
                VL_EXTEND_WQ(128,64, __Vtemp126, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] 
                    = __Vtemp126[0U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                    = __Vtemp126[1U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                    = __Vtemp126[2U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                    = __Vtemp126[3U];
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1) {
                VL_EXTEND_WQ(128,64, __Vtemp127, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] 
                    = __Vtemp127[0U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                    = __Vtemp127[1U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                    = __Vtemp127[2U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                    = __Vtemp127[3U];
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
    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] = 0U;
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
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] = 0U;
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] = 0U;
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                        = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                        = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
                                                   >> 0x20U));
                                }
                            } else {
                                VL_EXTEND_WQ(128,64, __Vtemp130, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] 
                                    = __Vtemp130[0U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] 
                                    = __Vtemp130[1U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                    = __Vtemp130[2U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                    = __Vtemp130[3U];
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
                                VL_EXTEND_WQ(128,64, __Vtemp131, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] 
                                    = __Vtemp131[0U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] 
                                    = __Vtemp131[1U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                    = __Vtemp131[2U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                    = __Vtemp131[3U];
                            } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6) {
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] = 0U;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] = 0U;
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                    = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                    = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
                                               >> 0x20U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] = 0U;
    vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] = 0U;
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
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] = 0U;
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] = 0U;
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                                = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                                = (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
                                                           >> 0x20U));
                                        }
                                    } else {
                                        VL_EXTEND_WQ(128,64, __Vtemp134, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] 
                                            = __Vtemp134[0U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] 
                                            = __Vtemp134[1U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                            = __Vtemp134[2U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                            = __Vtemp134[3U];
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
                                        VL_EXTEND_WQ(128,64, __Vtemp135, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] 
                                            = __Vtemp135[0U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] 
                                            = __Vtemp135[1U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                            = __Vtemp135[2U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                            = __Vtemp135[3U];
                                    } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8) {
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] = 0U;
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] = 0U;
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                            = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                            = (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ready 
        = (1U & ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
                  ? (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                        & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                       & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                      & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict)))
                      ? ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)) 
                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ready))
                      : ((~ ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                               & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                              & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                             & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict))) 
                         & ((~ (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                 & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                                & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) 
                            | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ready))))
                  : ((8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ready))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out)
            : 0U);
    if ((1U & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out)) 
               | (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out = 0ULL;
    } else if ((0x10U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        if ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out = 0ULL;
                } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out = 0ULL;
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                        = VL_MODDIV_III(32, (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1), (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2));
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U])));
                }
            } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                        = VL_MODDIVS_III(32, (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1), (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2));
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U])));
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                        = VL_DIV_III(32, (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1), (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2));
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U])));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                    = VL_DIVS_III(32, (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1), (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2));
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U])));
            } else {
                VL_EXTENDS_WQ(128,64, __Vtemp137, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1);
                VL_EXTENDS_WQ(128,64, __Vtemp138, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
                VL_MULS_WWW(128,128,128, __Vtemp139, __Vtemp137, __Vtemp138);
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                    = __Vtemp139[0U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] 
                    = __Vtemp139[1U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] 
                    = __Vtemp139[2U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] 
                    = __Vtemp139[3U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U])));
            }
        } else if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                        = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                                   - vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2));
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] 
                        = (IData)(((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                                    - vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2) 
                                   >> 0x20U));
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U])));
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                        = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                                   + vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2));
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] 
                        = (IData)(((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                                    + vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2) 
                                   >> 0x20U));
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U])));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                    = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1), 
                                     (0x1fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U])));
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                    = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1) 
                       >> (0x1fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U])));
            }
        } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                    = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                               << (0x1fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2))));
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] 
                    = (IData)(((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                                << (0x1fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2))) 
                               >> 0x20U));
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U])));
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = VL_MODDIV_QQQ(64, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = VL_MODDIVS_QQQ(64, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = VL_DIV_QQQ(64, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
        }
    } else if ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = VL_DIVS_QQQ(64, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out = 0ULL;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                VL_EXTEND_WQ(128,64, __Vtemp140, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1);
                VL_EXTEND_WQ(128,64, __Vtemp141, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
                VL_MUL_W(4, __Vtemp142, __Vtemp140, __Vtemp141);
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                    = __Vtemp142[0U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] 
                    = __Vtemp142[1U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] 
                    = __Vtemp142[2U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] 
                    = __Vtemp142[3U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U])));
            } else {
                VL_EXTENDS_WQ(128,64, __Vtemp143, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1);
                VL_EXTENDS_WQ(128,64, __Vtemp144, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
                VL_MULS_WWW(128,128,128, __Vtemp145, __Vtemp143, __Vtemp144);
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                    = __Vtemp145[0U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] 
                    = __Vtemp145[1U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] 
                    = __Vtemp145[2U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] 
                    = __Vtemp145[3U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U])));
            }
        } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = VL_MULS_QQQ(64,64,64, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                        < vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)
                        ? 1ULL : 0ULL);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (VL_LTS_IQQ(1,64,64, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)
                    ? 1ULL : 0ULL);
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                   & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
        }
    } else if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                       | vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                       ^ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                   - vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                   + vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
        }
    } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1, 
                                 (0x3fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                   >> (0x3fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
        }
    } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
            = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
               << (0x3fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out = 0ULL;
    }
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_arsize;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = 0U;
    if ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) {
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 0U;
    if ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) {
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
                                                          ? 4U
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 0U;
    if ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) {
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
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 6U;
                                                    } else if (
                                                               (0x1000U 
                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 7U;
                                                    }
                                                } else if (
                                                           (0x2000U 
                                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 6U;
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src = 0U;
    if ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) {
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
}

void Vysyx_041461_TOP___024root___settle__TOP__9(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___settle__TOP__9\n"); );
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_MEM_ctrl = 0U;
    if ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) {
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm = 0ULL;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc = 0ULL;
    if ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) {
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ready 
        = (1U & ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                     & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                    & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                   & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                  & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict)))
                  ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ready)
                  : ((~ (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict))) 
                     & ((~ ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                              & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                             & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) 
                        | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ready)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE = 0U;
    if ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) {
        if ((0x40U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((0x20U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 4U)))) {
                    if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE = 2U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((0U == (7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0xcU)))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE = 3U;
                                }
                            }
                        }
                    } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__i = 0x40U;
    if ((4U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__i = 0x40U;
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
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
    } else if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2_next[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
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
    } else if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3_next[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
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
                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4
                               [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                  >> 3U)))]))) {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] = 1U;
                    }
                }
            }
        }
    } else if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4_next[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
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
    } else if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5_next[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
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
                            if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6
                                       [(0x3fU & (IData)(
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
    } else if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6_next[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
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
    } else if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7_next[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
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
                                    if ((1U & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8
                                               [(0x3fU 
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
    } else if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8_next[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
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
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1_next[(0x3fU 
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
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1_next[(0x3fU 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] = 1U;
        }
    } else if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1_next[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))
            ? ((1U & (((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie 
                                >> 7U)) & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip 
                                                   >> 7U))) 
                      & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                 >> 3U)))) ? 8U : (
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)))
                                                    ? 1U
                                                    : 0U))
            : 0U);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict = 0U;
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
         & ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE)) 
            | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))))) {
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
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
         & (1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE)))) {
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out = 1U;
    if ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) {
        if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                      >> 6U)))) {
            if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                          >> 5U)))) {
                if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((1U == (7U 
                                                & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                   >> 0xcU)))) {
                                        if ((0U == 
                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                              >> 0x1aU))) {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out 
                                                = (
                                                   (~ 
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                     >> 0x19U)) 
                                                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out));
                                        }
                                    } else if ((5U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                    >> 0xcU)))) {
                                        if ((0U == 
                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                              >> 0x1aU))) {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out 
                                                = (
                                                   (~ 
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                     >> 0x19U)) 
                                                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out));
                                        } else if (
                                                   (0x10U 
                                                    == 
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                     >> 0x1aU))) {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out 
                                                = (
                                                   (~ 
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                     >> 0x19U)) 
                                                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out));
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
    if ((1U & (~ ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                      & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                     & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                    & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                   & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                  & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict)))))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out 
            = ((~ ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                       & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                      & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                     & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                    & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict))) 
               & (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                     & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                    & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                   & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                  & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_ready 
        = (1U & (((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                      & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                     & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                    & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                   & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                  & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict)))
                  ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ready)
                  : ((~ ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                             & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict))) 
                     & ((~ (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                               & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                              & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                             & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) 
                        | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ready)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 0U;
    if ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) {
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
                                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                              >> 0xdU)))) {
                                    if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0xcU)))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                              >> 0xcU)))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = 5U;
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
    if ((1U & (~ ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                      & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                     & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                    & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                   & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                  & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict)))))) {
        if ((1U & (~ ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                        & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                       & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict))))) {
            if ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                    & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                   & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                  & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                 & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out;
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap_out 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out)
            : 0U);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ready 
        = (1U & ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                  ? ((~ ((((((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out)) 
                             & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) 
                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap_out))) 
                           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) 
                     & ((~ ((((((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out)) 
                                & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) 
                               & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap_out))) 
                              & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                             & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) 
                        | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_ready)))
                  : ((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                     & (((((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap_out)) 
                           | (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                          | (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                         | (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                        | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_ready)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ready 
        = (1U & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out)) 
                 | (~ ((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out)) 
                       & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ready))))));
}

void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__set_pc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);

void Vysyx_041461_TOP___024root___initial__TOP__10(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___initial__TOP__10\n"); );
    // Body
    Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x);
    Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__set_pc_ptr__Vdpioc2_TOP(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out);
    Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__get_WB_valid_TOP(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out);
}

void Vysyx_041461_TOP___024root___eval_initial(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_041461_TOP__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_041461_TOP__DOT__rst_r2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2;
    Vysyx_041461_TOP___024root___initial__TOP__10(vlSelf);
}

void Vysyx_041461_TOP___024root___eval_settle(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___eval_settle\n"); );
    // Body
    Vysyx_041461_TOP___024root___settle__TOP__8(vlSelf);
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vysyx_041461_TOP___024root___settle__TOP__9(vlSelf);
}

void Vysyx_041461_TOP___024root___final(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___final\n"); );
}

void Vysyx_041461_TOP___024root___ctor_var_reset(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata);
    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata);
    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata);
    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata);
    vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata);
    vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata);
    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata);
    vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rlast = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__Q0);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__Q1);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__Q2);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__Q3);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__Q4);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__Q5);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__Q6);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__Q7);
    vlSelf->ysyx_041461_TOP__DOT__rst_r1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = VL_RAND_RESET_I(5);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_MEM_ctrl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rd_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out = VL_RAND_RESET_I(12);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_imm_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_zimm_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_pc_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_MEM_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs1_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_csr_out = VL_RAND_RESET_I(12);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_imm_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_zimm_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_pc_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb = VL_RAND_RESET_I(8);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_MEM_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out = VL_RAND_RESET_I(12);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_imm_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata_next = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit4 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit5 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit6 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit7 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit8 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata_next = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8_next[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8[__Vi0] = VL_RAND_RESET_Q(55);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[__Vi0] = VL_RAND_RESET_Q(55);
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs1_read = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs2_read = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_csr_read = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtimecmp_hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid_next = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr_next = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen_next = VL_RAND_RESET_I(8);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize_next = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst_next = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid_next = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen_next = VL_RAND_RESET_I(8);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize_next = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst_next = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate = VL_RAND_RESET_I(1);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awid_next = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr_next = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awlen_next = VL_RAND_RESET_I(8);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awsize_next = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awburst_next = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid_next = VL_RAND_RESET_I(4);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr_next = VL_RAND_RESET_I(32);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arlen_next = VL_RAND_RESET_I(8);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arsize_next = VL_RAND_RESET_I(3);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arburst_next = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__RAM0__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__RAM1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__RAM2__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__RAM3__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__RAM4__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__RAM5__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__RAM6__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ysyx_041461_TOP__DOT__RAM7__DOT__ram[__Vi0]);
    }
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immJ__0__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immJ__0__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__1__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__1__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immB__2__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immB__2__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immU__3__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immU__3__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immS__4__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immS__4__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__5__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__5__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immU__6__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immU__6__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__7__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__7__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__8__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__8__INST = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_read__15__rdata = 0;
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__IFreg_pc = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v64 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v65 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v66 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v67 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v68 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v69 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v70 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v71 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v72 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v73 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v74 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v75 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v76 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v77 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v78 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v79 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v80 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v81 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v82 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v83 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v84 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v85 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v86 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v87 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v88 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v89 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v90 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v91 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v92 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v93 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v94 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v95 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v96 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v97 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v98 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v99 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v100 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v101 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v102 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v103 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v104 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v105 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v106 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v107 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v108 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v109 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v110 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v111 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v112 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v113 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v114 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v115 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v116 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v117 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v118 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v119 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v120 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v121 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v122 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v123 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v124 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v125 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v126 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4__v127 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v64 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v65 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v66 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v67 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v68 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v69 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v70 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v71 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v72 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v73 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v74 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v75 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v76 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v77 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v78 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v79 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v80 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v81 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v82 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v83 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v84 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v85 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v86 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v87 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v88 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v89 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v90 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v91 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v92 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v93 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v94 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v95 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v96 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v97 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v98 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v99 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v100 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v101 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v102 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v103 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v104 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v105 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v106 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v107 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v108 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v109 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v110 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v111 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v112 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v113 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v114 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v115 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v116 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v117 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v118 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v119 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v120 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v121 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v122 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v123 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v124 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v125 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v126 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3__v127 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v64 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v65 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v66 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v67 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v68 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v69 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v70 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v71 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v72 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v73 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v74 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v75 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v76 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v77 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v78 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v79 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v80 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v81 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v82 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v83 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v84 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v85 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v86 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v87 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v88 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v89 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v90 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v91 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v92 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v93 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v94 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v95 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v96 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v97 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v98 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v99 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v100 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v101 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v102 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v103 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v104 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v105 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v106 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v107 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v108 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v109 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v110 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v111 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v112 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v113 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v114 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v115 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v116 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v117 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v118 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v119 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v120 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v121 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v122 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v123 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v124 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v125 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v126 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2__v127 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v64 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v65 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v66 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v67 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v68 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v69 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v71 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v72 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v73 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v74 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v75 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v76 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v78 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v79 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v80 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v81 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v82 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v83 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v85 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v86 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v87 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v88 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v89 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v90 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v92 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v93 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v94 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v95 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v96 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v97 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v99 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v100 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v101 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v102 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v103 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v104 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v106 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v107 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v108 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v109 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v110 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v111 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v113 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v114 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v115 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v116 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v117 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v118 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v120 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v121 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v122 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v123 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v124 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v125 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V8__v127 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v64 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v65 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v66 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v67 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v68 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v69 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v71 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v72 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v73 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v74 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v75 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v76 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v78 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v79 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v80 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v81 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v82 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v83 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v85 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v86 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v87 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v88 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v89 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v90 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v92 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v93 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v94 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v95 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v96 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v97 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v99 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v100 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v101 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v102 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v103 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v104 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v106 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v107 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v108 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v109 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v110 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v111 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v113 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v114 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v115 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v116 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v117 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v118 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v120 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v121 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v122 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v123 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v124 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v125 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V7__v127 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v64 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v65 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v66 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v67 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v68 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v69 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v71 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v72 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v73 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v74 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v75 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v76 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v78 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v79 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v80 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v81 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v82 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v83 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v85 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v86 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v87 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v88 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v89 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v90 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v92 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v93 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v94 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v95 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v96 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v97 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v99 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v100 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v101 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v102 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v103 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v104 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v106 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v107 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v108 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v109 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v110 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v111 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v113 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v114 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v115 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v116 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v117 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v118 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v120 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v121 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v122 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v123 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v124 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v125 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V6__v127 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v64 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v65 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v66 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v67 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v68 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v69 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v71 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v72 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v73 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v74 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v75 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v76 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v78 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v79 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v80 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v81 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v82 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v83 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v85 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v86 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v87 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v88 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v89 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v90 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v92 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v93 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v94 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v95 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v96 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v97 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v99 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v100 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v101 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v102 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v103 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v104 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v106 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v107 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v108 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v109 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v110 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v111 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v113 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v114 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v115 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v116 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v117 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v118 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v120 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v121 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v122 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v123 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v124 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v125 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V5__v127 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v64 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v65 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v66 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v67 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v68 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v69 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v71 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v72 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v73 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v74 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v75 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v76 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v78 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v79 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v80 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v81 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v82 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v83 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v85 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v86 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v87 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v88 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v89 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v90 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v92 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v93 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v94 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v95 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v96 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v97 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v99 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v100 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v101 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v102 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v103 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v104 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v106 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v107 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v108 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v109 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v110 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v111 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v113 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v114 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v115 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v116 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v117 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v118 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v120 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v121 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v122 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v123 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v124 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v125 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v127 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v64 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v65 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v66 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v67 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v68 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v69 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v71 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v72 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v73 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v74 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v75 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v76 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v78 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v79 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v80 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v81 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v82 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v83 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v85 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v86 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v87 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v88 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v89 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v90 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v92 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v93 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v94 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v95 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v96 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v97 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v99 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v100 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v101 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v102 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v103 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v104 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v106 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v107 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v108 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v109 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v110 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v111 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v113 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v114 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v115 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v116 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v117 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v118 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v120 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v121 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v122 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v123 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v124 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v125 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v127 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v64 = 0;
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v64 = 0;
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v64 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v65 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v66 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v67 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v68 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v69 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v70 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v71 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v72 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v73 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v74 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v75 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v76 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v77 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v78 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v79 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v80 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v81 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v82 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v83 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v84 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v85 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v86 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v87 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v88 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v89 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v90 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v91 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v92 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v93 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v94 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v95 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v96 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v97 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v98 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v99 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v100 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v101 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v102 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v103 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v104 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v105 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v106 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v107 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v108 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v109 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v110 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v111 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v112 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v113 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v114 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v115 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v116 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v117 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v118 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v119 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v120 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v121 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v122 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v123 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v124 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v125 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v126 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag1__v127 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v64 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v65 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v66 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v67 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v68 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v69 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v70 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v71 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v72 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v73 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v74 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v75 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v76 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v77 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v78 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v79 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v80 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v81 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v82 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v83 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v84 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v85 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v86 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v87 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v88 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v89 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v90 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v91 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v92 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v93 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v94 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v95 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v96 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v97 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v98 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v99 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v100 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v101 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v102 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v103 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v104 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v105 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v106 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v107 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v108 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v109 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v110 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v111 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v112 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v113 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v114 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v115 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v116 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v117 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v118 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v119 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v120 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v121 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v122 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v123 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v124 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v125 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v126 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5__v127 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v64 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v65 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v66 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v67 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v68 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v69 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v70 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v71 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v72 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v73 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v74 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v75 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v76 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v77 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v78 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v79 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v80 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v81 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v82 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v83 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v84 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v85 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v86 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v87 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v88 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v89 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v90 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v91 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v92 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v93 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v94 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v95 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v96 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v97 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v98 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v99 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v100 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v101 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v102 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v103 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v104 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v105 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v106 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v107 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v108 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v109 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v110 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v111 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v112 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v113 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v114 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v115 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v116 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v117 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v118 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v119 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v120 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v121 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v122 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v123 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v124 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v125 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v126 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6__v127 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v64 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v65 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v66 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v67 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v68 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v69 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v70 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v71 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v72 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v73 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v74 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v75 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v76 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v77 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v78 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v79 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v80 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v81 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v82 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v83 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v84 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v85 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v86 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v87 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v88 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v89 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v90 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v91 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v92 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v93 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v94 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v95 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v96 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v97 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v98 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v99 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v100 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v101 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v102 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v103 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v104 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v105 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v106 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v107 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v108 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v109 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v110 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v111 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v112 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v113 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v114 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v115 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v116 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v117 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v118 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v119 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v120 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v121 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v122 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v123 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v124 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v125 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v126 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7__v127 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v64 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v65 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v66 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v67 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v68 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v69 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v70 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v71 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v72 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v73 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v74 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v75 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v76 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v77 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v78 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v79 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v80 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v81 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v82 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v83 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v84 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v85 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v86 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v87 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v88 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v89 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v90 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v91 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v92 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v93 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v94 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v95 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v96 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v97 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v98 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v99 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v100 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v101 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v102 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v103 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v104 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v105 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v106 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v107 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v108 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v109 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v110 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v111 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v112 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v113 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v114 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v115 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v116 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v117 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v118 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v119 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v120 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v121 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v122 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v123 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v124 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v125 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v126 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8__v127 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__EXEreg_MEM_ctrl_out = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__MEMreg_csr_out = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__MEMreg_zimm_out = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v64 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v65 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v66 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v67 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v68 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v69 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v70 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v71 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v72 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v73 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v74 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v75 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v76 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v77 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v78 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v79 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v80 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v81 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v82 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v83 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v84 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v85 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v86 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v87 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v88 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v89 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v90 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v91 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v92 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v93 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v94 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v95 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v96 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v97 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v98 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v99 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v100 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v101 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v102 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v103 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v104 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v105 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v106 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v107 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v108 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v109 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v110 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v111 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v112 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v113 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v114 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v115 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v116 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v117 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v118 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v119 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v120 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v121 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v122 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v123 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v124 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v125 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v126 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v127 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v64 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v65 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v66 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v67 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v68 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v69 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v70 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v71 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v72 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v73 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v74 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v75 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v76 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v77 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v78 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v79 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v80 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v81 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v82 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v83 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v84 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v85 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v86 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v87 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v88 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v89 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v90 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v91 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v92 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v93 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v94 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v95 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v96 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v97 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v98 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v99 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v100 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v101 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v102 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v103 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v104 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v105 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v106 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v107 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v108 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v109 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v110 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v111 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v112 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v113 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v114 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v115 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v116 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v117 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v118 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v119 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v120 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v121 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v122 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v123 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v124 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v125 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v126 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v127 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v64 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v65 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v66 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v67 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v68 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v69 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v70 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v71 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v72 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v73 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v74 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v75 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v76 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v77 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v78 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v79 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v80 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v81 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v82 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v83 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v84 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v85 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v86 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v87 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v88 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v89 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v90 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v91 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v92 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v93 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v94 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v95 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v96 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v97 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v98 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v99 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v100 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v101 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v102 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v103 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v104 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v105 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v106 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v107 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v108 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v109 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v110 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v111 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v112 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v113 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v114 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v115 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v116 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v117 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v118 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v119 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v120 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v121 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v122 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v123 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v124 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v125 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v126 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v127 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v64 = 0;
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v64 = 0;
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v64 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v65 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v66 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v67 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v68 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v69 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v71 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v72 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v73 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v74 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v75 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v76 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v78 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v79 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v80 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v81 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v82 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v83 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v85 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v86 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v87 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v88 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v89 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v90 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v92 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v93 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v94 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v95 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v96 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v97 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v99 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v100 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v101 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v102 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v103 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v104 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v106 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v107 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v108 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v109 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v110 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v111 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v113 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v114 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v115 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v116 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v117 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v118 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v120 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v121 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v122 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v123 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v124 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v125 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v127 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v64 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v65 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v66 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v67 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v68 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v69 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v71 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v72 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v73 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v74 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v75 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v76 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v78 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v79 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v80 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v81 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v82 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v83 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v85 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v86 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v87 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v88 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v89 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v90 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v92 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v93 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v94 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v95 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v96 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v97 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v99 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v100 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v101 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v102 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v103 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v104 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v106 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v107 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v108 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v109 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v110 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v111 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v113 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v114 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v115 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v116 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v117 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v118 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v120 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v121 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v122 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v123 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v124 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v125 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v127 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v64 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v65 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v66 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v67 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v68 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v69 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v71 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v72 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v73 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v74 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v75 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v76 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v78 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v79 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v80 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v81 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v82 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v83 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v85 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v86 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v87 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v88 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v89 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v90 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v92 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v93 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v94 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v95 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v96 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v97 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v99 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v100 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v101 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v102 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v103 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v104 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v106 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v107 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v108 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v109 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v110 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v111 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v113 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v114 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v115 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v116 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v117 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v118 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v120 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v121 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v122 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v123 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v124 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v125 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v127 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v64 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v65 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v66 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v67 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v68 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v69 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v71 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v72 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v73 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v74 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v75 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v76 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v78 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v79 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v80 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v81 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v82 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v83 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v85 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v86 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v87 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v88 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v89 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v90 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v92 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v93 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v94 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v95 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v96 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v97 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v99 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v100 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v101 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v102 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v103 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v104 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v106 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v107 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v108 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v109 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v110 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v111 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v113 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v114 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v115 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v116 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v117 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v118 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v120 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v121 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v122 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v123 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v124 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v125 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v127 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v64 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v65 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v66 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v67 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v68 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v69 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v71 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v72 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v73 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v74 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v75 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v76 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v78 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v79 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v80 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v81 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v82 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v83 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v85 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v86 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v87 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v88 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v89 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v90 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v92 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v93 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v94 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v95 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v96 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v97 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v99 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v100 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v101 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v102 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v103 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v104 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v106 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v107 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v108 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v109 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v110 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v111 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v113 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v114 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v115 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v116 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v117 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v118 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v120 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v121 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v122 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v123 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v124 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v125 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v127 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v64 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v65 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v66 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v67 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v68 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v69 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v71 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v72 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v73 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v74 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v75 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v76 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v78 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v79 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v80 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v81 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v82 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v83 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v85 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v86 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v87 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v88 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v89 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v90 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v92 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v93 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v94 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v95 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v96 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v97 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v99 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v100 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v101 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v102 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v103 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v104 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v106 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v107 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v108 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v109 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v110 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v111 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v113 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v114 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v115 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v116 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v117 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v118 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v120 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v121 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v122 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v123 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v124 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v125 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v127 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v64 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v65 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v66 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v67 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v68 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v69 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v70 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v71 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v72 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v73 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v74 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v75 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v76 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v77 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v78 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v79 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v80 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v81 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v82 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v83 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v84 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v85 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v86 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v87 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v88 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v89 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v90 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v91 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v92 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v93 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v94 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v95 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v96 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v97 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v98 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v99 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v100 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v101 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v102 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v103 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v104 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v105 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v106 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v107 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v108 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v109 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v110 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v111 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v112 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v113 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v114 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v115 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v116 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v117 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v118 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v119 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v120 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v121 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v122 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v123 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v124 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v125 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v126 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v127 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v64 = 0;
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v0 = 0;
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v64 = 0;
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v64 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v65 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v66 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v67 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v68 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v69 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v70 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v71 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v72 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v73 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v74 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v75 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v76 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v77 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v78 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v79 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v80 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v81 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v82 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v83 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v84 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v85 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v86 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v87 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v88 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v89 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v90 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v91 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v92 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v93 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v94 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v95 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v96 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v97 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v98 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v99 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v100 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v101 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v102 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v103 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v104 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v105 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v106 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v107 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v108 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v109 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v110 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v111 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v112 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v113 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v114 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v115 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v116 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v117 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v118 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v119 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v120 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v121 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v122 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v123 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v124 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v125 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v126 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag7__v127 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v64 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v64 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v65 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v66 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v67 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v68 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v69 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v70 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v71 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v72 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v73 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v74 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v75 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v76 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v77 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v78 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v79 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v80 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v81 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v82 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v83 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v84 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v85 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v86 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v87 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v88 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v89 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v90 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v91 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v92 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v93 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v94 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v95 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v96 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v97 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v98 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v99 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v100 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v101 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v102 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v103 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v104 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v105 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v106 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v107 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v108 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v109 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v110 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v111 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v112 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v113 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v114 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v115 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v116 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v117 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v118 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v119 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v120 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v121 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v122 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v123 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v124 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v125 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v126 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8__v127 = VL_RAND_RESET_Q(55);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v0 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v32 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v32 = 0;
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v33 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v34 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v35 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v36 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v37 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v38 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v39 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v40 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v41 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v42 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v43 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v44 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v45 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v46 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v47 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v48 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v49 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v50 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v51 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v52 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v53 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v54 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v55 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v56 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v57 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v58 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v59 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v60 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v61 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v62 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v63 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__ysyx_041461_TOP__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_041461_TOP__DOT__rst_r2 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_041461_TOP__DOT__core__DOT__WB_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
