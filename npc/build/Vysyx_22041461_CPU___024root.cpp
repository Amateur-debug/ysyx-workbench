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
    __Vdlyvset__ysyx_22041461_CPU__DOT__REGS__DOT__x__v0 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__REGS__DOT__x__v64 = 0U;
    vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__j = 0x40U;
    if (vlSelf->rst) {
        if ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_write_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                                                                 ? 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                (4ULL 
                                                                                + vlSelf->pc)))
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                                                                 ? vlSelf->ysyx_22041461_CPU__DOT__imm
                                                                                 : vlSelf->ysyx_22041461_CPU__DOT__rs2_data)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                                                                 ? vlSelf->ysyx_22041461_CPU__DOT__rs1_data
                                                                                 : vlSelf->ysyx_22041461_CPU__DOT__dest))), 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                                                                                >> 2U)))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                                                                 ? 0x80U
                                                                                 : 0xc0U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                                                                 ? 0xe0U
                                                                                 : 0xf0U))
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                                                                 ? 0xf8U
                                                                                 : 0xfcU)
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                                                                 ? 0xfeU
                                                                                 : 0xffU))));
        }
    }
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
    vlSelf->pc = ((IData)(vlSelf->rst) ? vlSelf->ysyx_22041461_CPU__DOT__PC__DOT__npc
                   : 0x80000000ULL);
    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__17__rdata);
    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rinst 
        = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__17__rdata;
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

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___combo__TOP__4(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___combo__TOP__4\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp10;
    // Body
    if (((((((((0x3bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)) 
               | (0x40000033U == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
              | (0x13U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
             | (0x67U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
            | (0x1013U == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
           | (0x2003U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
          | (0x3013U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) 
         | (0x3023U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst)))) {
        if ((0x3bU == (0xfe00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
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
        } else if ((0x1013U == (0xfc00707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
        } else if ((0x2003U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
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
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
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
        } else {
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__5__INST 
                = vlSelf->ysyx_22041461_CPU__DOT__inst;
            vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__5__Vfuncout 
                = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__5__INST 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__5__INST 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__5__INST 
                                                      >> 7U))))));
            vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 1U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 3U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
            vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 2U;
            vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immS__5__Vfuncout;
        }
    } else if ((0x63U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__6__INST 
            = vlSelf->ysyx_22041461_CPU__DOT__inst;
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__6__Vfuncout 
            = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__6__INST 
                                    >> 0x1fU)))) << 0xdU) 
               | (QData)((IData)(((0x1000U & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__6__INST 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__6__INST 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__6__INST 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__6__INST 
                                            >> 7U))))))));
        vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_PC = ((0U 
                                                   == (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out))
                                                   ? 1U
                                                   : 0U);
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__6__Vfuncout;
    } else if ((0x1063U == (0x707fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__7__INST 
            = vlSelf->ysyx_22041461_CPU__DOT__inst;
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__7__Vfuncout 
            = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__7__INST 
                                    >> 0x1fU)))) << 0xdU) 
               | (QData)((IData)(((0x1000U & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__7__INST 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__7__INST 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__7__INST 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__7__INST 
                                            >> 7U))))))));
        vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_PC = ((0U 
                                                   != (IData)(vlSelf->ysyx_22041461_CPU__DOT__CMP_out))
                                                   ? 1U
                                                   : 0U);
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immB__7__Vfuncout;
    } else if ((0x17U == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__8__INST 
            = vlSelf->ysyx_22041461_CPU__DOT__inst;
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__8__Vfuncout 
            = (((QData)((IData)((- (IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__8__INST 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)((0xfffff000U 
                                             & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__8__INST))));
        vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 1U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 4U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 1U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__8__Vfuncout;
    } else if ((0x37U == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__9__INST 
            = vlSelf->ysyx_22041461_CPU__DOT__inst;
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__9__Vfuncout 
            = (((QData)((IData)((- (IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__9__INST 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)((0xfffff000U 
                                             & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__9__INST))));
        vlSelf->ysyx_22041461_CPU__DOT__sel_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_ALU = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_REGS = 4U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_PC = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data = 0U;
        vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immU__9__Vfuncout;
    } else if ((0x6fU == (0x7fU & vlSelf->ysyx_22041461_CPU__DOT__inst))) {
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__10__INST 
            = vlSelf->ysyx_22041461_CPU__DOT__inst;
        vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__10__Vfuncout 
            = (((- (QData)((IData)((vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__10__INST 
                                    >> 0x1fU)))) << 0x15U) 
               | (QData)((IData)(((0x100000U & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__10__INST 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__10__INST) 
                                     | ((0x800U & (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__10__INST 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__10__INST 
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
        vlSelf->ysyx_22041461_CPU__DOT__imm = vlSelf->__Vfunc_ysyx_22041461_CPU__DOT__CU__DOT__immJ__10__Vfuncout;
    } else if ((0x100073U == vlSelf->ysyx_22041461_CPU__DOT__inst)) {
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__ebreak_TOP();
    } else {
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__CU__DOT__invalid_inst_TOP();
    }
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
    VL_EXTEND_WQ(65,64, __Vtemp8, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp9, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
    VL_ADD_W(3, __Vtemp10, __Vtemp8, __Vtemp9);
    vlSelf->flag = (1U & __Vtemp10[2U]);
    vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum = 
        (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
         + vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2);
    vlSelf->ysyx_22041461_CPU__DOT__dest = ((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                             ? ((2U 
                                                 & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                 ? 0ULL
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU))
                                                  ? 0ULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum)))))
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
    if ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
            vlSelf->ysyx_22041461_CPU__DOT__mem = 0ULL;
        } else {
            Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__14__rdata);
            vlSelf->ysyx_22041461_CPU__DOT__mem = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__14__rdata;
            vlSelf->ysyx_22041461_CPU__DOT__mem = (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__mem 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__mem)));
        }
    } else if ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))) {
        Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read_TOP(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr, vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__15__rdata);
        vlSelf->ysyx_22041461_CPU__DOT__mem = vlSelf->__Vtask_ysyx_22041461_CPU__DOT__MEM__DOT__pmem_read__15__rdata;
    } else {
        vlSelf->ysyx_22041461_CPU__DOT__mem = 0ULL;
    }
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
