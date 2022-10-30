// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22041461_CPU.h for the primary calling header

#include "Vysyx_22041461_CPU___024root.h"
#include "Vysyx_22041461_CPU__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_pc_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__IF_reg__DOT__set_pc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__IF_reg__DOT__set_pc_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_pc_ptr(&a__Vopenarray);
}

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void ebreak();

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
}

extern "C" void invalid_inst();

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__invalid_inst_TOP\n"); );
    // Body
    invalid_inst();
}

extern "C" void pmem_write(long long waddr, long long wdata, char AXI_wmask);

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ AXI_wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char AXI_wmask__Vcvt;
    for (size_t AXI_wmask__Vidx = 0; AXI_wmask__Vidx < 1; ++AXI_wmask__Vidx) AXI_wmask__Vcvt = AXI_wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, AXI_wmask__Vcvt);
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__WB__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__WB__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__2(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_pc_out 
        = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_pc_out;
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_imm_out 
        = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_imm_out;
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_zimm_out 
        = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_zimm_out;
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_rs1_out 
        = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs1_out;
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_rd_out 
        = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out;
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_csr_out 
        = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out;
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out 
        = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out;
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
        = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out;
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out 
        = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out;
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_valid_out 
        = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out;
    if (vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2) {
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_pc_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable)
                ? vlSelf->ysyx_22041461_CPU__DOT__EXEreg_pc_out
                : vlSelf->ysyx_22041461_CPU__DOT__MEMreg_pc_out);
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_imm_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable)
                ? vlSelf->ysyx_22041461_CPU__DOT__EXEreg_imm_out
                : vlSelf->ysyx_22041461_CPU__DOT__MEMreg_imm_out);
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_zimm_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable)
                ? vlSelf->ysyx_22041461_CPU__DOT__EXEreg_zimm_out
                : vlSelf->ysyx_22041461_CPU__DOT__MEMreg_zimm_out);
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_rs1_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable)
                ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out)
                : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs1_out));
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_rd_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable)
                ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out)
                : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out));
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_csr_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable)
                ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out)
                : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out));
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable)
                ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out)
                : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out));
        vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable)
                ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out)
                : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out));
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable)
                ? vlSelf->ysyx_22041461_CPU__DOT__EXE_out
                : vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out);
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable)
                ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_MEM_ctrl_out)
                : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out));
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_valid_out 
            = (((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable)
                 ? (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_valid)) 
                       | (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out))))
                 : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out)) 
               & 1U);
    } else {
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_pc_out = 0x80000000ULL;
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_imm_out = 0ULL;
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_zimm_out = 0ULL;
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_rs1_out = 0U;
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_rd_out = 0U;
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_csr_out = 0U;
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out = 0U;
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_EXE_out = 0ULL;
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out = 0U;
        vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_valid_out = 0U;
    }
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__3(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__3\n"); );
    // Body
    if (vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2) {
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_pc_out 
            = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_pc_out;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_imm_out 
            = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_imm_out;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_rs1_out 
            = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs1_out;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_zimm_out 
            = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_zimm_out;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out 
            = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_EXE_out 
            = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_MEM_out 
            = ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                           ? ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                               ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                   ? vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata
                                   : (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata)))
                               : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata 
                                                                              >> 0x1fU))))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata)))
                                   : (QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata))))))
                           : ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                               ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata))))
                                   : (((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata 
                                                                      >> 0xfU)))))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata))))))
                               : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                   ? (((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata 
                                                                      >> 7U)))))) 
                                       << 8U) | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata)))))
                                   : 0ULL))));
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out 
            = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out 
            = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_valid_out 
            = ((~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_WBreg_valid)) 
                   | (~ ((~ ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state) 
                             >> 1U)) & ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))
                                         ? (5U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))
                                         : (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out) 
                                             & (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEM_valid)) 
                                            & (0U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out)))))))) 
               & 1U);
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_pc_out = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_imm_out = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_rs1_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_zimm_out = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_EXE_out = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_MEM_out = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__WBreg_valid_out = 0U;
    }
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
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__4(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__WB__DOT__x__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__WB__DOT__x__v32;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v1;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v2;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v3;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v4;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v5;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v6;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v7;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v8;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v9;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v10;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v11;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v12;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v13;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v14;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v15;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v16;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v17;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v18;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v19;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v20;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v21;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v22;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v23;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v24;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v25;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v26;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v27;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v28;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v29;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v30;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v31;
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__j = 0x20U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__WB__DOT__x__v0 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__WB__DOT__x__v32 = 0U;
    if (vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r2) {
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus_next;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause_next;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc_next;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec_next;
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec = 0ULL;
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r2) {
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v0 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0U];
        __Vdlyvset__ysyx_22041461_CPU__DOT__WB__DOT__x__v0 = 1U;
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v1 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [1U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v2 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [2U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v3 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [3U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v4 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [4U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v5 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [5U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v6 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [6U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v7 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [7U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v8 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [8U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v9 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [9U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v10 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0xaU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v11 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0xbU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v12 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0xcU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v13 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0xdU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v14 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0xeU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v15 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0xfU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v16 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x10U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v17 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x11U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v18 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x12U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v19 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x13U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v20 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x14U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v21 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x15U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v22 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x16U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v23 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x17U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v24 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x18U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v25 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x19U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v26 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x1aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v27 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x1bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v28 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x1cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v29 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x1dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v30 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x1eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v31 
            = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d
            [0x1fU];
    } else {
        __Vdlyvset__ysyx_22041461_CPU__DOT__WB__DOT__x__v32 = 1U;
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__WB__DOT__x__v0) {
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v0;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[1U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v1;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[2U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v2;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[3U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v3;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[4U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v4;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[5U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v5;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[6U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v6;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[7U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v7;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[8U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v8;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[9U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v9;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0xaU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v10;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0xbU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v11;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0xcU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v12;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0xdU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v13;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0xeU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v14;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0xfU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v15;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x10U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v16;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x11U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v17;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x12U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v18;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x13U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v19;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x14U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v20;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x15U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v21;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x16U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v22;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x17U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v23;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x18U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v24;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x19U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v25;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x1aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v26;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x1bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v27;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x1cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v28;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x1dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v29;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x1eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v30;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x1fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__WB__DOT__x__v31;
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__WB__DOT__x__v32) {
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[1U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[2U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[3U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[4U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[5U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[6U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[7U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[8U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[9U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0xaU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0xbU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0xcU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0xdU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0xeU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0xfU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x10U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x11U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x12U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x13U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x14U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x15U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x16U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x17U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x18U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x19U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x1aU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x1bU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x1cU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x1dU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x1eU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0x1fU] = 0ULL;
    }
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__5(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__5\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__num 
        = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__num;
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__num 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2) 
           & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid) 
              & (((IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1) 
                  | (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2)) 
                 & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__num)))));
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__6(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__6\n"); );
    // Variables
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp7;
    VlWide<4>/*127:0*/ __Vtemp11;
    // Body
    vlSelf->__Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0 = 0U;
    if ((1U & (~ ((3U != (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state)) 
                  | ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen) 
                     & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                        & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)))))))) {
        VL_EXTEND_WQ(128,64, __Vtemp2, vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wdata);
        VL_EXTEND_WQ(128,64, __Vtemp7, vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata);
        VL_EXTEND_WQ(128,64, __Vtemp11, vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata);
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0[0U] 
            = ((((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))
                  ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                      ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                          ? __Vtemp2[0U] : 0U) : (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                              >> 3U)))]
                                                   ? 
                                                  (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                               >> 3U)))]
                                                    ? 
                                                   __Vtemp7[0U]
                                                    : 0U)
                                                   : 
                                                  __Vtemp11[0U]))
                  : 0U) & (~ vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[0U])) 
               | (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                     >> 3U)))][0U] 
                  & vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[0U]));
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0[1U] 
            = ((((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))
                  ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                      ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                          ? __Vtemp2[1U] : 0U) : (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                              >> 3U)))]
                                                   ? 
                                                  (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                               >> 3U)))]
                                                    ? 
                                                   __Vtemp7[1U]
                                                    : 0U)
                                                   : 
                                                  __Vtemp11[1U]))
                  : 0U) & (~ vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[1U])) 
               | (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                     >> 3U)))][1U] 
                  & vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[1U]));
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0[2U] 
            = ((((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))
                  ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                      ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                          ? __Vtemp2[2U] : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                             ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wdata)
                                             : 0U))
                      : (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                         [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                            >> 3U)))]
                          ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                             [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                >> 3U)))]
                              ? __Vtemp7[2U] : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata))
                          : __Vtemp11[2U])) : 0U) & 
                (~ vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[2U])) 
               | (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                     >> 3U)))][2U] 
                  & vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[2U]));
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0[3U] 
            = ((((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))
                  ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                      ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                          ? __Vtemp2[3U] : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                             ? (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wdata 
                                                        >> 0x20U))
                                             : 0U))
                      : (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                         [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                            >> 3U)))]
                          ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                             [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                >> 3U)))]
                              ? __Vtemp7[3U] : (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata 
                                                        >> 0x20U)))
                          : __Vtemp11[3U])) : 0U) & 
                (~ vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[3U])) 
               | (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                     >> 3U)))][3U] 
                  & vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[3U]));
        __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                >> 3U)));
    }
    if (((3U != (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state)) 
         | ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen) 
            & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
               & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)))))) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[0U] 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                               >> 3U)))][0U];
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[1U] 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                               >> 3U)))][1U];
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[2U] 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                               >> 3U)))][2U];
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[3U] 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                               >> 3U)))][3U];
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[0U] = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[1U] = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[2U] = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[3U] = 0U;
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram[__Vdlyvdim0__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0[0U];
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram[__Vdlyvdim0__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0[1U];
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram[__Vdlyvdim0__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0[2U];
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram[__Vdlyvdim0__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM__DOT__ram__v0[3U];
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_22041461_CPU__ConstPool__TABLE_d1140eb3_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_22041461_CPU__ConstPool__TABLE_8cb9ad1b_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_22041461_CPU__ConstPool__TABLE_be24ae63_0;

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__7(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__7\n"); );
    // Variables
    SData/*8:0*/ __Vtableidx4;
    // Body
    if (vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2) {
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_MEM_ctrl_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable)
                ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_MEM_ctrl)
                : (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_MEM_ctrl_out));
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_pc_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable)
                ? vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out
                : vlSelf->ysyx_22041461_CPU__DOT__EXEreg_pc_out);
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_imm_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable)
                ? vlSelf->ysyx_22041461_CPU__DOT__ID_imm
                : vlSelf->ysyx_22041461_CPU__DOT__EXEreg_imm_out);
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable)
                ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl)
                : (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out));
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable)
                ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src)
                : (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out));
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable)
                ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl)
                : (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out));
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out 
            = (((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable)
                 ? (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid)) 
                       | (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out))))
                 : (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out)) 
               & 1U);
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_zimm_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable)
                ? (QData)((IData)((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                            >> 0xfU))))
                : vlSelf->ysyx_22041461_CPU__DOT__EXEreg_zimm_out);
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out 
            = (0x1fU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable)
                         ? (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                            >> 7U) : (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out)));
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out 
            = (0x1fU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable)
                         ? (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                            >> 0x14U) : (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out)));
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out 
            = (0x1fU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable)
                         ? (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                            >> 0xfU) : (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out)));
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out 
            = (0xfffU & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable)
                          ? (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                             >> 0x14U) : (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out)));
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_MEM_ctrl_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_pc_out = 0x80000000ULL;
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_imm_out = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_zimm_out = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out = 0U;
    }
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
    __Vtableidx4 = (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out) 
                     << 6U) | (((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out) 
                                << 1U) | (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out)));
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs1_read 
        = Vysyx_22041461_CPU__ConstPool__TABLE_d1140eb3_0
        [__Vtableidx4];
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs2_read 
        = Vysyx_22041461_CPU__ConstPool__TABLE_8cb9ad1b_0
        [__Vtableidx4];
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_read 
        = Vysyx_22041461_CPU__ConstPool__TABLE_be24ae63_0
        [__Vtableidx4];
}

extern const VlUnpacked<CData/*2:0*/, 512> Vysyx_22041461_CPU__ConstPool__TABLE_15645074_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vysyx_22041461_CPU__ConstPool__TABLE_17e44549_0;

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__8(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__8\n"); );
    // Variables
    CData/*5:0*/ __Vtableidx2;
    CData/*2:0*/ __Vdly__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v0;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v1;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v2;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v3;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v4;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v5;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v6;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v7;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v8;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v9;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v10;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v11;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v12;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v13;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v14;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v15;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v16;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v17;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v18;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v19;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v20;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v21;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v22;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v23;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v24;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v25;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v26;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v27;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v28;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v29;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v30;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v31;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v32;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v33;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v34;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v35;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v36;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v37;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v38;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v39;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v40;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v41;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v42;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v43;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v44;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v45;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v46;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v47;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v48;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v49;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v50;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v51;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v52;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v53;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v54;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v55;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v56;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v57;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v58;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v59;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v60;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v61;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v62;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v63;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v64;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v0;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v1;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v2;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v3;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v4;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v5;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v6;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v7;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v8;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v9;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v10;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v11;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v12;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v13;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v14;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v15;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v16;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v17;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v18;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v19;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v20;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v21;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v22;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v23;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v24;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v25;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v26;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v27;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v28;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v29;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v30;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v31;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v32;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v33;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v34;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v35;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v36;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v37;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v38;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v39;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v40;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v41;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v42;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v43;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v44;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v45;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v46;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v47;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v48;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v49;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v50;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v51;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v52;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v53;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v54;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v55;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v56;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v57;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v58;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v59;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v60;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v61;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v62;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v63;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v64;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v64;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v64;
    SData/*8:0*/ __Vtableidx3;
    IData/*31:0*/ __Vilp;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v0;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v1;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v2;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v3;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v4;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v5;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v6;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v7;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v8;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v9;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v10;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v11;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v12;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v13;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v14;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v15;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v16;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v17;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v18;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v19;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v20;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v21;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v22;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v23;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v24;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v25;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v26;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v27;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v28;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v29;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v30;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v31;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v32;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v33;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v34;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v35;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v36;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v37;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v38;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v39;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v40;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v41;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v42;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v43;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v44;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v45;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v46;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v47;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v48;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v49;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v50;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v51;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v52;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v53;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v54;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v55;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v56;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v57;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v58;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v59;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v60;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v61;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v62;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v63;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v0;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v1;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v2;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v3;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v4;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v5;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v6;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v7;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v8;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v9;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v10;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v11;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v12;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v13;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v14;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v15;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v16;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v17;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v18;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v19;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v20;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v21;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v22;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v23;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v24;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v25;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v26;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v27;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v28;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v29;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v30;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v31;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v32;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v33;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v34;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v35;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v36;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v37;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v38;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v39;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v40;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v41;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v42;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v43;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v44;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v45;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v46;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v47;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v48;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v49;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v50;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v51;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v52;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v53;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v54;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v55;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v56;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v57;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v58;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v59;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v60;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v61;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v62;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v63;
    // Body
    __Vdly__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state 
        = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state;
    __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v0 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v64 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v0 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v64 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v0 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v64 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v0 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v64 = 0U;
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__k = 0x40U;
    __Vtableidx3 = (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid) 
                     << 8U) | (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen) 
                                << 7U) | (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__inmemory) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2)))))));
    __Vdly__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state 
        = Vysyx_22041461_CPU__ConstPool__TABLE_15645074_0
        [__Vtableidx3];
    __Vtableidx2 = (((5U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state)) 
                     << 5U) | (((0U == (7U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))) 
                                << 4U) | (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__busy) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state) 
                                            << 1U) 
                                           | (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2)))));
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state 
        = Vysyx_22041461_CPU__ConstPool__TABLE_17e44549_0
        [__Vtableidx2];
    if (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2) {
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v0 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0U];
        __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v0 = 1U;
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v1 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [1U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v2 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [2U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v3 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [3U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v4 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [4U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v5 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [5U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v6 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [6U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v7 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [7U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v8 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [8U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v9 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [9U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v10 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0xaU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v11 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0xbU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v12 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0xcU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v13 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0xdU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v14 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0xeU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v15 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0xfU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v16 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x10U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v17 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x11U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v18 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x12U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v19 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x13U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v20 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x14U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v21 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x15U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v22 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x16U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v23 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x17U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v24 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x18U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v25 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x19U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v26 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x1aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v27 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x1bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v28 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x1cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v29 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x1dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v30 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x1eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v31 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x1fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v32 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x20U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v33 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x21U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v34 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x22U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v35 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x23U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v36 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x24U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v37 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x25U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v38 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x26U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v39 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x27U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v40 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x28U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v41 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x29U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v42 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x2aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v43 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x2bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v44 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x2cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v45 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x2dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v46 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x2eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v47 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x2fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v48 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x30U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v49 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x31U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v50 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x32U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v51 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x33U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v52 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x34U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v53 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x35U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v54 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x36U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v55 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x37U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v56 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x38U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v57 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x39U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v58 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x3aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v59 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x3bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v60 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x3cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v61 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x3dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v62 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x3eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v63 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next
            [0x3fU];
    } else {
        __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v64 = 1U;
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2) {
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v0 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0U];
        __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v0 = 1U;
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v1 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [1U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v2 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [2U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v3 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [3U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v4 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [4U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v5 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [5U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v6 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [6U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v7 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [7U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v8 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [8U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v9 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [9U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v10 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0xaU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v11 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0xbU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v12 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0xcU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v13 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0xdU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v14 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0xeU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v15 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0xfU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v16 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x10U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v17 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x11U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v18 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x12U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v19 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x13U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v20 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x14U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v21 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x15U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v22 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x16U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v23 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x17U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v24 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x18U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v25 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x19U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v26 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x1aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v27 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x1bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v28 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x1cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v29 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x1dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v30 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x1eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v31 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x1fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v32 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x20U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v33 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x21U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v34 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x22U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v35 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x23U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v36 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x24U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v37 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x25U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v38 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x26U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v39 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x27U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v40 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x28U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v41 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x29U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v42 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x2aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v43 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x2bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v44 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x2cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v45 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x2dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v46 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x2eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v47 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x2fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v48 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x30U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v49 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x31U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v50 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x32U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v51 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x33U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v52 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x34U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v53 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x35U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v54 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x36U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v55 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x37U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v56 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x38U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v57 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x39U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v58 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x3aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v59 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x3bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v60 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x3cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v61 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x3dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v62 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x3eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v63 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next
            [0x3fU];
    } else {
        __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v64 = 1U;
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2) {
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v0 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0U];
        __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v0 = 1U;
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v1 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [1U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v2 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [2U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v3 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [3U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v4 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [4U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v5 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [5U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v6 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [6U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v7 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [7U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v8 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [8U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v9 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [9U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v10 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0xaU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v11 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0xbU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v12 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0xcU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v13 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0xdU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v14 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0xeU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v15 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0xfU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v16 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x10U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v17 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x11U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v18 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x12U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v19 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x13U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v20 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x14U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v21 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x15U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v22 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x16U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v23 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x17U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v24 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x18U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v25 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x19U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v26 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x1aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v27 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x1bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v28 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x1cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v29 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x1dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v30 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x1eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v31 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x1fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v32 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x20U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v33 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x21U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v34 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x22U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v35 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x23U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v36 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x24U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v37 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x25U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v38 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x26U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v39 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x27U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v40 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x28U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v41 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x29U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v42 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x2aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v43 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x2bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v44 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x2cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v45 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x2dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v46 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x2eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v47 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x2fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v48 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x30U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v49 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x31U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v50 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x32U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v51 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x33U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v52 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x34U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v53 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x35U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v54 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x36U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v55 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x37U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v56 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x38U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v57 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x39U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v58 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x3aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v59 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x3bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v60 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x3cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v61 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x3dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v62 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x3eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v63 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next
            [0x3fU];
    } else {
        __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v64 = 1U;
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2) {
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v0 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0U];
        __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v0 = 1U;
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v1 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [1U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v2 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [2U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v3 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [3U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v4 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [4U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v5 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [5U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v6 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [6U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v7 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [7U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v8 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [8U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v9 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [9U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v10 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0xaU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v11 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0xbU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v12 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0xcU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v13 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0xdU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v14 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0xeU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v15 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0xfU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v16 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x10U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v17 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x11U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v18 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x12U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v19 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x13U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v20 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x14U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v21 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x15U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v22 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x16U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v23 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x17U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v24 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x18U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v25 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x19U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v26 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x1aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v27 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x1bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v28 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x1cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v29 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x1dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v30 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x1eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v31 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x1fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v32 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x20U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v33 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x21U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v34 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x22U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v35 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x23U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v36 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x24U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v37 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x25U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v38 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x26U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v39 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x27U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v40 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x28U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v41 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x29U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v42 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x2aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v43 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x2bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v44 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x2cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v45 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x2dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v46 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x2eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v47 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x2fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v48 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x30U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v49 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x31U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v50 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x32U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v51 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x33U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v52 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x34U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v53 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x35U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v54 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x36U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v55 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x37U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v56 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x38U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v57 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x39U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v58 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x3aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v59 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x3bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v60 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x3cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v61 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x3dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v62 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x3eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v63 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next
            [0x3fU];
    } else {
        __Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v64 = 1U;
    }
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state 
        = __Vdly__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state;
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v0) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v0;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[1U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v1;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[2U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v2;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[3U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v3;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[4U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v4;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[5U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v5;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[6U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v6;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[7U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v7;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[8U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v8;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[9U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v9;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0xaU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v10;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0xbU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v11;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0xcU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v12;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0xdU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v13;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0xeU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v14;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0xfU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v15;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x10U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v16;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x11U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v17;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x12U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v18;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x13U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v19;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x14U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v20;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x15U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v21;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x16U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v22;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x17U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v23;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x18U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v24;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x19U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v25;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x1aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v26;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x1bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v27;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x1cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v28;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x1dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v29;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x1eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v30;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x1fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v31;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x20U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v32;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x21U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v33;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x22U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v34;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x23U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v35;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x24U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v36;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x25U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v37;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x26U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v38;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x27U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v39;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x28U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v40;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x29U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v41;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x2aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v42;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x2bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v43;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x2cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v44;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x2dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v45;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x2eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v46;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x2fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v47;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x30U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v48;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x31U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v49;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x32U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v50;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x33U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v51;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x34U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v52;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x35U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v53;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x36U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v54;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x37U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v55;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x38U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v56;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x39U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v57;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x3aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v58;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x3bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v59;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x3cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v60;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x3dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v61;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x3eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v62;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[0x3fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v63;
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2__v64) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v0) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v0;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[1U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v1;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[2U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v2;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[3U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v3;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[4U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v4;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[5U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v5;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[6U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v6;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[7U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v7;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[8U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v8;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[9U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v9;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0xaU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v10;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0xbU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v11;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0xcU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v12;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0xdU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v13;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0xeU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v14;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0xfU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v15;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x10U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v16;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x11U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v17;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x12U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v18;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x13U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v19;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x14U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v20;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x15U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v21;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x16U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v22;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x17U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v23;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x18U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v24;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x19U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v25;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x1aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v26;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x1bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v27;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x1cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v28;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x1dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v29;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x1eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v30;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x1fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v31;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x20U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v32;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x21U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v33;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x22U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v34;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x23U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v35;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x24U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v36;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x25U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v37;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x26U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v38;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x27U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v39;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x28U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v40;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x29U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v41;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x2aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v42;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x2bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v43;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x2cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v44;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x2dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v45;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x2eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v46;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x2fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v47;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x30U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v48;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x31U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v49;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x32U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v50;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x33U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v51;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x34U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v52;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x35U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v53;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x36U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v54;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x37U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v55;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x38U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v56;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x39U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v57;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x3aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v58;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x3bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v59;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x3cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v60;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x3dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v61;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x3eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v62;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[0x3fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v63;
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1__v64) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v0) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v0;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[1U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v1;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[2U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v2;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[3U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v3;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[4U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v4;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[5U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v5;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[6U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v6;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[7U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v7;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[8U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v8;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[9U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v9;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0xaU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v10;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0xbU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v11;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0xcU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v12;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0xdU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v13;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0xeU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v14;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0xfU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v15;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x10U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v16;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x11U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v17;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x12U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v18;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x13U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v19;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x14U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v20;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x15U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v21;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x16U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v22;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x17U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v23;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x18U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v24;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x19U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v25;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x1aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v26;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x1bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v27;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x1cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v28;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x1dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v29;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x1eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v30;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x1fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v31;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x20U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v32;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x21U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v33;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x22U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v34;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x23U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v35;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x24U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v36;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x25U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v37;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x26U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v38;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x27U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v39;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x28U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v40;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x29U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v41;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x2aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v42;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x2bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v43;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x2cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v44;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x2dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v45;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x2eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v46;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x2fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v47;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x30U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v48;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x31U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v49;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x32U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v50;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x33U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v51;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x34U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v52;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x35U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v53;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x36U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v54;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x37U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v55;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x38U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v56;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x39U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v57;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x3aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v58;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x3bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v59;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x3cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v60;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x3dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v61;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x3eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v62;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[0x3fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v63;
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2__v64) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v0) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v0;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[1U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v1;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[2U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v2;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[3U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v3;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[4U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v4;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[5U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v5;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[6U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v6;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[7U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v7;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[8U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v8;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[9U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v9;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0xaU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v10;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0xbU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v11;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0xcU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v12;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0xdU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v13;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0xeU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v14;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0xfU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v15;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x10U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v16;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x11U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v17;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x12U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v18;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x13U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v19;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x14U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v20;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x15U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v21;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x16U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v22;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x17U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v23;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x18U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v24;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x19U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v25;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x1aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v26;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x1bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v27;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x1cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v28;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x1dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v29;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x1eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v30;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x1fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v31;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x20U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v32;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x21U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v33;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x22U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v34;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x23U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v35;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x24U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v36;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x25U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v37;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x26U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v38;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x27U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v39;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x28U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v40;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x29U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v41;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x2aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v42;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x2bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v43;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x2cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v44;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x2dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v45;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x2eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v46;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x2fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v47;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x30U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v48;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x31U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v49;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x32U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v50;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x33U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v51;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x34U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v52;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x35U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v53;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x36U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v54;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x37U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v55;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x38U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v56;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x39U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v57;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x3aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v58;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x3bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v59;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x3cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v60;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x3dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v61;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x3eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v62;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[0x3fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v63;
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1__v64) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__9(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__9\n"); );
    // Body
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__IFreg_pc 
        = vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc;
    vlSelf->__Vdly__ysyx_22041461_CPU__DOT__IFreg_pc 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2)
            ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable)
                ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl)
                    ? vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc
                    : (4ULL + vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc))
                : vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc)
            : 0x80000000ULL);
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__10(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__10\n"); );
    // Body
    if (vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2) {
        vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable)
                ? vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc
                : vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out);
        vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out 
            = (((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable)
                 ? (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_valid)) 
                       | (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF_valid_out))))
                 : (IData)(vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out)) 
               & 1U);
        vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable)
                ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__num)
                    ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)
                        ? ((0U == (7U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc)))
                            ? vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[0U]
                            : ((4U == (7U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc)))
                                ? vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[1U]
                                : 0x100073U)) : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc)))
                                                   ? 
                                                  vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[2U]
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc)))
                                                    ? 
                                                   vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[3U]
                                                    : 0x100073U))
                                                  : 0U))
                    : 0U) : vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out);
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out = 0x80000000ULL;
        vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out = 0U;
    }
    vlSelf->pc = vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out;
    vlSelf->inst = vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out;
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__11(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__11\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v0;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v1;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v2;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v3;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v4;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v5;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v6;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v7;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v8;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v9;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v10;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v11;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v12;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v13;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v14;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v15;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v16;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v17;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v18;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v19;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v20;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v21;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v22;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v23;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v24;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v25;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v26;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v27;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v28;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v29;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v30;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v31;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v32;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v33;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v34;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v35;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v36;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v37;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v38;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v39;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v40;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v41;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v42;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v43;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v44;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v45;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v46;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v47;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v48;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v49;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v50;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v51;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v52;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v53;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v54;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v55;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v56;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v57;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v58;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v59;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v60;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v61;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v62;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v63;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v64;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v0;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v1;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v2;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v3;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v4;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v5;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v6;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v7;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v8;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v9;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v10;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v11;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v12;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v13;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v14;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v15;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v16;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v17;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v18;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v19;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v20;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v21;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v22;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v23;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v24;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v25;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v26;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v27;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v28;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v29;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v30;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v31;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v32;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v33;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v34;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v35;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v36;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v37;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v38;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v39;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v40;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v41;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v42;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v43;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v44;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v45;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v46;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v47;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v48;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v49;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v50;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v51;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v52;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v53;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v54;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v55;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v56;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v57;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v58;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v59;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v60;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v61;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v62;
    CData/*0:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v63;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v64;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v64;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v64;
    IData/*31:0*/ __Vilp;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v0;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v1;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v2;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v3;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v4;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v5;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v6;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v7;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v8;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v9;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v10;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v11;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v12;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v13;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v14;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v15;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v16;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v17;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v18;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v19;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v20;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v21;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v22;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v23;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v24;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v25;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v26;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v27;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v28;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v29;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v30;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v31;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v32;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v33;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v34;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v35;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v36;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v37;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v38;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v39;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v40;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v41;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v42;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v43;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v44;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v45;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v46;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v47;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v48;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v49;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v50;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v51;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v52;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v53;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v54;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v55;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v56;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v57;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v58;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v59;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v60;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v61;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v62;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v63;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v0;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v1;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v2;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v3;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v4;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v5;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v6;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v7;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v8;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v9;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v10;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v11;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v12;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v13;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v14;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v15;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v16;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v17;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v18;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v19;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v20;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v21;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v22;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v23;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v24;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v25;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v26;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v27;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v28;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v29;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v30;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v31;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v32;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v33;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v34;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v35;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v36;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v37;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v38;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v39;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v40;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v41;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v42;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v43;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v44;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v45;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v46;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v47;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v48;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v49;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v50;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v51;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v52;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v53;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v54;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v55;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v56;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v57;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v58;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v59;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v60;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v61;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v62;
    QData/*54:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v63;
    // Body
    __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v0 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v64 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v0 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v64 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v0 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v64 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v0 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v64 = 0U;
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__k = 0x40U;
    if (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2) {
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v0 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0U];
        __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v0 = 1U;
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v1 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [1U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v2 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [2U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v3 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [3U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v4 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [4U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v5 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [5U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v6 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [6U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v7 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [7U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v8 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [8U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v9 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [9U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v10 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0xaU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v11 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0xbU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v12 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0xcU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v13 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0xdU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v14 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0xeU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v15 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0xfU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v16 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x10U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v17 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x11U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v18 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x12U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v19 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x13U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v20 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x14U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v21 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x15U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v22 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x16U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v23 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x17U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v24 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x18U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v25 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x19U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v26 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x1aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v27 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x1bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v28 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x1cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v29 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x1dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v30 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x1eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v31 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x1fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v32 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x20U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v33 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x21U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v34 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x22U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v35 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x23U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v36 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x24U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v37 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x25U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v38 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x26U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v39 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x27U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v40 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x28U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v41 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x29U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v42 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x2aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v43 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x2bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v44 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x2cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v45 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x2dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v46 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x2eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v47 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x2fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v48 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x30U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v49 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x31U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v50 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x32U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v51 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x33U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v52 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x34U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v53 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x35U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v54 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x36U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v55 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x37U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v56 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x38U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v57 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x39U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v58 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x3aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v59 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x3bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v60 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x3cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v61 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x3dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v62 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x3eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v63 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next
            [0x3fU];
    } else {
        __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v64 = 1U;
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2) {
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v0 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0U];
        __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v0 = 1U;
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v1 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [1U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v2 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [2U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v3 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [3U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v4 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [4U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v5 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [5U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v6 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [6U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v7 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [7U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v8 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [8U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v9 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [9U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v10 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0xaU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v11 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0xbU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v12 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0xcU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v13 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0xdU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v14 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0xeU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v15 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0xfU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v16 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x10U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v17 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x11U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v18 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x12U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v19 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x13U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v20 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x14U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v21 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x15U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v22 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x16U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v23 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x17U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v24 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x18U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v25 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x19U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v26 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x1aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v27 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x1bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v28 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x1cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v29 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x1dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v30 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x1eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v31 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x1fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v32 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x20U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v33 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x21U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v34 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x22U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v35 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x23U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v36 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x24U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v37 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x25U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v38 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x26U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v39 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x27U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v40 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x28U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v41 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x29U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v42 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x2aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v43 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x2bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v44 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x2cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v45 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x2dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v46 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x2eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v47 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x2fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v48 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x30U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v49 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x31U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v50 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x32U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v51 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x33U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v52 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x34U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v53 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x35U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v54 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x36U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v55 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x37U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v56 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x38U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v57 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x39U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v58 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x3aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v59 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x3bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v60 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x3cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v61 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x3dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v62 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x3eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v63 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next
            [0x3fU];
    } else {
        __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v64 = 1U;
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2) {
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v0 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0U];
        __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v0 = 1U;
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v1 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [1U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v2 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [2U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v3 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [3U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v4 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [4U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v5 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [5U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v6 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [6U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v7 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [7U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v8 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [8U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v9 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [9U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v10 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0xaU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v11 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0xbU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v12 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0xcU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v13 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0xdU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v14 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0xeU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v15 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0xfU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v16 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x10U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v17 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x11U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v18 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x12U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v19 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x13U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v20 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x14U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v21 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x15U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v22 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x16U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v23 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x17U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v24 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x18U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v25 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x19U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v26 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x1aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v27 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x1bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v28 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x1cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v29 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x1dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v30 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x1eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v31 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x1fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v32 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x20U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v33 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x21U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v34 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x22U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v35 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x23U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v36 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x24U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v37 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x25U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v38 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x26U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v39 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x27U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v40 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x28U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v41 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x29U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v42 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x2aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v43 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x2bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v44 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x2cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v45 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x2dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v46 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x2eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v47 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x2fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v48 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x30U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v49 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x31U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v50 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x32U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v51 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x33U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v52 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x34U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v53 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x35U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v54 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x36U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v55 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x37U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v56 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x38U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v57 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x39U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v58 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x3aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v59 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x3bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v60 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x3cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v61 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x3dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v62 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x3eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v63 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next
            [0x3fU];
    } else {
        __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v64 = 1U;
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2) {
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v0 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0U];
        __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v0 = 1U;
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v1 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [1U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v2 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [2U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v3 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [3U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v4 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [4U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v5 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [5U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v6 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [6U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v7 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [7U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v8 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [8U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v9 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [9U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v10 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0xaU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v11 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0xbU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v12 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0xcU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v13 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0xdU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v14 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0xeU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v15 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0xfU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v16 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x10U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v17 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x11U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v18 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x12U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v19 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x13U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v20 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x14U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v21 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x15U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v22 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x16U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v23 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x17U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v24 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x18U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v25 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x19U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v26 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x1aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v27 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x1bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v28 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x1cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v29 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x1dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v30 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x1eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v31 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x1fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v32 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x20U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v33 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x21U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v34 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x22U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v35 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x23U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v36 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x24U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v37 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x25U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v38 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x26U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v39 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x27U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v40 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x28U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v41 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x29U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v42 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x2aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v43 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x2bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v44 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x2cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v45 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x2dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v46 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x2eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v47 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x2fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v48 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x30U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v49 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x31U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v50 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x32U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v51 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x33U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v52 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x34U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v53 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x35U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v54 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x36U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v55 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x37U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v56 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x38U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v57 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x39U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v58 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x3aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v59 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x3bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v60 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x3cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v61 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x3dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v62 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x3eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v63 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next
            [0x3fU];
    } else {
        __Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v64 = 1U;
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v0) {
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v0;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[1U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v1;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[2U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v2;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[3U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v3;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[4U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v4;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[5U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v5;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[6U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v6;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[7U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v7;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[8U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v8;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[9U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v9;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0xaU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v10;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0xbU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v11;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0xcU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v12;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0xdU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v13;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0xeU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v14;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0xfU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v15;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x10U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v16;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x11U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v17;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x12U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v18;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x13U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v19;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x14U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v20;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x15U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v21;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x16U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v22;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x17U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v23;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x18U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v24;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x19U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v25;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x1aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v26;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x1bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v27;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x1cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v28;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x1dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v29;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x1eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v30;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x1fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v31;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x20U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v32;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x21U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v33;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x22U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v34;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x23U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v35;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x24U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v36;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x25U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v37;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x26U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v38;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x27U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v39;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x28U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v40;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x29U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v41;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x2aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v42;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x2bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v43;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x2cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v44;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x2dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v45;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x2eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v46;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x2fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v47;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x30U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v48;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x31U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v49;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x32U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v50;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x33U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v51;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x34U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v52;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x35U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v53;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x36U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v54;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x37U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v55;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x38U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v56;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x39U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v57;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x3aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v58;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x3bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v59;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x3cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v60;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x3dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v61;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x3eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v62;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[0x3fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v63;
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2__v64) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v0) {
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v0;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[1U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v1;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[2U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v2;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[3U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v3;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[4U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v4;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[5U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v5;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[6U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v6;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[7U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v7;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[8U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v8;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[9U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v9;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0xaU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v10;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0xbU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v11;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0xcU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v12;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0xdU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v13;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0xeU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v14;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0xfU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v15;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x10U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v16;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x11U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v17;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x12U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v18;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x13U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v19;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x14U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v20;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x15U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v21;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x16U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v22;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x17U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v23;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x18U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v24;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x19U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v25;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x1aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v26;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x1bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v27;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x1cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v28;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x1dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v29;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x1eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v30;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x1fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v31;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x20U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v32;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x21U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v33;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x22U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v34;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x23U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v35;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x24U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v36;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x25U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v37;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x26U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v38;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x27U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v39;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x28U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v40;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x29U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v41;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x2aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v42;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x2bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v43;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x2cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v44;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x2dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v45;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x2eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v46;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x2fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v47;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x30U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v48;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x31U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v49;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x32U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v50;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x33U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v51;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x34U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v52;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x35U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v53;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x36U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v54;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x37U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v55;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x38U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v56;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x39U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v57;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x3aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v58;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x3bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v59;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x3cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v60;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x3dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v61;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x3eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v62;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[0x3fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v63;
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1__v64) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v0) {
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v0;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[1U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v1;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[2U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v2;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[3U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v3;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[4U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v4;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[5U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v5;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[6U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v6;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[7U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v7;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[8U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v8;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[9U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v9;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0xaU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v10;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0xbU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v11;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0xcU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v12;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0xdU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v13;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0xeU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v14;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0xfU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v15;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x10U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v16;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x11U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v17;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x12U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v18;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x13U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v19;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x14U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v20;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x15U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v21;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x16U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v22;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x17U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v23;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x18U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v24;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x19U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v25;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x1aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v26;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x1bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v27;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x1cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v28;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x1dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v29;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x1eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v30;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x1fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v31;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x20U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v32;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x21U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v33;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x22U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v34;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x23U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v35;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x24U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v36;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x25U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v37;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x26U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v38;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x27U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v39;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x28U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v40;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x29U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v41;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x2aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v42;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x2bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v43;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x2cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v44;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x2dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v45;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x2eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v46;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x2fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v47;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x30U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v48;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x31U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v49;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x32U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v50;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x33U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v51;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x34U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v52;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x35U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v53;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x36U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v54;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x37U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v55;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x38U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v56;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x39U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v57;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x3aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v58;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x3bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v59;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x3cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v60;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x3dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v61;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x3eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v62;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[0x3fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v63;
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2__v64) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v0) {
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v0;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[1U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v1;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[2U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v2;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[3U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v3;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[4U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v4;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[5U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v5;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[6U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v6;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[7U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v7;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[8U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v8;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[9U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v9;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0xaU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v10;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0xbU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v11;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0xcU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v12;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0xdU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v13;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0xeU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v14;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0xfU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v15;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x10U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v16;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x11U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v17;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x12U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v18;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x13U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v19;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x14U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v20;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x15U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v21;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x16U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v22;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x17U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v23;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x18U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v24;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x19U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v25;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x1aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v26;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x1bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v27;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x1cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v28;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x1dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v29;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x1eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v30;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x1fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v31;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x20U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v32;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x21U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v33;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x22U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v34;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x23U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v35;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x24U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v36;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x25U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v37;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x26U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v38;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x27U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v39;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x28U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v40;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x29U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v41;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x2aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v42;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x2bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v43;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x2cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v44;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x2dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v45;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x2eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v46;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x2fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v47;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x30U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v48;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x31U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v49;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x32U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v50;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x33U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v51;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x34U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v52;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x35U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v53;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x36U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v54;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x37U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v55;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x38U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v56;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x39U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v57;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x3aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v58;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x3bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v59;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x3cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v60;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x3dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v61;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x3eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v62;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[0x3fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v63;
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1__v64) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__14(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__14\n"); );
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2 
        = ((IData)(vlSelf->rst) & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r1));
    vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2 
        = ((IData)(vlSelf->rst) & (IData)(vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r1));
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r2 
        = ((IData)(vlSelf->rst) & (IData)(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r1));
    vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2 
        = ((IData)(vlSelf->rst) & (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r1));
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2 
        = ((IData)(vlSelf->rst) & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r1));
    vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2 
        = ((IData)(vlSelf->rst) & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r1));
    vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2 
        = ((IData)(vlSelf->rst) & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r1));
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2 
        = ((IData)(vlSelf->rst) & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r1));
    vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r1 
        = vlSelf->rst;
    vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r1 
        = vlSelf->rst;
    vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r1 
        = vlSelf->rst;
    vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r1 
        = vlSelf->rst;
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r1 
        = vlSelf->rst;
    vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r1 
        = vlSelf->rst;
    vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r1 
        = vlSelf->rst;
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r1 
        = vlSelf->rst;
}

extern const VlUnpacked<SData/*15:0*/, 16> Vysyx_22041461_CPU__ConstPool__TABLE_e6aad71a_0;

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__15(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__15\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_pc_out = vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_pc_out;
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_imm_out 
        = vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_imm_out;
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs1_out 
        = vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_rs1_out;
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_zimm_out 
        = vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_zimm_out;
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out 
        = vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_csr_out;
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out = vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_rd_out;
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out 
        = vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out;
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out 
        = vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out;
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out 
        = vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_valid_out;
    vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
        = vlSelf->__Vdly__ysyx_22041461_CPU__DOT__MEMreg_EXE_out;
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen 
        = (IData)((8U == (0xcU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))));
    __Vtableidx1 = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out;
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask 
        = Vysyx_22041461_CPU__ConstPool__TABLE_e6aad71a_0
        [__Vtableidx1];
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
    vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out) 
           & (IData)((8U == (0xcU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out)))));
    if ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                       >> 2U)))) {
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
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__16(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__16\n"); );
    // Body
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
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__17(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__17\n"); );
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
        [vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out];
    if ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                       >> 2U)))) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wdata1 
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
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wdata2 
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
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wdata1 
            = ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                           ? (vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
                                              << 0x18U)
                                           : (vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
                                              << 0x10U))
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                    ? (vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
                       << 8U) : vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wdata2 
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
    }
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__18(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__18\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp82;
    VlWide<4>/*127:0*/ __Vtemp83;
    VlWide<4>/*127:0*/ __Vtemp84;
    VlWide<4>/*127:0*/ __Vtemp85;
    VlWide<4>/*127:0*/ __Vtemp86;
    VlWide<4>/*127:0*/ __Vtemp87;
    VlWide<4>/*127:0*/ __Vtemp88;
    VlWide<4>/*127:0*/ __Vtemp89;
    VlWide<4>/*127:0*/ __Vtemp90;
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_rs1_data 
        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
        [vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out];
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
                    VL_EXTENDS_WQ(128,64, __Vtemp82, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1);
                    VL_EXTENDS_WQ(128,64, __Vtemp83, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
                    VL_MULS_WWW(128,128,128, __Vtemp84, __Vtemp82, __Vtemp83);
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                        = __Vtemp84[0U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] 
                        = __Vtemp84[1U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] 
                        = __Vtemp84[2U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] 
                        = __Vtemp84[3U];
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
                    VL_EXTEND_WQ(128,64, __Vtemp85, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1);
                    VL_EXTEND_WQ(128,64, __Vtemp86, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
                    VL_MUL_W(4, __Vtemp87, __Vtemp85, __Vtemp86);
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                        = __Vtemp87[0U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] 
                        = __Vtemp87[1U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] 
                        = __Vtemp87[2U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] 
                        = __Vtemp87[3U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE_out 
                        = (((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U])));
                } else {
                    VL_EXTENDS_WQ(128,64, __Vtemp88, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1);
                    VL_EXTENDS_WQ(128,64, __Vtemp89, vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2);
                    VL_MULS_WWW(128,128,128, __Vtemp90, __Vtemp88, __Vtemp89);
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[0U] 
                        = __Vtemp90[0U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[1U] 
                        = __Vtemp90[1U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[2U] 
                        = __Vtemp90[2U];
                    vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle[3U] 
                        = __Vtemp90[3U];
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
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__19(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__19\n"); );
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__num 
        = vlSelf->__Vdly__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__num;
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__20(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__20\n"); );
    // Variables
    CData/*5:0*/ __Vdlyvdim0__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0;
    // Body
    if ((1U & (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid)) 
                  | (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                        & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2)))))))) {
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[0U] 
                & (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[0U])) 
               | (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                     >> 3U)))][0U] 
                  & vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[0U]));
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[1U] 
                & (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[1U])) 
               | (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                     >> 3U)))][1U] 
                  & vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[1U]));
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[2U] 
                & (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[2U])) 
               | (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                     >> 3U)))][2U] 
                  & vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[2U]));
        __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[3U] 
                & (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[3U])) 
               | (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                     >> 3U)))][3U] 
                  & vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[3U]));
        vlSelf->__Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                >> 3U)));
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid)) 
               | (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                     & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2))))))) {
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[0U] 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                               >> 3U)))][0U];
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[1U] 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                               >> 3U)))][1U];
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[2U] 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                               >> 3U)))][2U];
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[3U] 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                               >> 3U)))][3U];
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[0U] = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[1U] = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[2U] = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0) {
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram[__Vdlyvdim0__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0[0U];
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram[__Vdlyvdim0__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0[1U];
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram[__Vdlyvdim0__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0[2U];
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram[__Vdlyvdim0__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__21(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__21\n"); );
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs1_data 
        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
        [(0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                   >> 0xfU))];
    vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs2_data 
        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
        [(0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                   >> 0x14U))];
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
    vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_valid = 1U;
    if (vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out) {
        if (vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_valid = 0U;
        }
    }
    vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid = 1U;
    if (vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out) {
        if (vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl) {
            vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid = 0U;
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
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__22(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__22\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp101;
    VlWide<4>/*127:0*/ __Vtemp102;
    IData/*31:0*/ __Vilp;
    // Body
    if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
            = ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))
                ? 0ULL : (8ULL + vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask 
            = ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))
                ? 0U : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask2));
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
            = vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask1;
    }
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__inmemory 
        = ((0x8fffffffULL >= vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr) 
           & (0x80000000ULL <= vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr));
    if ((2U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))) {
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__pmem_read__74__rdata);
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata 
            = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__pmem_read__74__rdata;
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata 
            = ((0U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))
                ? 0ULL : vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata);
    }
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1 
        = (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
           [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                              >> 3U)))] & (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                               >> 9U)));
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2 
        = (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
           [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                              >> 3U)))] & (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                               >> 9U)));
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next[__Vilp] 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                   & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))) {
            if (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                       >> 3U)))]) {
                    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                                                >> 3U)))] = 1U;
                }
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                                                >> 3U)))] = 1U;
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next[__Vilp] 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                   & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))) {
            if (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                   >> 3U)))]) {
                if ((1U & (~ vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                           [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                              >> 3U)))]))) {
                    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                                                >> 3U)))] = 1U;
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next[__Vilp] 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                   & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))) {
            if (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                       >> 3U)))]) {
                    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                                                >> 3U)))] 
                        = (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                           >> 9U);
                }
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag1_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                                                >> 3U)))] 
                    = (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                       >> 9U);
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next[__Vilp] 
            = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                   & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))) {
            if (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                   >> 3U)))]) {
                if ((1U & (~ vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                           [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                              >> 3U)))]))) {
                    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__tag2_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                                                >> 3U)))] 
                        = (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                           >> 9U);
                }
            }
        }
    }
    __Vtemp101[0U] = (IData)((~ (((QData)((IData)((
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                   >> 7U)))) 
                                                    << 0x18U) 
                                                   | ((0xff0000U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                         >> 6U)))) 
                                                          << 0x10U)) 
                                                      | ((0xff00U 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                            >> 5U)))) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                             >> 4U)))))))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                               >> 3U)))) 
                                                                << 0x18U) 
                                                               | ((0xff0000U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                                >> 2U)))) 
                                                                      << 0x10U)) 
                                                                  | ((0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                                >> 1U)))) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask)))))))))))));
    __Vtemp101[1U] = (IData)(((~ (((QData)((IData)(
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                    >> 7U)))) 
                                                     << 0x18U) 
                                                    | ((0xff0000U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                          >> 6U)))) 
                                                           << 0x10U)) 
                                                       | ((0xff00U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                             >> 5U)))) 
                                                              << 8U)) 
                                                          | (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                              >> 4U)))))))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((- (IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                                >> 3U)))) 
                                                                 << 0x18U) 
                                                                | ((0xff0000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                                >> 2U)))) 
                                                                       << 0x10U)) 
                                                                   | ((0xff00U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                                >> 1U)))) 
                                                                          << 8U)) 
                                                                      | (0xffU 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask)))))))))))) 
                              >> 0x20U));
    __Vtemp102[2U] = (IData)((~ (((QData)((IData)((
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                   >> 7U)))) 
                                                    << 0x18U) 
                                                   | ((0xff0000U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                         >> 6U)))) 
                                                          << 0x10U)) 
                                                      | ((0xff00U 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                            >> 5U)))) 
                                                             << 8U)) 
                                                         | (0xffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                             >> 4U)))))))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                               >> 3U)))) 
                                                                << 0x18U) 
                                                               | ((0xff0000U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                                >> 2U)))) 
                                                                      << 0x10U)) 
                                                                  | ((0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                                >> 1U)))) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask)))))))))))));
    __Vtemp102[3U] = (IData)(((~ (((QData)((IData)(
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                    >> 7U)))) 
                                                     << 0x18U) 
                                                    | ((0xff0000U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                          >> 6U)))) 
                                                           << 0x10U)) 
                                                       | ((0xff00U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                             >> 5U)))) 
                                                              << 8U)) 
                                                          | (0xffU 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                              >> 4U)))))))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               (((- (IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                                >> 3U)))) 
                                                                 << 0x18U) 
                                                                | ((0xff0000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                                >> 2U)))) 
                                                                       << 0x10U)) 
                                                                   | ((0xff00U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask) 
                                                                                >> 1U)))) 
                                                                          << 8U)) 
                                                                      | (0xffU 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask)))))))))))) 
                              >> 0x20U));
    if ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[0U] 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                    ? __Vtemp101[0U] : 0xffffffffU)
                : (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                   [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                      >> 3U)))] ? (
                                                   vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                               >> 3U)))]
                                                    ? 0U
                                                    : 0xffffffffU)
                    : 0U));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[1U] 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                    ? __Vtemp101[1U] : 0xffffffffU)
                : (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                   [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                      >> 3U)))] ? (
                                                   vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                               >> 3U)))]
                                                    ? 0U
                                                    : 0xffffffffU)
                    : 0U));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[2U] 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                    ? 0xffffffffU : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                      ? __Vtemp102[2U]
                                      : 0xffffffffU))
                : (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                   [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                      >> 3U)))] ? (
                                                   vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U)
                    : 0xffffffffU));
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[3U] 
            = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                    ? 0xffffffffU : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                      ? __Vtemp102[3U]
                                      : 0xffffffffU))
                : (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                   [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                      >> 3U)))] ? (
                                                   vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr 
                                                               >> 3U)))]
                                                    ? 0xffffffffU
                                                    : 0U)
                    : 0xffffffffU));
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[0U] = 0xffffffffU;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[1U] = 0xffffffffU;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[2U] = 0xffffffffU;
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_BWEN[3U] = 0xffffffffU;
    }
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__23(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__23\n"); );
    // Body
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
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__24(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__24\n"); );
    // Body
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
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__busy 
        = (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out) 
            & (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_MEM_valid)) 
           & (0U != (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out)));
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__25(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__25\n"); );
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wdata 
        = ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))
            ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))
                ? 0ULL : vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wdata2)
            : vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wdata1);
    if ((4U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))) {
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__pmem_write_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_addr, vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wdata, (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_mask));
    }
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__26(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__26\n"); );
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc = vlSelf->__Vdly__ysyx_22041461_CPU__DOT__IFreg_pc;
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__27(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__27\n"); );
    // Body
    if (vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out) {
        if (((((7U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl)) 
               & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out))) 
              & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out))) 
             & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_valid_out)))) {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__ID__DOT__ebreak_TOP();
        }
    }
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
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__28(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__28\n"); );
    // Body
    if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid 
            = (1U & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state)));
        vlSelf->ysyx_22041461_CPU__DOT__MEM_ok = (1U 
                                                  & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state));
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid 
            = (1U & ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))
                      ? (5U != (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))
                      : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__busy)));
        vlSelf->ysyx_22041461_CPU__DOT__MEM_ok = (1U 
                                                  & ((1U 
                                                      & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))
                                                      ? 
                                                     (5U 
                                                      == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__state))
                                                      : 
                                                     (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__busy))));
    }
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_rdata 
        = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid)
            ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                ? 0ULL : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__inmemory)
                           ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                               ? (((QData)((IData)(
                                                   vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[0U])))
                               : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                   ? (((QData)((IData)(
                                                       vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[2U])))
                                   : 0ULL)) : vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata))
            : 0ULL);
    vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable = 1U;
    if ((1U & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM_ok)))) {
        vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable = 0U;
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read) {
        if (vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable = 0U;
            }
        }
    }
    if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))) {
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata1 = 0ULL;
        }
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata1 
            = ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))
                ? vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_rdata
                : 0ULL);
    }
    if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata2 
            = ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state))
                ? 0ULL : vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_rdata);
    } else if ((1U & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__state)))) {
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata2 = 0ULL;
    }
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata 
        = ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                          >> 2U))) ? ((1U & (IData)(
                                                    (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                     >> 1U)))
                                       ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                           ? ((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata2 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata1 
                                                                            >> 0x38U))))))
                                           : ((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata2 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata1 
                                                                            >> 0x30U)))))))
                                       : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                           ? ((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata2 
                                               << 0x18U) 
                                              | (QData)((IData)(
                                                                (0xffffffU 
                                                                 & (IData)(
                                                                           (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata1 
                                                                            >> 0x28U))))))
                                           : (((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata2)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata1 
                                                                 >> 0x20U))))))
            : ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                              >> 1U))) ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                                           ? (((QData)((IData)(
                                                               (0xffffffU 
                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata2)))) 
                                               << 0x28U) 
                                              | (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata1 
                                                 >> 0x18U))
                                           : (((QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata2)))) 
                                               << 0x30U) 
                                              | (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata1 
                                                 >> 0x10U)))
                : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))
                    ? (((QData)((IData)((0xffU & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata2)))) 
                        << 0x38U) | (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata1 
                                     >> 8U)) : vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rdata1)));
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__29(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__29\n"); );
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1 
        = (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1
           [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                               >> 9U)));
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2 
        = (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2
           [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                              >> 3U)))] & (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2
                                           [(0x3fU 
                                             & (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                                        >> 3U)))] 
                                           == (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                               >> 9U)));
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__30(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__30\n"); );
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable = 1U;
    if ((1U & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM_ok)))) {
        vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable = 0U;
    }
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
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__31(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__31\n"); );
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 1U;
    if ((1U & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM_ok)))) {
        vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable = 0U;
    }
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

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__32(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__32\n"); );
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next[__Vilp] 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                   & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2))))) {
            if (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                                                                >> 3U)))] = 1U;
                }
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1_next[(0x3fU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                                                                >> 3U)))] = 1U;
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next[__Vilp] 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                   & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2))))) {
            if (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if ((1U & (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2
                           [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                              >> 3U)))]))) {
                    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                                                                >> 3U)))] = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[0U] = 0xffffffffU;
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[1U] = 0xffffffffU;
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[2U] = 0xffffffffU;
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[3U] = 0xffffffffU;
    if (vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                   & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2))))) {
            if (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                   >> 3U)))]) {
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[0U] 
                    = (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2
                       [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                          >> 3U)))]
                        ? 0U : 0xffffffffU);
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[1U] 
                    = (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2
                       [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                          >> 3U)))]
                        ? 0U : 0xffffffffU);
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[2U] 
                    = (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2
                       [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                          >> 3U)))]
                        ? 0xffffffffU : 0U);
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[3U] 
                    = (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2
                       [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                          >> 3U)))]
                        ? 0xffffffffU : 0U);
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[0U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[1U] = 0U;
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[2U] = 0xffffffffU;
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[3U] = 0xffffffffU;
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next[__Vilp] 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                   & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2))))) {
            if (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2
                    [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                       >> 3U)))]) {
                    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                        = (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                           >> 9U);
                }
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag1_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                    = (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                       >> 9U);
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next[__Vilp] 
            = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                   & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2))))) {
            if (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                   >> 3U)))]) {
                if ((1U & (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2
                           [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                              >> 3U)))]))) {
                    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__tag2_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                        = (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                           >> 9U);
                }
            }
        }
    }
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___combo__TOP__33(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___combo__TOP__33\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp124;
    VlWide<4>/*127:0*/ __Vtemp128;
    // Body
    if (vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid) {
        if (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2) {
            if ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                       & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2))))) {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__pmem_read__1__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__AXI_rdata 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__pmem_read__1__rdata;
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__AXI_rdata = 0ULL;
            }
        } else {
            vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__AXI_rdata = 0ULL;
        }
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__AXI_rdata = 0ULL;
    }
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[0U] = 0U;
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[1U] = 0U;
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[2U] = 0U;
    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[3U] = 0U;
    if (vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid) {
        if ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                   & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2))))) {
            VL_EXTEND_WQ(128,64, __Vtemp124, vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__AXI_rdata);
            VL_EXTEND_WQ(128,64, __Vtemp128, vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__AXI_rdata);
            if (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V1
                [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                   >> 3U)))]) {
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[0U] 
                    = (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2
                       [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                          >> 3U)))]
                        ? __Vtemp124[0U] : 0U);
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[1U] 
                    = (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2
                       [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                          >> 3U)))]
                        ? __Vtemp124[1U] : 0U);
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[2U] 
                    = (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2
                       [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                          >> 3U)))]
                        ? __Vtemp124[2U] : (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__AXI_rdata));
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[3U] 
                    = (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__V2
                       [(0x3fU & (IData)((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                          >> 3U)))]
                        ? __Vtemp124[3U] : (IData)(
                                                   (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__AXI_rdata 
                                                    >> 0x20U)));
            } else {
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[0U] 
                    = __Vtemp128[0U];
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[1U] 
                    = __Vtemp128[1U];
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[2U] 
                    = __Vtemp128[2U];
                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in[3U] 
                    = __Vtemp128[3U];
            }
        }
    }
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__34(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__34\n"); );
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__IF_valid_out = 0U;
    if (vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid) {
        if (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__num) {
            if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1) 
                 | (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2))) {
                vlSelf->ysyx_22041461_CPU__DOT__IF_valid_out = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___multiclk__TOP__35(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___multiclk__TOP__35\n"); );
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 1U;
    if ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF_valid_out)) 
               & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl))))) {
        vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM_ok)))) {
        vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable = 0U;
    }
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
}

void Vysyx_22041461_CPU___024root___eval(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__2(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2))))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__5(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__9(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__11(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__18(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2))))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__19(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__20(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__22(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
           | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2)) 
              & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__23(vlSelf);
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
           | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2)) 
              & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__25(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__26(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((((((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
             | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2)) 
                & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2))) 
            | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2)) 
               & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2))) 
           | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)) 
              & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__27(vlSelf);
    }
    if ((((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
           | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2)) 
              & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__28(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if (((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__29(vlSelf);
    }
    if (((((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
            | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2)) 
               & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2))) 
           | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2)) 
              & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__30(vlSelf);
    }
    if (((((((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
              | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2)) 
                 & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2))) 
             | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2)) 
                & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2))) 
            | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2)) 
               & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2))) 
           | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)) 
              & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__31(vlSelf);
    }
    if (((((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
            | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2)) 
               & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2))) 
           | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2)) 
              & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__32(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    Vysyx_22041461_CPU___024root___combo__TOP__33(vlSelf);
    vlSelf->__Vm_traceActivity[0x13U] = 1U;
    if (((((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
            | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2)) 
               & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2))) 
           | ((IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2) 
              ^ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__34(vlSelf);
    }
    if (((((((((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
                | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2)) 
                   & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2))) 
               | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2)) 
                  & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2))) 
              | ((IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2) 
                 ^ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2))) 
             | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2)) 
                & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2))) 
            | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2)) 
               & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2))) 
           | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)) 
              & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)))) {
        Vysyx_22041461_CPU___024root___multiclk__TOP__35(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2 
        = vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2;
    vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2;
    vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2;
    vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r2;
    vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2;
    vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2;
    vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2;
    vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2;
    vlSelf->__VinpClk__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2;
}

QData Vysyx_22041461_CPU___024root___change_request_1(Vysyx_22041461_CPU___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22041461_CPU___024root___change_request(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___change_request\n"); );
    // Body
    return (Vysyx_22041461_CPU___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22041461_CPU___024root___change_request_1(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2)
         | (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2)
         | (vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2)
         | (vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2)
         | (vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2)
         | (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2)
         | (vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2)
         | (vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2));
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_22041461_IF_reg.v:20: ysyx_22041461_CPU.IF_reg.rst_r2\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_22041461_ICACHE.v:214: ysyx_22041461_CPU.IF.ICACHE.rst_r2\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_22041461_ID_reg.v:21: ysyx_22041461_CPU.ID_reg.rst_r2\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_22041461_EXE_reg.v:40: ysyx_22041461_CPU.EXE_reg.rst_r2\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_22041461_MEM_reg.v:38: ysyx_22041461_CPU.MEM_reg.rst_r2\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_22041461_MEM.v:160: ysyx_22041461_CPU.MEM.rst_r2\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_22041461_WB_reg.v:36: ysyx_22041461_CPU.WB_reg.rst_r2\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r2 ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_22041461_WB.v:63: ysyx_22041461_CPU.WB.rst_r2\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2;
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2;
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2;
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2;
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2;
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rst_r2;
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2;
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__WB__DOT__rst_r2 
        = vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r2;
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22041461_CPU___024root___eval_debug_assertions(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
