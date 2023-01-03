// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041461_TOP.h for the primary calling header

#include "Vysyx_041461_TOP___024root.h"
#include "Vysyx_041461_TOP__Syms.h"

#include "verilated_dpi.h"

extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_d1140eb3_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_8cb9ad1b_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_be24ae63_0;
void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__ebreak_TOP();

VL_INLINE_OPT void Vysyx_041461_TOP___024root___sequent__TOP__6(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___sequent__TOP__6\n"); );
    // Variables
    SData/*8:0*/ __Vtableidx3;
    VlWide<4>/*127:0*/ __Vtemp15;
    VlWide<4>/*127:0*/ __Vtemp16;
    VlWide<4>/*127:0*/ __Vtemp17;
    VlWide<4>/*127:0*/ __Vtemp18;
    VlWide<4>/*127:0*/ __Vtemp19;
    VlWide<4>/*127:0*/ __Vtemp20;
    VlWide<4>/*127:0*/ __Vtemp21;
    VlWide<4>/*127:0*/ __Vtemp22;
    VlWide<4>/*127:0*/ __Vtemp23;
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag3__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag4__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag2__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag1__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V6__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V5__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V4__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V3__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V2__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V1__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v0) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[1U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[2U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[3U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[4U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[5U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[6U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[7U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[8U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[9U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0xaU] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0xbU] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0xcU] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0xdU] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0xeU] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0xfU] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x10U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x11U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x12U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x13U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x14U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x15U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x16U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x17U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x18U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x19U] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x1aU] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x1bU] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x1cU] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x1dU] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x1eU] = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x1fU] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v32) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v32;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v33;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v34;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v35;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v36;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v37;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v38;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v39;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v40;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v41;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v42;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v43;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v44;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v45;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v46;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v47;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v48;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v49;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v50;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v51;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v52;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v53;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v54;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v55;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v56;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v57;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v58;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v59;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v60;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v61;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v62;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x__v63;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bid 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit 
        = ((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr) 
           & (0x200bfffU >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtimecmp_hit 
        = ((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr) 
           & (0x2004007U >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr));
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc = 0ULL;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec_next;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl = 0U;
    if (((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out)) 
         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out))) {
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src = 0U;
    if (((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out)) 
         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out))) {
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out;
    if (((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out)) 
         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out))) {
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_MEM_ctrl = 0U;
    if (((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out)) 
         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out))) {
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl = 0U;
    if (((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out)) 
         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out))) {
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_FENCE_I = 0U;
    if (((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out)) 
         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out))) {
        if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                      >> 6U)))) {
            if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                          >> 5U)))) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 4U)))) {
                    if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((0x20U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                   >> 7U))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_FENCE_I = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out;
    if (((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out)) 
         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out))) {
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl = 0U;
    if (((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out)) 
         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out))) {
        if ((0x40U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
            if ((0x20U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                              >> 4U)))) {
                    if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl = 2U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((0U == (7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0xcU)))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl = 3U;
                                }
                            }
                        }
                    } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl = 1U;
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
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl = 4U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bresp 
        = ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bresp)
            : ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate))
                ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bresp)
                : 0U));
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid_next = 1U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen_next = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst_next = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen_next = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst_next = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid_next 
            = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? 1U : 0U);
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
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bvalid 
        = (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rvalid 
        = (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rlast 
        = (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rid 
        = ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid)
            : 0U);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_trap 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
           & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out)));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
           & (((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out)) 
                   | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                  | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                 | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
               | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
              | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wlast 
        = ((6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
           | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_bready 
        = ((6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
           | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid 
        = ((6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
           | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
           & (((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out)) 
                   | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                  | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                 | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
               | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
              | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_trap 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
           & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
           & (((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)) 
                   | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                  | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                 | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
               | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
              | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [(0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                   >> 0xfU))];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [(0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                   >> 0x14U))];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__i = 0x40U;
    if ((4U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_FENCE_I) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__i = 0x40U;
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_trap 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
           & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_conflict = 0U;
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs1_read) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_conflict = 1U;
            }
        }
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_conflict = 1U;
            }
        }
    }
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs2_read) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_conflict = 1U;
            }
        }
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_conflict = 1U;
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
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_conflict = 1U;
            }
        }
        if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
             & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)) 
                 | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))))) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_conflict = 1U;
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_conflict = 0U;
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
         & ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl)) 
            | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl))))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_conflict = 1U;
            }
        }
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_conflict = 1U;
            }
        }
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                           >> 0xfU)) == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_conflict = 1U;
            }
        }
    }
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
         & (1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl)))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_conflict = 1U;
            }
        }
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_conflict = 1U;
            }
        }
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write) {
            if (((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                           >> 0x14U)) == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_conflict = 1U;
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_conflict = 0U;
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
         & (IData)((8U == (0xcU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)))))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_conflict = 1U;
            }
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm = 0ULL;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc = 0ULL;
    if (((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out)) 
         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out))) {
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
        } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                          >> 2U)))) {
                if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__8__INST 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out;
                        vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__8__Vfuncout 
                            = (((- (QData)((IData)(
                                                   (vlSelf->__Vfunc_ysyx_041461_TOP__DOT__core__DOT__ID__DOT__immI__8__INST 
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
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = 0U;
    if (((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out)) 
         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out))) {
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
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = 0U;
                            if ((0x4000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((0x2000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                        if ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data 
                                             >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data)) {
                                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = 1U;
                                        }
                                    } else if ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data 
                                                < vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data)) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = 1U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if (VL_GTES_IQQ(1,64,64, vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data, vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data)) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = 1U;
                                    }
                                } else if (VL_LTS_IQQ(1,64,64, vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data, vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data)) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = 1U;
                                }
                            } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0xdU)))) {
                                if ((0x1000U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                    if ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data 
                                         != vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data)) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = 1U;
                                    }
                                } else if ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data 
                                            == vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data)) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WBreg_valid = 1U;
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_conflict) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WBreg_valid = 0U;
    }
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_trap) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WBreg_valid = 0U;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_valid = 1U;
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_conflict) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_valid = 0U;
    }
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_trap) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_valid = 0U;
    }
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
                VL_EXTENDS_WQ(128,64, __Vtemp15, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1);
                VL_EXTENDS_WQ(128,64, __Vtemp16, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
                VL_MULS_WWW(128,128,128, __Vtemp17, __Vtemp15, __Vtemp16);
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                    = __Vtemp17[0U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] 
                    = __Vtemp17[1U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] 
                    = __Vtemp17[2U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] 
                    = __Vtemp17[3U];
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
                VL_EXTEND_WQ(128,64, __Vtemp18, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1);
                VL_EXTEND_WQ(128,64, __Vtemp19, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
                VL_MUL_W(4, __Vtemp20, __Vtemp18, __Vtemp19);
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                    = __Vtemp20[0U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] 
                    = __Vtemp20[1U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] 
                    = __Vtemp20[2U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] 
                    = __Vtemp20[3U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U])));
            } else {
                VL_EXTENDS_WQ(128,64, __Vtemp21, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1);
                VL_EXTENDS_WQ(128,64, __Vtemp22, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
                VL_MULS_WWW(128,128,128, __Vtemp23, __Vtemp21, __Vtemp22);
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[0U] 
                    = __Vtemp23[0U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[1U] 
                    = __Vtemp23[1U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[2U] 
                    = __Vtemp23[2U];
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle[3U] 
                    = __Vtemp23[3U];
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
}

VL_INLINE_OPT void Vysyx_041461_TOP___024root___sequent__TOP__7(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___sequent__TOP__7\n"); );
    // Variables
    CData/*5:0*/ __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0;
    // Body
    __Vdlyvset__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen)))) {
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[0U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[0U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM1__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][0U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[0U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[1U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[1U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM1__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][1U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[1U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[2U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[2U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM1__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][2U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[2U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[3U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[3U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM1__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][3U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[3U]));
        __Vdlyvset__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                >> 3U)));
    }
    if (vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen) {
        vlSelf->ysyx_041461_TOP__DOT__Q1[0U] = vlSelf->ysyx_041461_TOP__DOT__RAM1__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][0U];
        vlSelf->ysyx_041461_TOP__DOT__Q1[1U] = vlSelf->ysyx_041461_TOP__DOT__RAM1__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][1U];
        vlSelf->ysyx_041461_TOP__DOT__Q1[2U] = vlSelf->ysyx_041461_TOP__DOT__RAM1__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][2U];
        vlSelf->ysyx_041461_TOP__DOT__Q1[3U] = vlSelf->ysyx_041461_TOP__DOT__RAM1__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][3U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__Q1[0U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q1[1U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q1[2U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q1[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen)))) {
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[0U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[0U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM2__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][0U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[0U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[1U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[1U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM2__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][1U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[1U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[2U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[2U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM2__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][2U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[2U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[3U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[3U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM2__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][3U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[3U]));
        __Vdlyvset__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                >> 3U)));
    }
    if (vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen) {
        vlSelf->ysyx_041461_TOP__DOT__Q2[0U] = vlSelf->ysyx_041461_TOP__DOT__RAM2__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][0U];
        vlSelf->ysyx_041461_TOP__DOT__Q2[1U] = vlSelf->ysyx_041461_TOP__DOT__RAM2__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][1U];
        vlSelf->ysyx_041461_TOP__DOT__Q2[2U] = vlSelf->ysyx_041461_TOP__DOT__RAM2__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][2U];
        vlSelf->ysyx_041461_TOP__DOT__Q2[3U] = vlSelf->ysyx_041461_TOP__DOT__RAM2__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][3U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__Q2[0U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q2[1U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q2[2U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q2[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen)))) {
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[0U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[0U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM3__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][0U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[0U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[1U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[1U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM3__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][1U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[1U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[2U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[2U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM3__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][2U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[2U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[3U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[3U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM3__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][3U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[3U]));
        __Vdlyvset__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                >> 3U)));
    }
    if (vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen) {
        vlSelf->ysyx_041461_TOP__DOT__Q3[0U] = vlSelf->ysyx_041461_TOP__DOT__RAM3__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][0U];
        vlSelf->ysyx_041461_TOP__DOT__Q3[1U] = vlSelf->ysyx_041461_TOP__DOT__RAM3__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][1U];
        vlSelf->ysyx_041461_TOP__DOT__Q3[2U] = vlSelf->ysyx_041461_TOP__DOT__RAM3__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][2U];
        vlSelf->ysyx_041461_TOP__DOT__Q3[3U] = vlSelf->ysyx_041461_TOP__DOT__RAM3__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][3U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__Q3[0U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q3[1U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q3[2U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q3[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen)))) {
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[0U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[0U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][0U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[0U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[1U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[1U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][1U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[1U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[2U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[2U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][2U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[2U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[3U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[3U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                     >> 3U)))][3U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[3U]));
        __Vdlyvset__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                >> 3U)));
    }
    if (vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen) {
        vlSelf->ysyx_041461_TOP__DOT__Q0[0U] = vlSelf->ysyx_041461_TOP__DOT__RAM0__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][0U];
        vlSelf->ysyx_041461_TOP__DOT__Q0[1U] = vlSelf->ysyx_041461_TOP__DOT__RAM0__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][1U];
        vlSelf->ysyx_041461_TOP__DOT__Q0[2U] = vlSelf->ysyx_041461_TOP__DOT__RAM0__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][2U];
        vlSelf->ysyx_041461_TOP__DOT__Q0[3U] = vlSelf->ysyx_041461_TOP__DOT__RAM0__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 3U)))][3U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__Q0[0U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q0[1U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q0[2U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q0[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen)))) {
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[0U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM5__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][0U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[0U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[1U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM5__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][1U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[1U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[2U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM5__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][2U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[2U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[3U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM5__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][3U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[3U]));
        __Vdlyvset__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                >> 3U)));
    }
    if (vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen) {
        vlSelf->ysyx_041461_TOP__DOT__Q5[0U] = vlSelf->ysyx_041461_TOP__DOT__RAM5__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][0U];
        vlSelf->ysyx_041461_TOP__DOT__Q5[1U] = vlSelf->ysyx_041461_TOP__DOT__RAM5__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][1U];
        vlSelf->ysyx_041461_TOP__DOT__Q5[2U] = vlSelf->ysyx_041461_TOP__DOT__RAM5__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][2U];
        vlSelf->ysyx_041461_TOP__DOT__Q5[3U] = vlSelf->ysyx_041461_TOP__DOT__RAM5__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][3U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__Q5[0U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q5[1U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q5[2U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q5[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen)))) {
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[0U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM4__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][0U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[0U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[1U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM4__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][1U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[1U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[2U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM4__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][2U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[2U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[3U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM4__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][3U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[3U]));
        __Vdlyvset__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                >> 3U)));
    }
    if (vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen) {
        vlSelf->ysyx_041461_TOP__DOT__Q4[0U] = vlSelf->ysyx_041461_TOP__DOT__RAM4__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][0U];
        vlSelf->ysyx_041461_TOP__DOT__Q4[1U] = vlSelf->ysyx_041461_TOP__DOT__RAM4__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][1U];
        vlSelf->ysyx_041461_TOP__DOT__Q4[2U] = vlSelf->ysyx_041461_TOP__DOT__RAM4__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][2U];
        vlSelf->ysyx_041461_TOP__DOT__Q4[3U] = vlSelf->ysyx_041461_TOP__DOT__RAM4__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][3U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__Q4[0U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q4[1U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q4[2U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q4[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen)))) {
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[0U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM6__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][0U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[0U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[1U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM6__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][1U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[1U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[2U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM6__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][2U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[2U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[3U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM6__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][3U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[3U]));
        __Vdlyvset__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                >> 3U)));
    }
    if (vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen) {
        vlSelf->ysyx_041461_TOP__DOT__Q6[0U] = vlSelf->ysyx_041461_TOP__DOT__RAM6__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][0U];
        vlSelf->ysyx_041461_TOP__DOT__Q6[1U] = vlSelf->ysyx_041461_TOP__DOT__RAM6__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][1U];
        vlSelf->ysyx_041461_TOP__DOT__Q6[2U] = vlSelf->ysyx_041461_TOP__DOT__RAM6__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][2U];
        vlSelf->ysyx_041461_TOP__DOT__Q6[3U] = vlSelf->ysyx_041461_TOP__DOT__RAM6__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][3U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__Q6[0U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q6[1U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q6[2U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q6[3U] = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen)))) {
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0[0U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[0U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM7__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][0U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[0U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0[1U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[1U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM7__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][1U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[1U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0[2U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[2U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM7__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][2U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[2U]));
        __Vdlyvval__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0[3U] 
            = ((vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                & (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[3U])) 
               | (vlSelf->ysyx_041461_TOP__DOT__RAM7__DOT__ram
                  [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                     >> 3U)))][3U] 
                  & vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[3U]));
        __Vdlyvset__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0 = 1U;
        __Vdlyvdim0__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                >> 3U)));
    }
    if (vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen) {
        vlSelf->ysyx_041461_TOP__DOT__Q7[0U] = vlSelf->ysyx_041461_TOP__DOT__RAM7__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][0U];
        vlSelf->ysyx_041461_TOP__DOT__Q7[1U] = vlSelf->ysyx_041461_TOP__DOT__RAM7__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][1U];
        vlSelf->ysyx_041461_TOP__DOT__Q7[2U] = vlSelf->ysyx_041461_TOP__DOT__RAM7__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][2U];
        vlSelf->ysyx_041461_TOP__DOT__Q7[3U] = vlSelf->ysyx_041461_TOP__DOT__RAM7__DOT__ram
            [(0x3fU & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 3U)))][3U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__Q7[0U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q7[1U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q7[2U] = VL_RANDOM_I(32);
        vlSelf->ysyx_041461_TOP__DOT__Q7[3U] = VL_RANDOM_I(32);
    }
    if (__Vdlyvset__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0) {
        vlSelf->ysyx_041461_TOP__DOT__RAM1__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0[0U];
        vlSelf->ysyx_041461_TOP__DOT__RAM1__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0[1U];
        vlSelf->ysyx_041461_TOP__DOT__RAM1__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0[2U];
        vlSelf->ysyx_041461_TOP__DOT__RAM1__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0) {
        vlSelf->ysyx_041461_TOP__DOT__RAM2__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0[0U];
        vlSelf->ysyx_041461_TOP__DOT__RAM2__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0[1U];
        vlSelf->ysyx_041461_TOP__DOT__RAM2__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0[2U];
        vlSelf->ysyx_041461_TOP__DOT__RAM2__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0) {
        vlSelf->ysyx_041461_TOP__DOT__RAM3__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0[0U];
        vlSelf->ysyx_041461_TOP__DOT__RAM3__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0[1U];
        vlSelf->ysyx_041461_TOP__DOT__RAM3__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0[2U];
        vlSelf->ysyx_041461_TOP__DOT__RAM3__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM3__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0) {
        vlSelf->ysyx_041461_TOP__DOT__RAM0__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0[0U];
        vlSelf->ysyx_041461_TOP__DOT__RAM0__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0[1U];
        vlSelf->ysyx_041461_TOP__DOT__RAM0__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0[2U];
        vlSelf->ysyx_041461_TOP__DOT__RAM0__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0) {
        vlSelf->ysyx_041461_TOP__DOT__RAM5__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0[0U];
        vlSelf->ysyx_041461_TOP__DOT__RAM5__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0[1U];
        vlSelf->ysyx_041461_TOP__DOT__RAM5__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0[2U];
        vlSelf->ysyx_041461_TOP__DOT__RAM5__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM5__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0) {
        vlSelf->ysyx_041461_TOP__DOT__RAM4__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0[0U];
        vlSelf->ysyx_041461_TOP__DOT__RAM4__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0[1U];
        vlSelf->ysyx_041461_TOP__DOT__RAM4__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0[2U];
        vlSelf->ysyx_041461_TOP__DOT__RAM4__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM4__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0) {
        vlSelf->ysyx_041461_TOP__DOT__RAM6__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0[0U];
        vlSelf->ysyx_041461_TOP__DOT__RAM6__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0[1U];
        vlSelf->ysyx_041461_TOP__DOT__RAM6__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0[2U];
        vlSelf->ysyx_041461_TOP__DOT__RAM6__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM6__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0) {
        vlSelf->ysyx_041461_TOP__DOT__RAM7__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0][0U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0[0U];
        vlSelf->ysyx_041461_TOP__DOT__RAM7__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0][1U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0[1U];
        vlSelf->ysyx_041461_TOP__DOT__RAM7__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0][2U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0[2U];
        vlSelf->ysyx_041461_TOP__DOT__RAM7__DOT__ram[__Vdlyvdim0__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0][3U] 
            = __Vdlyvval__ysyx_041461_TOP__DOT__RAM7__DOT__ram__v0[3U];
    }
}

VL_INLINE_OPT void Vysyx_041461_TOP___024root___sequent__TOP__11(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___sequent__TOP__11\n"); );
    // Body
    vlSelf->ysyx_041461_TOP__DOT__rst_r2 = ((IData)(vlSelf->rst) 
                                            | (IData)(vlSelf->ysyx_041461_TOP__DOT__rst_r1));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2 
        = ((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r1));
    vlSelf->ysyx_041461_TOP__DOT__rst_r1 = vlSelf->rst;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r1 
        = vlSelf->rst;
}

void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

VL_INLINE_OPT void Vysyx_041461_TOP___024root___sequent__TOP__12(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___sequent__TOP__12\n"); );
    // Body
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate;
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate;
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
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bvalid 
        = (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate));
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bid 
        = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awid)
            : 0U);
    if (vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate) {
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arlen_next 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arlen;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arburst_next 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arburst;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arlen_next = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arburst_next = 0U;
    }
    if (vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate) {
        Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_read_TOP((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr)), vlSelf->__Vtask_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_read__13__rdata);
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rvalid = 1U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rid 
            = vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rresp = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rdata 
            = vlSelf->__Vtask_ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__paddr_read__13__rdata;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rlast = 1U;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rvalid = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rid = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rresp = 0U;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rdata = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rlast = 0U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_a802bbfe_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_1adeb555_0;

VL_INLINE_OPT void Vysyx_041461_TOP___024root___sequent__TOP__13(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___sequent__TOP__13\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<4>/*127:0*/ __Vtemp134;
    VlWide<4>/*127:0*/ __Vtemp136;
    VlWide<4>/*127:0*/ __Vtemp137;
    VlWide<4>/*127:0*/ __Vtemp139;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__IFreg_pc;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out;
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
                    VL_EXTEND_WQ(128,64, __Vtemp132, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[0U] 
                        = __Vtemp132[0U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[1U] 
                        = __Vtemp132[1U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[2U] 
                        = __Vtemp132[2U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[3U] 
                        = __Vtemp132[3U];
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
                            VL_EXTEND_WQ(128,64, __Vtemp134, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[0U] 
                                = __Vtemp134[0U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[1U] 
                                = __Vtemp134[1U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[2U] 
                                = __Vtemp134[2U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[3U] 
                                = __Vtemp134[3U];
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
                                    VL_EXTEND_WQ(128,64, __Vtemp136, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[0U] 
                                        = __Vtemp136[0U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[1U] 
                                        = __Vtemp136[1U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[2U] 
                                        = __Vtemp136[2U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[3U] 
                                        = __Vtemp136[3U];
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
                                        VL_EXTEND_WQ(128,64, __Vtemp137, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[0U] 
                                            = __Vtemp137[0U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[1U] 
                                            = __Vtemp137[1U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[2U] 
                                            = __Vtemp137[2U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[3U] 
                                            = __Vtemp137[3U];
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
            VL_EXTEND_WQ(128,64, __Vtemp139, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[0U] 
                = __Vtemp139[0U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[1U] 
                = __Vtemp139[1U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[2U] 
                = __Vtemp139[2U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[3U] 
                = __Vtemp139[3U];
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
    } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_FENCE_I) {
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
    } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_FENCE_I) {
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
    } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_FENCE_I) {
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
    } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_FENCE_I) {
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
    } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_FENCE_I) {
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
    } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_FENCE_I) {
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
    } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_FENCE_I) {
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
    } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_FENCE_I) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1_next[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    __Vtableidx2 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out) 
                     << 1U) | (1U & (~ (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                >> 0x1fU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize 
        = Vysyx_041461_TOP__ConstPool__TABLE_a802bbfe_0
        [__Vtableidx2];
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr 
        = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                          >> 0x1fU))) ? ((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                  >> 3U)) 
                                         << 3U) : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out));
    __Vtableidx1 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out) 
                     << 1U) | (1U & (~ (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                >> 0x1fU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize 
        = Vysyx_041461_TOP__ConstPool__TABLE_1adeb555_0
        [__Vtableidx1];
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr 
        = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                          >> 0x1fU))) ? ((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                  >> 3U)) 
                                         << 3U) : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out));
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
    while ((__Vilp <= 0x27U)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vysyx_041461_TOP___024root___sequent__TOP__14(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___sequent__TOP__14\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp149;
    VlWide<4>/*127:0*/ __Vtemp150;
    VlWide<4>/*127:0*/ __Vtemp152;
    VlWide<4>/*127:0*/ __Vtemp154;
    VlWide<4>/*127:0*/ __Vtemp155;
    VlWide<4>/*127:0*/ __Vtemp158;
    VlWide<4>/*127:0*/ __Vtemp159;
    VlWide<4>/*127:0*/ __Vtemp162;
    VlWide<4>/*127:0*/ __Vtemp163;
    // Body
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x28U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x28U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x29U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x29U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x2aU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x2aU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x2bU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x2bU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x2cU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x2cU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x2dU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x2dU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x2eU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x2eU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x2fU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x2fU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x30U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x30U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x31U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x31U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x32U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x32U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x33U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x33U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x34U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x34U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x35U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x35U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x36U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x36U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x37U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x37U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x38U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x38U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x39U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x39U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x3aU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x3aU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x3bU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x3bU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x3cU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x3cU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x3dU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x3dU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x3eU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x3eU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8_next[0x3fU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag8
        [0x3fU];
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
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wclint 
        = (((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr) 
            & (0x200bfffU >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr)) 
           | ((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr) 
              & (0x2004007U >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr)));
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_arsize 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_arsize = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr = 0U;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint 
        = (((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr) 
            & (0x200bfffU >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr)) 
           | ((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr) 
              & (0x2004007U >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit 
        = ((((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1) 
                 | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)) 
                | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3)) 
               | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4)) 
              | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5)) 
             | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6)) 
            | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7)) 
           | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata 
        = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                          >> 0x1fU))) ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1)
                                          ? (((QData)((IData)(
                                                              vlSelf->ysyx_041461_TOP__DOT__Q4[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_041461_TOP__DOT__Q4[0U])))
                                          : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)
                                              ? (((QData)((IData)(
                                                                  vlSelf->ysyx_041461_TOP__DOT__Q4[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_041461_TOP__DOT__Q4[2U])))
                                              : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->ysyx_041461_TOP__DOT__Q5[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_041461_TOP__DOT__Q5[0U])))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->ysyx_041461_TOP__DOT__Q5[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_041461_TOP__DOT__Q5[2U])))
                                                   : 
                                                  ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_041461_TOP__DOT__Q6[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->ysyx_041461_TOP__DOT__Q6[0U])))
                                                    : 
                                                   ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->ysyx_041461_TOP__DOT__Q6[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ysyx_041461_TOP__DOT__Q6[2U])))
                                                     : 
                                                    ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->ysyx_041461_TOP__DOT__Q7[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->ysyx_041461_TOP__DOT__Q7[0U])))
                                                      : 
                                                     ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->ysyx_041461_TOP__DOT__Q7[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->ysyx_041461_TOP__DOT__Q7[2U])))
                                                       : 0ULL))))))))
            : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out 
        = (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_valid)) 
             & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out))) 
            & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align)))
            ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load)
                ? 6U : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store)
                         ? 7U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out)))
            : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out));
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
                        VL_EXTEND_WQ(128,64, __Vtemp149, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] 
                            = __Vtemp149[0U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] 
                            = __Vtemp149[1U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                            = __Vtemp149[2U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                            = __Vtemp149[3U];
                    }
                }
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)))) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3) {
                        VL_EXTEND_WQ(128,64, __Vtemp150, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] 
                            = __Vtemp150[0U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] 
                            = __Vtemp150[1U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                            = __Vtemp150[2U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                            = __Vtemp150[3U];
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
                                            VL_EXTEND_WQ(128,64, __Vtemp152, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] 
                                                = __Vtemp152[0U];
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                                                = __Vtemp152[1U];
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                                                = __Vtemp152[2U];
                                            vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                                                = __Vtemp152[3U];
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
                VL_EXTEND_WQ(128,64, __Vtemp154, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] 
                    = __Vtemp154[0U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                    = __Vtemp154[1U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                    = __Vtemp154[2U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                    = __Vtemp154[3U];
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1) {
                VL_EXTEND_WQ(128,64, __Vtemp155, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] 
                    = __Vtemp155[0U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                    = __Vtemp155[1U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                    = __Vtemp155[2U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                    = __Vtemp155[3U];
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
                                VL_EXTEND_WQ(128,64, __Vtemp158, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] 
                                    = __Vtemp158[0U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] 
                                    = __Vtemp158[1U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                    = __Vtemp158[2U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                    = __Vtemp158[3U];
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
                                VL_EXTEND_WQ(128,64, __Vtemp159, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] 
                                    = __Vtemp159[0U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] 
                                    = __Vtemp159[1U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                    = __Vtemp159[2U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                    = __Vtemp159[3U];
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
                                        VL_EXTEND_WQ(128,64, __Vtemp162, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] 
                                            = __Vtemp162[0U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] 
                                            = __Vtemp162[1U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                            = __Vtemp162[2U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                            = __Vtemp162[3U];
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
                                        VL_EXTEND_WQ(128,64, __Vtemp163, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] 
                                            = __Vtemp163[0U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] 
                                            = __Vtemp163[1U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                            = __Vtemp163[2U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                            = __Vtemp163[3U];
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
    vlSelf->ysyx_041461_TOP__DOT__io_master_awvalid 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
           & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wclint)) 
              & (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_arsize;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr;
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ok 
        = (1U & (((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out)) 
                  | (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_valid))) 
                 | ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
                     ? ((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out)) 
                        | (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)))
                     : (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_trap 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
           & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEMreg_enable = 1U;
    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ok)))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEMreg_enable = 0U;
    }
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_conflict) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEMreg_enable = 0U;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXEreg_enable = 1U;
    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ok)))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXEreg_enable = 0U;
    }
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_conflict) 
         | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_conflict))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXEreg_enable = 0U;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IDreg_enable = 1U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl))) {
        if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
             | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IDreg_enable = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ok)))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IDreg_enable = 0U;
    }
    if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_conflict) 
          | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_conflict)) 
         | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_conflict))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IDreg_enable = 0U;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEMreg_valid = 1U;
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_trap) 
         | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_trap))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEMreg_valid = 0U;
    }
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_conflict) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEMreg_valid = 0U;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXEreg_valid = 1U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXEreg_valid = 0U;
    }
    if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_trap) 
          | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_trap)) 
         | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_trap))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXEreg_valid = 0U;
    }
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_conflict) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXEreg_valid = 0U;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IDreg_valid = 1U;
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl) 
         | (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl)))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IDreg_valid = 0U;
    }
    if (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_trap) 
           | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_trap)) 
          | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_trap)) 
         | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_trap))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IDreg_valid = 0U;
    }
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IDreg_valid = 0U;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_valid = 1U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl))) {
        if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
             | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_valid = 0U;
        }
    }
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl) 
         | (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl)))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_valid = 0U;
    }
    if (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_trap) 
           | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_trap)) 
          | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_trap)) 
         | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_trap))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_valid = 0U;
    }
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_conflict) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_valid = 0U;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_valid)
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IFreg_enable = 1U;
    if ((4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl))) {
        if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
             | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IFreg_enable = 0U;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ok)) 
               | (~ ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_valid)) 
                     | ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                         ? (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out))
                         : (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))))))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IFreg_enable = 0U;
    }
    if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_conflict) 
          | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_conflict)) 
         | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_conflict))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IFreg_enable = 0U;
    }
}
