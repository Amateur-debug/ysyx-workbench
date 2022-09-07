// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22041461_CPU.h for the primary calling header

#include "Vysyx_22041461_CPU___024root.h"
#include "Vysyx_22041461_CPU__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void ebreak();

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
}

extern "C" void invalid_inst();

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__invalid_inst_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__invalid_inst_TOP\n"); );
    // Body
    invalid_inst();
}

extern "C" void set_pc_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__PC__DOT__set_pc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__PC__DOT__set_pc_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_pc_ptr(&a__Vopenarray);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__REGS__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__REGS__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void set_difftest_next();

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__set_difftest_next_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__set_difftest_next_TOP\n"); );
    // Body
    set_difftest_next();
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___sequent__TOP__2(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__REGS__DOT__x__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22041461_CPU__DOT__REGS__DOT__x__v64;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v1;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v2;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v3;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v4;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v5;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v6;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v7;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v8;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v9;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v10;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v11;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v12;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v13;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v14;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v15;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v16;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v17;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v18;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v19;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v20;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v21;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v22;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v23;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v24;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v25;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v26;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v27;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v28;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v29;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v30;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v31;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v32;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v33;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v34;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v35;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v36;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v37;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v38;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v39;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v40;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v41;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v42;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v43;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v44;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v45;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v46;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v47;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v48;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v49;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v50;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v51;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v52;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v53;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v54;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v55;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v56;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v57;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v58;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v59;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v60;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v61;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v62;
    QData/*63:0*/ __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v63;
    // Body
    vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__j = 0x40U;
    if (vlSelf->rst) {
        if (((((8U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM)) 
               | (9U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) 
              | (0xaU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) 
             | (0xbU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM)))) {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_write_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data1, (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask1));
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_write_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data2, (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask2));
        }
    }
    __Vdlyvset__ysyx_22041461_CPU__DOT__REGS__DOT__x__v0 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__REGS__DOT__x__v64 = 0U;
    vlSelf->pc = ((IData)(vlSelf->rst) ? vlSelf->ysyx_22041461_CPU__DOT__PC__DOT__npc
                   : 0x80000000ULL);
    if (vlSelf->rst) {
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v0 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0U];
        __Vdlyvset__ysyx_22041461_CPU__DOT__REGS__DOT__x__v0 = 1U;
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v1 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [1U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v2 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [2U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v3 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [3U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v4 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [4U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v5 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [5U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v6 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [6U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v7 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [7U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v8 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [8U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v9 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [9U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v10 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0xaU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v11 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0xbU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v12 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0xcU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v13 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0xdU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v14 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0xeU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v15 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0xfU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v16 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x10U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v17 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x11U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v18 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x12U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v19 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x13U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v20 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x14U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v21 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x15U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v22 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x16U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v23 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x17U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v24 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x18U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v25 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x19U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v26 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x1aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v27 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x1bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v28 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x1cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v29 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x1dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v30 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x1eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v31 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x1fU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v32 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v33 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [1U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v34 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [2U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v35 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [3U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v36 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [4U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v37 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [5U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v38 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [6U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v39 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [7U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v40 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [8U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v41 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [9U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v42 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0xaU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v43 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0xbU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v44 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0xcU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v45 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0xdU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v46 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0xeU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v47 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0xfU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v48 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x10U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v49 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x11U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v50 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x12U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v51 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x13U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v52 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x14U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v53 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x15U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v54 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x16U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v55 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x17U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v56 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x18U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v57 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x19U];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v58 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x1aU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v59 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x1bU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v60 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x1cU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v61 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x1dU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v62 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x1eU];
        __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v63 
            = vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d
            [0x1fU];
    } else {
        __Vdlyvset__ysyx_22041461_CPU__DOT__REGS__DOT__x__v64 = 1U;
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__REGS__DOT__x__v0) {
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v0;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[1U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v1;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[2U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v2;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[3U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v3;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[4U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v4;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[5U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v5;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[6U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v6;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[7U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v7;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[8U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v8;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[9U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v9;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xaU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v10;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xbU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v11;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xcU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v12;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xdU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v13;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xeU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v14;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xfU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v15;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x10U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v16;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x11U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v17;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x12U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v18;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x13U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v19;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x14U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v20;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x15U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v21;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x16U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v22;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x17U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v23;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x18U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v24;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x19U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v25;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v26;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v27;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v28;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v29;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v30;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v31;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v32;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[1U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v33;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[2U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v34;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[3U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v35;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[4U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v36;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[5U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v37;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[6U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v38;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[7U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v39;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[8U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v40;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[9U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v41;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xaU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v42;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xbU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v43;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xcU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v44;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xdU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v45;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xeU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v46;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xfU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v47;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x10U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v48;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x11U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v49;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x12U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v50;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x13U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v51;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x14U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v52;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x15U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v53;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x16U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v54;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x17U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v55;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x18U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v56;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x19U] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v57;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1aU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v58;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1bU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v59;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1cU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v60;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1dU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v61;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1eU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v62;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1fU] 
            = __Vdlyvval__ysyx_22041461_CPU__DOT__REGS__DOT__x__v63;
    }
    if (__Vdlyvset__ysyx_22041461_CPU__DOT__REGS__DOT__x__v64) {
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[1U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[2U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[3U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[4U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[5U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[6U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[7U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[8U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[9U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xaU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xbU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xcU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xdU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xeU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xfU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x10U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x11U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x12U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x13U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x14U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x15U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x16U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x17U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x18U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x19U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1aU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1bU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1cU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1dU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1eU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1fU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[1U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[2U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[3U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[4U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[5U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[6U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[7U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[8U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[9U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xaU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xbU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xcU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xdU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xeU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0xfU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x10U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x11U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x12U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x13U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x14U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x15U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x16U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x17U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x18U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x19U] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1aU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1bU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1cU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1dU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1eU] = 0ULL;
        vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0x1fU] = 0ULL;
    }
    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__56__rdata);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rinst 
        = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__56__rdata;
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
    vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src1 
        = vlSelf->ysyx_22041461_CPU__DOT__rs1_data;
}

extern const VlUnpacked<SData/*15:0*/, 16> Vysyx_22041461_CPU__ConstPool__TABLE_36a1c83b_0;

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___combo__TOP__4(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___combo__TOP__4\n"); );
    // Variables
    CData/*3:0*/ __Vtableidx1;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp23;
    VlWide<3>/*95:0*/ __Vtemp24;
    VlWide<4>/*127:0*/ __Vtemp26;
    VlWide<4>/*127:0*/ __Vtemp27;
    VlWide<4>/*127:0*/ __Vtemp28;
    VlWide<4>/*127:0*/ __Vtemp29;
    VlWide<4>/*127:0*/ __Vtemp30;
    VlWide<4>/*127:0*/ __Vtemp31;
    VlWide<4>/*127:0*/ __Vtemp32;
    VlWide<4>/*127:0*/ __Vtemp33;
    VlWide<4>/*127:0*/ __Vtemp34;
    VlWide<4>/*127:0*/ __Vtemp35;
    VlWide<4>/*127:0*/ __Vtemp36;
    VlWide<4>/*127:0*/ __Vtemp37;
    VlWide<4>/*127:0*/ __Vtemp38;
    VlWide<4>/*127:0*/ __Vtemp39;
    VlWide<4>/*127:0*/ __Vtemp40;
    // Body
    if (((((((((0x33U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)) 
               | (0x3bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
              | (0x40000033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
             | (0x103bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
            | (0x7033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
           | (0x3033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
          | (0x6033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
         | (0x200003bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)))) {
        if ((0x33U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x3bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x40000033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x103bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x7033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x3033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x6033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        }
    } else if (((((((((0x200403bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)) 
                      | (0x200603bU == (0xfe00707fU 
                                        & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                    | (0x200703bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                   | (0x4000003bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                  | (0x2033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                 | (0x2000033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                | (0x4000503bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)))) {
        if ((0x200403bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x200603bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x2007033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x200703bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x4000003bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x2033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x2000033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        }
    } else if (((((((((0x503bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)) 
                      | (0x2005033U == (0xfe00707fU 
                                        & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                     | (0x4033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                    | (0x1033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                   | (0x200503bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                  | (0x13U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                 | (0x67U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                | (0x1013U == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)))) {
        if ((0x503bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x2005033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x4033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x1033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x200503bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x13U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__0__Vfuncout;
        } else if ((0x67U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__1__Vfuncout;
        } else {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__2__Vfuncout;
        }
    } else if (((((((((0x2003U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)) 
                      | (0x3013U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                     | (0x2013U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                    | (0x1bU == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                   | (0x3003U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                  | (0x40005013U == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                 | (0x4003U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                | (0x7013U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)))) {
        if ((0x2003U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__3__Vfuncout;
        } else if ((0x3013U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__4__Vfuncout;
        } else if ((0x2013U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__5__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__5__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__5__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__5__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__5__Vfuncout;
        } else if ((0x1bU == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__6__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__6__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__6__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__6__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__6__Vfuncout;
        } else if ((0x3003U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__7__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__7__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__7__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__7__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__7__Vfuncout;
        } else if ((0x40005013U == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__8__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__8__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__8__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__8__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__8__Vfuncout;
        } else if ((0x4003U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__9__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__9__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__9__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__9__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__9__Vfuncout;
        } else {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__10__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__10__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__10__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__10__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__10__Vfuncout;
        }
    } else if (((((((((0x4013U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)) 
                      | (0x5013U == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                     | (0x1003U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                    | (0x5003U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                   | (0x101bU == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                  | (0x4000501bU == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                 | (0x501bU == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                | (0x6003U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)))) {
        if ((0x4013U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__11__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__11__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__11__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__11__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__11__Vfuncout;
        } else if ((0x5013U == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__12__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__12__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__12__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__12__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__12__Vfuncout;
        } else if ((0x1003U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__13__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__13__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__13__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__13__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__13__Vfuncout;
        } else if ((0x5003U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__14__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
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
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 6U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__14__Vfuncout;
        } else if ((0x101bU == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__15__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__15__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__15__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__15__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__15__Vfuncout;
        } else if ((0x4000501bU == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__16__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__16__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__16__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__16__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__16__Vfuncout;
        } else if ((0x501bU == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__17__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__17__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__17__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__17__INST 
                                                >> 0x14U))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0x1dU;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__17__Vfuncout;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS 
                = ((1U & (IData)((vlSelf->ysyx_22041461_CPU__DOT__imm 
                                  >> 5U))) ? 0U : 1U);
        } else {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__18__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__18__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__18__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__18__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__18__Vfuncout;
        }
    } else if (((((((((0x6013U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)) 
                      | (3U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                     | (0x3023U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                    | (0x1023U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                   | (0x23U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                  | (0x2023U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                 | (0x63U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                | (0x1063U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)))) {
        if ((0x6013U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__19__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__19__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__19__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__19__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__19__Vfuncout;
        } else if ((3U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__20__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__20__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__20__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__20__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immI__20__Vfuncout;
        } else if ((0x3023U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__21__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__21__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__21__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__21__INST 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__21__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__21__Vfuncout;
        } else if ((0x1023U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__22__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__22__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__22__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__22__INST 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__22__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__22__Vfuncout;
        } else if ((0x23U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__23__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__23__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__23__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__23__INST 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__23__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__23__Vfuncout;
        } else if ((0x2023U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__24__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__24__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__24__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__24__INST 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__24__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__24__Vfuncout;
        } else if ((0x63U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__25__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__25__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__25__INST 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__25__INST 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__25__INST 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__25__INST 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__25__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__25__Vfuncout;
        } else {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__26__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__26__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__26__INST 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__26__INST 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__26__INST 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__26__INST 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__26__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__26__Vfuncout;
        }
    } else if (((((((((0x5063U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)) 
                      | (0x7063U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                     | (0x6063U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                    | (0x4063U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                   | (0x17U == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                  | (0x37U == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                 | (0x6fU == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
                | (0x100073U == vlSelf->ysyx_22041461_CPU__DOT__inst))) {
        if ((0x5063U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__27__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__27__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__27__INST 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__27__INST 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__27__INST 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__27__INST 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__27__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__27__Vfuncout;
        } else if ((0x7063U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__28__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__28__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__28__INST 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__28__INST 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__28__INST 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__28__INST 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__28__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__28__Vfuncout;
        } else if ((0x6063U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__29__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
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
                = ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out))
                    ? 1U : 0U);
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__29__Vfuncout;
        } else if ((0x4063U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__30__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
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
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC 
                = ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out))
                    ? 1U : 0U);
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__30__Vfuncout;
        } else if ((0x17U == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__31__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__31__Vfuncout 
                = (((QData)((IData)((- (IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__31__INST 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__31__INST))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__31__Vfuncout;
        } else if ((0x37U == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__32__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__32__Vfuncout 
                = (((QData)((IData)((- (IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__32__INST 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__32__INST))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 4U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__32__Vfuncout;
        } else if ((0x6fU == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__33__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__33__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__33__INST 
                                        >> 0x1fU)))) 
                    << 0x15U) | (QData)((IData)(((0x100000U 
                                                  & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__33__INST 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__33__INST) 
                                                    | ((0x800U 
                                                        & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__33__INST 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__33__INST 
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
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__33__Vfuncout;
        } else {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__ebreak_TOP();
        }
    } else {
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__invalid_inst_TOP();
    }
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
    VL_EXTEND_WQ(65,64, __Vtemp22, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp23, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
    VL_ADD_W(3, __Vtemp24, __Vtemp22, __Vtemp23);
    vlSelf->flag = (1U & __Vtemp24[2U]);
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
            VL_EXTEND_WQ(128,64, __Vtemp26, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1);
            VL_EXTEND_WQ(128,64, __Vtemp27, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
            VL_MUL_W(4, __Vtemp28, __Vtemp26, __Vtemp27);
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] 
                = __Vtemp28[0U];
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] 
                = __Vtemp28[1U];
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] 
                = __Vtemp28[2U];
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] 
                = __Vtemp28[3U];
            vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out 
                = (((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U])));
        }
    } else if ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
        if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
            if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
                if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
                    VL_EXTENDS_WQ(128,64, __Vtemp29, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1);
                    VL_EXTENDS_WQ(128,64, __Vtemp30, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
                    VL_MULS_WWW(128,128,128, __Vtemp31, __Vtemp29, __Vtemp30);
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] 
                        = __Vtemp31[0U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] 
                        = __Vtemp31[1U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] 
                        = __Vtemp31[2U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] 
                        = __Vtemp31[3U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out 
                        = (((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U])));
                } else {
                    VL_EXTEND_WQ(128,64, __Vtemp32, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1);
                    VL_EXTEND_WQ(128,64, __Vtemp33, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
                    VL_MUL_W(4, __Vtemp34, __Vtemp32, __Vtemp33);
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] 
                        = __Vtemp34[0U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] 
                        = __Vtemp34[1U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] 
                        = __Vtemp34[2U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] 
                        = __Vtemp34[3U];
                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out 
                        = (((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U])));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))) {
                VL_EXTEND_WQ(128,64, __Vtemp35, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1);
                VL_EXTEND_WQ(128,64, __Vtemp36, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
                VL_MUL_W(4, __Vtemp37, __Vtemp35, __Vtemp36);
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] 
                    = __Vtemp37[0U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] 
                    = __Vtemp37[1U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] 
                    = __Vtemp37[2U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] 
                    = __Vtemp37[3U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out 
                    = (((QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U])));
            } else {
                VL_EXTEND_WQ(128,64, __Vtemp38, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1);
                VL_EXTEND_WQ(128,64, __Vtemp39, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
                VL_MUL_W(4, __Vtemp40, __Vtemp38, __Vtemp39);
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[0U] 
                    = __Vtemp40[0U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[1U] 
                    = __Vtemp40[1U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[2U] 
                    = __Vtemp40[2U];
                vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul[3U] 
                    = __Vtemp40[3U];
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
        ((0U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
          ? (4ULL + vlSelf->pc) : ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
                                    ? vlSelf->ysyx_22041461_CPU__DOT__dest
                                    : vlSelf->pc));
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
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__set_difftest_next_TOP();
    } else if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
            if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__39__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__39__rdata;
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__40__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__40__rdata;
            } else {
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__41__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__41__rdata;
                Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__42__rdata);
                vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                    = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__42__rdata;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__43__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__43__rdata;
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__44__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__44__rdata;
        } else {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__45__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__45__rdata;
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__46__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__46__rdata;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__47__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__47__rdata;
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__48__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__48__rdata;
        } else {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__49__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__49__rdata;
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__50__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
                = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__50__rdata;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__51__rdata);
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1 
            = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__51__rdata;
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(
                                                                                (8ULL 
                                                                                + vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr), vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__52__rdata);
        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2 
            = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__52__rdata;
    } else {
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__set_difftest_next_TOP();
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
    if ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS))) {
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
                                                              & (vlSelf->ysyx_22041461_CPU__DOT__inst 
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
                                                              & (vlSelf->ysyx_22041461_CPU__DOT__inst 
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
                                                          & (vlSelf->ysyx_22041461_CPU__DOT__inst 
                                                             >> 7U))] 
                = ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                    ? 0ULL : ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                               ? ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                   ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                       ? (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data))))
                                       : (QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data)))))
                                   : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                       ? (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data))
                                       : (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data 
                                                                          >> 7U)))))) 
                                           << 8U) | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data)))))))
                               : ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                   ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data 
                                                                          >> 0xfU)))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data)))))
                                       : (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data))))
                                   : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                       ? vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data
                                       : 0ULL))));
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
    vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0U] = 0ULL;
}

void Vysyx_22041461_CPU___024root___eval(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vysyx_22041461_CPU___024root___combo__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
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
    __req |= ((vlSelf->ysyx_22041461_CPU__DOT__CMP_out ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__CMP_out));
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22041461_CPU__DOT__CMP_out ^ vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__CMP_out))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_22041461_CPU.v:25: ysyx_22041461_CPU.CMP_out\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyx_22041461_CPU__DOT__CMP_out 
        = vlSelf->ysyx_22041461_CPU__DOT__CMP_out;
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
