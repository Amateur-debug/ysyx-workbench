// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041461_TOP.h for the primary calling header

#include "Vysyx_041461_TOP___024root.h"
#include "Vysyx_041461_TOP__Syms.h"

#include "verilated_dpi.h"

void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_041461_TOP___024root___multiclk__TOP__15(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___multiclk__TOP__15\n"); );
    // Body
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid_next 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid)
            : ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                    ? 0U : 1U) : 0U));
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
            : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rresp)
                : 0U));
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
    if (((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate)) 
         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid))) {
        Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_write_TOP((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr)), vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata, (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb));
    }
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))) {
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awsize_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr_next 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awsize_next 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awsize;
    }
    if (vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate) {
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr_next 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arsize_next 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arsize;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr_next 
            = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                    ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                        ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)
                        : ((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                    >> 3U)) << 3U))
                    : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr)
                : 0U);
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arsize_next 
            = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                    ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                        ? 2U : 3U) : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize))
                : 0U);
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
}

VL_INLINE_OPT void Vysyx_041461_TOP___024root___combo__TOP__16(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___combo__TOP__16\n"); );
    // Body
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

void Vysyx_041461_TOP___024root___sequent__TOP__2(Vysyx_041461_TOP___024root* vlSelf);
void Vysyx_041461_TOP___024root___sequent__TOP__4(Vysyx_041461_TOP___024root* vlSelf);
void Vysyx_041461_TOP___024root___sequent__TOP__5(Vysyx_041461_TOP___024root* vlSelf);
void Vysyx_041461_TOP___024root___sequent__TOP__6(Vysyx_041461_TOP___024root* vlSelf);
void Vysyx_041461_TOP___024root___sequent__TOP__7(Vysyx_041461_TOP___024root* vlSelf);
void Vysyx_041461_TOP___024root___sequent__TOP__11(Vysyx_041461_TOP___024root* vlSelf);
void Vysyx_041461_TOP___024root___sequent__TOP__12(Vysyx_041461_TOP___024root* vlSelf);
void Vysyx_041461_TOP___024root___sequent__TOP__13(Vysyx_041461_TOP___024root* vlSelf);
void Vysyx_041461_TOP___024root___sequent__TOP__14(Vysyx_041461_TOP___024root* vlSelf);

void Vysyx_041461_TOP___024root___eval(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyx_041461_TOP__DOT__rst_r2) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_041461_TOP__DOT__rst_r2))))) {
        Vysyx_041461_TOP___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2))))) {
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vysyx_041461_TOP___024root___sequent__TOP__4(vlSelf);
        Vysyx_041461_TOP___024root___sequent__TOP__5(vlSelf);
        Vysyx_041461_TOP___024root___sequent__TOP__6(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_041461_TOP___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vysyx_041461_TOP___024root___sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyx_041461_TOP__DOT__rst_r2) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_041461_TOP__DOT__rst_r2))))) {
        Vysyx_041461_TOP___024root___sequent__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2))))) {
        Vysyx_041461_TOP___024root___sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        Vysyx_041461_TOP___024root___sequent__TOP__14(vlSelf);
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((IData)(vlSelf->__VinpClk__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2) 
             & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2)))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyx_041461_TOP__DOT__rst_r2) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_041461_TOP__DOT__rst_r2))))) {
        Vysyx_041461_TOP___024root___multiclk__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    Vysyx_041461_TOP___024root___combo__TOP__16(vlSelf);
    vlSelf->__Vm_traceActivity[8U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_041461_TOP__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_041461_TOP__DOT__rst_r2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2;
    vlSelf->__VinpClk__TOP__ysyx_041461_TOP__DOT__rst_r2 
        = vlSelf->ysyx_041461_TOP__DOT__rst_r2;
    vlSelf->__VinpClk__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2;
}

QData Vysyx_041461_TOP___024root___change_request_1(Vysyx_041461_TOP___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_041461_TOP___024root___change_request(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___change_request\n"); );
    // Body
    return (Vysyx_041461_TOP___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_041461_TOP___024root___change_request_1(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->ysyx_041461_TOP__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_041461_TOP__DOT__rst_r2)
         | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ready ^ vlSelf->__Vchglast__TOP__ysyx_041461_TOP__DOT__core__DOT__WB_ready)
         | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2));
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_041461_TOP__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_041461_TOP__DOT__rst_r2))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_041461_TOP.v:91: ysyx_041461_TOP.rst_r2\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ready ^ vlSelf->__Vchglast__TOP__ysyx_041461_TOP__DOT__core__DOT__WB_ready))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_041461.v:240: ysyx_041461_TOP.core.WB_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_041461.v:307: ysyx_041461_TOP.core.rst_r2\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyx_041461_TOP__DOT__rst_r2 
        = vlSelf->ysyx_041461_TOP__DOT__rst_r2;
    vlSelf->__Vchglast__TOP__ysyx_041461_TOP__DOT__core__DOT__WB_ready 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ready;
    vlSelf->__Vchglast__TOP__ysyx_041461_TOP__DOT__core__DOT__rst_r2 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2;
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_041461_TOP___024root___eval_debug_assertions(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
