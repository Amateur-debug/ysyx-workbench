// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22041461_CPU.h for the primary calling header

#include "Vysyx_22041461_CPU___024root.h"
#include "Vysyx_22041461_CPU__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void ebreak();

VL_INLINE_OPT void Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__IDU__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root____Vdpiimwrap_ysyx_22041461_CPU__DOT__IDU__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
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
    __Vdlyvset__ysyx_22041461_CPU__DOT__REGS__DOT__x__v0 = 0U;
    __Vdlyvset__ysyx_22041461_CPU__DOT__REGS__DOT__x__v64 = 0U;
    vlSelf->pc = ((IData)(vlSelf->rst) ? (4ULL + vlSelf->pc)
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
}

VL_INLINE_OPT void Vysyx_22041461_CPU___024root___combo__TOP__3(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___combo__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp10;
    // Body
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
    VL_EXTEND_WQ(65,64, __Vtemp8, vlSelf->ysyx_22041461_CPU__DOT__data_rs1);
    VL_EXTEND_WQ(65,64, __Vtemp9, vlSelf->ysyx_22041461_CPU__DOT__imm);
    VL_ADD_W(3, __Vtemp10, __Vtemp8, __Vtemp9);
    vlSelf->flag = (1U & __Vtemp10[2U]);
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

void Vysyx_22041461_CPU___024root___eval(Vysyx_22041461_CPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22041461_CPU___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22041461_CPU___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vysyx_22041461_CPU___024root___combo__TOP__3(vlSelf);
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
