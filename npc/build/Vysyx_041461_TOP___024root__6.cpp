// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041461_TOP.h for the primary calling header

#include "Vysyx_041461_TOP___024root.h"
#include "Vysyx_041461_TOP__Syms.h"

#include "verilated_dpi.h"

void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__get_skip_TOP(CData/*7:0*/ a);
extern const VlUnpacked<QData/*63:0*/, 128> Vysyx_041461_TOP__ConstPool__TABLE_677b417c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_041461_TOP__ConstPool__TABLE_e8cdc630_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_29e045f6_0;
extern const VlUnpacked<QData/*62:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_45c67848_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_0fc9e6c7_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_ed9e6550_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_d1140eb3_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_8cb9ad1b_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_be24ae63_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_84736496_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vysyx_041461_TOP__ConstPool__TABLE_c8db6ae7_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_1adeb555_0;

VL_INLINE_OPT void Vysyx_041461_TOP___024root___sequent__TOP__15(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___sequent__TOP__15\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    CData/*4:0*/ __Vtableidx4;
    CData/*5:0*/ __Vtableidx5;
    CData/*6:0*/ __Vtableidx6;
    CData/*4:0*/ __Vtableidx7;
    SData/*8:0*/ __Vtableidx8;
    VlWide<3>/*95:0*/ __Vtemp4372;
    VlWide<3>/*95:0*/ __Vtemp4373;
    VlWide<3>/*95:0*/ __Vtemp4374;
    VlWide<3>/*95:0*/ __Vtemp4377;
    VlWide<3>/*95:0*/ __Vtemp4378;
    VlWide<3>/*95:0*/ __Vtemp4379;
    VlWide<4>/*127:0*/ __Vtemp4422;
    VlWide<4>/*127:0*/ __Vtemp4426;
    VlWide<4>/*127:0*/ __Vtemp4428;
    VlWide<4>/*127:0*/ __Vtemp4432;
    VlWide<4>/*127:0*/ __Vtemp4434;
    VlWide<4>/*127:0*/ __Vtemp4438;
    VlWide<4>/*127:0*/ __Vtemp4440;
    VlWide<4>/*127:0*/ __Vtemp4444;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3960))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3960)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3960))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3961))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3961)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3961))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3962))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3962)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3962))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3963))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3963)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3963))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3964))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3964)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3964))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3965))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3965)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3965))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3966))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3966)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3966))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3967))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3967)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3967))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3968))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3968)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3968))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3969))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3969)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3969))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3970))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3970)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3970))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3971))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3971)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3971))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3972))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3972)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3972))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3973))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3973)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3973))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3974))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3974)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3974))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3975))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3975)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3975))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3976))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3976)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3976))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3977))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3977)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3977))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3978))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3978)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3978))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3979))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3979)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3979))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3980))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3980)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3980))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3981))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3981)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3981))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3982))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3982)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3982))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3983))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3983)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3983))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3984))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3984)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3984))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3985))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3985)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3985))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3986))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3986)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3986))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3987))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3987)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3987))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3988))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3988)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3988))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3989))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3989)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3989))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3990))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3990)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3990))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3991))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3991)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3991))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3992))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x78U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3992)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3992))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3993))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3993)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3993))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3994))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3994)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3994))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3995))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3995)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3995))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3996))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3996)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3996))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3997))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3997)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3997))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3998))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3998)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3998))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3999))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3999)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v3999))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4000))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4000)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4000))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4001))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4001)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4001))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4002))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4002)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4002))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4003))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4003)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4003))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4004))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4004)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4004))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4005))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4005)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4005))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4006))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4006)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4006))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4007))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4007)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4007))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4008))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4008)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4008))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4009))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4009)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4009))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4010))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4010)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4010))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4011))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4011)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4011))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4012))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4012)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4012))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4013))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4013)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4013))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4014))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4014)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4014))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4015))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4015)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4015))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4016))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4016)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4016))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4017))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4017)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4017))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4018))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4018)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4018))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4019))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4019)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4019))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4020))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4020)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4020))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4021))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4021)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4021))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4022))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4022)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4022))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4023))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4023)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4023))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4024))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4024)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4024))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4025))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x79U]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4025)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4025))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4026))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4026)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4026))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4027))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4027)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4027))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4028))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4028)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4028))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4029))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4029)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4029))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4030))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4030)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4030))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4031))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4031)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4031))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4032))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4032)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4032))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4033))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4033)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4033))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4034))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4034)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4034))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4035))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4035)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4035))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4036))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4036)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4036))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4037))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4037)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4037))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4038))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4038)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4038))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4039))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4039)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4039))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4040))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4040)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4040))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4041))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4041)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4041))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4042))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4042)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4042))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4043))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4043)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4043))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4044))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4044)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4044))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4045))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4045)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4045))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4046))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4046)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4046))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4047))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4047)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4047))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4048))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4048)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4048))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4049))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4049)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4049))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4050))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4050)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4050))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4051))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4051)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4051))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4052))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4052)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4052))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4053))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4053)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4053))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4054))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4054)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4054))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4055))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4055)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4055))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4056))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4056)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4056))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4057))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4057)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4057))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4058))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7aU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4058)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4058))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4059))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4059)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4059))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4060))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4060)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4060))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4061))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4061)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4061))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4062))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4062)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4062))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4063))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4063)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4063))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4064))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4064)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4064))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4065))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4065)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4065))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4066))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4066)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4066))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4067))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4067)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4067))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4068))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4068)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4068))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4069))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4069)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4069))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4070))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4070)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4070))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4071))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4071)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4071))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4072))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4072)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4072))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4073))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4073)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4073))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4074))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4074)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4074))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4075))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4075)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4075))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4076))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4076)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4076))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4077))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4077)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4077))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4078))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4078)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4078))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4079))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4079)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4079))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4080))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4080)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4080))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4081))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4081)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4081))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4082))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4082)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4082))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4083))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4083)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4083))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4084))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4084)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4084))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4085))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4085)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4085))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4086))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4086)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4086))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4087))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4087)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4087))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4088))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4088)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4088))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4089))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4089)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4089))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4090))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4090)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4090))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4091))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7bU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4091)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4091))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4092))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4092)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4092))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4093))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4093)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4093))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4094))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4094)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4094))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4095))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4095)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4095))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4096))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4096)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4096))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4097))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4097)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4097))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4098))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4098)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4098))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4099))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4099)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4099))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4100))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4100)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4100))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4101))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4101)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4101))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4102))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4102)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4102))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4103))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4103)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4103))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4104))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4104)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4104))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4105))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4105)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4105))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4106))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4106)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4106))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4107))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4107)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4107))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4108))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4108)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4108))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4109))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4109)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4109))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4110))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4110)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4110))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4111))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4111)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4111))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4112))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4112)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4112))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4113))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4113)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4113))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4114))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4114)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4114))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4115))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4115)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4115))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4116))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4116)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4116))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4117))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4117)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4117))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4118))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4118)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4118))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4119))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4119)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4119))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4120))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4120)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4120))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4121))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4121)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4121))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4122))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4122)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4122))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4123))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4123)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4123))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4124))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7cU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4124)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4124))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4125))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4125)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4125))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4126))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4126)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4126))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4127))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4127)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4127))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4128))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4128)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4128))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4129))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4129)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4129))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4130))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4130)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4130))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4131))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4131)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4131))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4132))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4132)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4132))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4133))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4133)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4133))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4134))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4134)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4134))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4135))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4135)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4135))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4136))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4136)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4136))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4137))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4137)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4137))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4138))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4138)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4138))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4139))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4139)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4139))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4140))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4140)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4140))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4141))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4141)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4141))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4142))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4142)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4142))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4143))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4143)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4143))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4144))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4144)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4144))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4145))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4145)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4145))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4146))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4146)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4146))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4147))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4147)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4147))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4148))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4148)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4148))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4149))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4149)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4149))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4150))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4150)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4150))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4151))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4151)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4151))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4152))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4152)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4152))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4153))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4153)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4153))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4154))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4154)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4154))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4155))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4155)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4155))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4156))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4156)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4156))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4157))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7dU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4157)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4157))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4158))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4158)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4158))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4159))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4159)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4159))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4160))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4160)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4160))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4161))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4161)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4161))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4162))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4162)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4162))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4163))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4163)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4163))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4164))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4164)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4164))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4165))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4165)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4165))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4166))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4166)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4166))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4167))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4167)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4167))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4168))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4168)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4168))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4169))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4169)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4169))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4170))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4170)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4170))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4171))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4171)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4171))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4172))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4172)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4172))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4173))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4173)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4173))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4174))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4174)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4174))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4175))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4175)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4175))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4176))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4176)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4176))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4177))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4177)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4177))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4178))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4178)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4178))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4179))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4179)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4179))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4180))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4180)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4180))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4181))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4181)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4181))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4182))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4182)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4182))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4183))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4183)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4183))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4184))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4184)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4184))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4185))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4185)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4185))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4186))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4186)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4186))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4187))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4187)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4187))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4188))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4188)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4188))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4189))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4189)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4189))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4190))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7eU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4190)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4190))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4191))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4191)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4191))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4192))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4192)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4192))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4193))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4193)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4193))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4194))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4194)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4194))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4195))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4195)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4195))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4196))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4196)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4196))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4197))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4197)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4197))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4198))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4198)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4198))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4199))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4199)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4199))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4200))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4200)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4200))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4201))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4201)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4201))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4202))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4202)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4202))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4203))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4203)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4203))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4204))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4204)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4204))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4205))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4205)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4205))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4206))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4206)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4206))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4207))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4207)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4207))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4208))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4208)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4208))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4209))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4209)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4209))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4210))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4210)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4210))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4211))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4211)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4211))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4212))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4212)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4212))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4213))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4213)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4213))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4214))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4214)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4214))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4215))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4215)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4215))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4216))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4216)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4216))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4217))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4217)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4217))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4218))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4218)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4218))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4219))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4219)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4219))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4220))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4220)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4220))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4221))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4221)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4221))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4222))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4222)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4222))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
        = (((~ (1ULL << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4223))) 
            & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
            [0x7fU]) | (0x1ffffffffULL & ((QData)((IData)(vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4223)) 
                                          << (IData)(vlSelf->__Vdlyvlsb__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v4223))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bid 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit 
        = ((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr) 
           & (0x200bfffU >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr));
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
    Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__get_skip_TOP(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_skip_difftets_out);
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached 
        = (1U & (~ ((0x80000000U <= (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)) 
                    & (0x88000000U > (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)))));
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
    __Vtableidx6 = ((0x70U & ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out) 
                              << 4U)) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask 
        = Vysyx_041461_TOP__ConstPool__TABLE_677b417c_0
        [__Vtableidx6];
    __Vtableidx3 = ((0x70U & ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out) 
                              << 4U)) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align 
        = Vysyx_041461_TOP__ConstPool__TABLE_e8cdc630_0
        [__Vtableidx3];
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
    __Vtableidx7 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out) 
                     << 1U) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl 
        = Vysyx_041461_TOP__ConstPool__TABLE_29e045f6_0
        [__Vtableidx7];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_CAUSE 
        = Vysyx_041461_TOP__ConstPool__TABLE_45c67848_0
        [__Vtableidx7];
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
           & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wlast 
        = (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid 
        = (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state));
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
    __Vtemp4372[0U] = ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[2U] 
                        << 1U) | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[1U] 
                                  >> 0x1fU));
    __Vtemp4372[1U] = ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[3U] 
                        << 1U) | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[2U] 
                                  >> 0x1fU));
    __Vtemp4372[2U] = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[3U] 
                       >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp4373, (1ULL + (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer)));
    VL_EXTEND_WQ(65,64, __Vtemp4374, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer);
    VL_EXTEND_WQ(65,64, __Vtemp4377, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__signed_buffer) {
        __Vtemp4378[0U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer 
                                          >> 0x3fU)))
                            ? __Vtemp4373[0U] : __Vtemp4374[0U]);
        __Vtemp4378[1U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer 
                                          >> 0x3fU)))
                            ? __Vtemp4373[1U] : __Vtemp4374[1U]);
        __Vtemp4378[2U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer 
                                          >> 0x3fU)))
                            ? __Vtemp4373[2U] : __Vtemp4374[2U]);
    } else {
        __Vtemp4378[0U] = __Vtemp4377[0U];
        __Vtemp4378[1U] = __Vtemp4377[1U];
        __Vtemp4378[2U] = __Vtemp4377[2U];
    }
    VL_SUB_W(3, __Vtemp4379, __Vtemp4372, __Vtemp4378);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[0U] 
        = __Vtemp4379[0U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[1U] 
        = __Vtemp4379[1U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[2U] 
        = (1U & __Vtemp4379[2U]);
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_positive 
        = (1U & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__signed_buffer)) 
                 | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divw_buffer)
                     ? (~ (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend_buffer 
                                   >> 0x1fU))) : (~ (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend_buffer 
                                                             >> 0x3fU))))));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap 
        = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
            & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out))) 
           | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
              & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF2_trap 
        = (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
              & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
             | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out)))) 
            | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
               & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out)))) 
           | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
              & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap 
        = ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
             & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
            | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
               & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out)))) 
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid;
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
    __Vtableidx2 = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed 
        = Vysyx_041461_TOP__ConstPool__TABLE_0fc9e6c7_0
        [__Vtableidx2];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_divw 
        = Vysyx_041461_TOP__ConstPool__TABLE_ed9e6550_0
        [__Vtableidx2];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__multiplication 
        = (((((0xbU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out)) 
              | (0xcU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
             | (0xdU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
            | (0xeU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
           | (0x18U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__division 
        = ((((((((0xfU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out)) 
                 | (0x10U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
                | (0x11U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
               | (0x12U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
              | (0x19U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
             | (0x1aU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
            | (0x1bU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) 
           | (0x1cU == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out)));
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
    __Vtableidx1 = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed 
        = Vysyx_041461_TOP__ConstPool__TABLE_84736496_0
        [__Vtableidx1];
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
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc = 0ULL;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec_next;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c 
        = ((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))
            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
           [vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out]
            : ((6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out
                : ((7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))
                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out
                    : 0ULL)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [(0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                   >> 0xfU))];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [(0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                   >> 0x14U))];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
        [vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out];
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out 
        = ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
             & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out))) 
            & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align)))
            ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load)
                ? 6U : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store)
                         ? 7U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out)))
            : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ok 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap)
            : ((8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
               & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_wvalid 
        = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
           & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ok 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap)
            : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state)) 
               & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap)));
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
                                                VL_EXTEND_WQ(128,64, __Vtemp4422, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
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
                                                        __Vtemp4422[0U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[1U] 
                                                        = 
                                                        __Vtemp4422[1U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[2U] 
                                                        = 
                                                        __Vtemp4422[2U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[3U] 
                                                        = 
                                                        __Vtemp4422[3U];
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
                                    VL_EXTEND_WQ(128,64, __Vtemp4426, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[0U] 
                                        = __Vtemp4426[0U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[1U] 
                                        = __Vtemp4426[1U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[2U] 
                                        = __Vtemp4426[2U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[3U] 
                                        = __Vtemp4426[3U];
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
                                                VL_EXTEND_WQ(128,64, __Vtemp4428, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
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
                                                        __Vtemp4428[0U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[1U] 
                                                        = 
                                                        __Vtemp4428[1U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[2U] 
                                                        = 
                                                        __Vtemp4428[2U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[3U] 
                                                        = 
                                                        __Vtemp4428[3U];
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
                            VL_EXTEND_WQ(128,64, __Vtemp4432, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[0U] 
                                = __Vtemp4432[0U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[1U] 
                                = __Vtemp4432[1U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[2U] 
                                = __Vtemp4432[2U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[3U] 
                                = __Vtemp4432[3U];
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
                                                VL_EXTEND_WQ(128,64, __Vtemp4434, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
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
                                                        __Vtemp4434[0U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[1U] 
                                                        = 
                                                        __Vtemp4434[1U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[2U] 
                                                        = 
                                                        __Vtemp4434[2U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[3U] 
                                                        = 
                                                        __Vtemp4434[3U];
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
                    VL_EXTEND_WQ(128,64, __Vtemp4438, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[0U] 
                        = __Vtemp4438[0U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[1U] 
                        = __Vtemp4438[1U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[2U] 
                        = __Vtemp4438[2U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[3U] 
                        = __Vtemp4438[3U];
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
                                                VL_EXTEND_WQ(128,64, __Vtemp4440, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
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
                                                        __Vtemp4440[0U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[1U] 
                                                        = 
                                                        __Vtemp4440[1U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[2U] 
                                                        = 
                                                        __Vtemp4440[2U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[3U] 
                                                        = 
                                                        __Vtemp4440[3U];
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
            VL_EXTEND_WQ(128,64, __Vtemp4444, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[0U] 
                = __Vtemp4444[0U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[1U] 
                = __Vtemp4444[1U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[2U] 
                = __Vtemp4444[2U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[3U] 
                = __Vtemp4444[3U];
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
    while ((__Vilp <= 0x39U)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vysyx_041461_TOP___024root___sequent__TOP__16(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___sequent__TOP__16\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp4446;
    VlWide<4>/*127:0*/ __Vtemp4450;
    VlWide<4>/*127:0*/ __Vtemp4451;
    VlWide<4>/*127:0*/ __Vtemp4454;
    VlWide<4>/*127:0*/ __Vtemp4458;
    VlWide<4>/*127:0*/ __Vtemp4459;
    VlWide<4>/*127:0*/ __Vtemp4462;
    VlWide<4>/*127:0*/ __Vtemp4466;
    VlWide<4>/*127:0*/ __Vtemp4467;
    VlWide<4>/*127:0*/ __Vtemp4470;
    VlWide<4>/*127:0*/ __Vtemp4474;
    VlWide<4>/*127:0*/ __Vtemp4475;
    VlWide<4>/*127:0*/ __Vtemp4477;
    VlWide<3>/*95:0*/ __Vtemp4487;
    VlWide<3>/*95:0*/ __Vtemp4488;
    VlWide<4>/*127:0*/ __Vtemp4498;
    VlWide<4>/*127:0*/ __Vtemp4504;
    VlWide<4>/*127:0*/ __Vtemp4506;
    VlWide<4>/*127:0*/ __Vtemp4507;
    VlWide<4>/*127:0*/ __Vtemp4509;
    VlWide<4>/*127:0*/ __Vtemp4515;
    VlWide<4>/*127:0*/ __Vtemp4517;
    VlWide<4>/*127:0*/ __Vtemp4518;
    VlWide<4>/*127:0*/ __Vtemp4520;
    VlWide<4>/*127:0*/ __Vtemp4526;
    VlWide<4>/*127:0*/ __Vtemp4528;
    VlWide<4>/*127:0*/ __Vtemp4529;
    VlWide<4>/*127:0*/ __Vtemp4531;
    VlWide<4>/*127:0*/ __Vtemp4537;
    VlWide<4>/*127:0*/ __Vtemp4539;
    VlWide<4>/*127:0*/ __Vtemp4540;
    VlWide<4>/*127:0*/ __Vtemp4542;
    VlWide<4>/*127:0*/ __Vtemp4548;
    VlWide<4>/*127:0*/ __Vtemp4550;
    VlWide<4>/*127:0*/ __Vtemp4551;
    VlWide<4>/*127:0*/ __Vtemp4553;
    VlWide<4>/*127:0*/ __Vtemp4559;
    VlWide<4>/*127:0*/ __Vtemp4561;
    VlWide<4>/*127:0*/ __Vtemp4562;
    VlWide<4>/*127:0*/ __Vtemp4564;
    VlWide<4>/*127:0*/ __Vtemp4570;
    VlWide<4>/*127:0*/ __Vtemp4572;
    VlWide<4>/*127:0*/ __Vtemp4573;
    VlWide<4>/*127:0*/ __Vtemp4575;
    VlWide<4>/*127:0*/ __Vtemp4581;
    VlWide<4>/*127:0*/ __Vtemp4583;
    VlWide<4>/*127:0*/ __Vtemp4584;
    VlWide<4>/*127:0*/ __Vtemp4586;
    VlWide<4>/*127:0*/ __Vtemp4592;
    VlWide<4>/*127:0*/ __Vtemp4594;
    VlWide<4>/*127:0*/ __Vtemp4595;
    VlWide<4>/*127:0*/ __Vtemp4597;
    VlWide<4>/*127:0*/ __Vtemp4603;
    VlWide<4>/*127:0*/ __Vtemp4605;
    VlWide<4>/*127:0*/ __Vtemp4606;
    VlWide<4>/*127:0*/ __Vtemp4608;
    VlWide<4>/*127:0*/ __Vtemp4614;
    VlWide<4>/*127:0*/ __Vtemp4616;
    VlWide<4>/*127:0*/ __Vtemp4617;
    VlWide<4>/*127:0*/ __Vtemp4619;
    VlWide<4>/*127:0*/ __Vtemp4625;
    VlWide<4>/*127:0*/ __Vtemp4627;
    VlWide<4>/*127:0*/ __Vtemp4628;
    VlWide<4>/*127:0*/ __Vtemp4630;
    VlWide<4>/*127:0*/ __Vtemp4636;
    VlWide<4>/*127:0*/ __Vtemp4638;
    VlWide<4>/*127:0*/ __Vtemp4639;
    VlWide<4>/*127:0*/ __Vtemp4641;
    VlWide<4>/*127:0*/ __Vtemp4647;
    VlWide<4>/*127:0*/ __Vtemp4649;
    VlWide<4>/*127:0*/ __Vtemp4650;
    VlWide<4>/*127:0*/ __Vtemp4652;
    VlWide<4>/*127:0*/ __Vtemp4658;
    VlWide<4>/*127:0*/ __Vtemp4660;
    VlWide<4>/*127:0*/ __Vtemp4661;
    VlWide<4>/*127:0*/ __Vtemp4663;
    VlWide<4>/*127:0*/ __Vtemp4669;
    VlWide<4>/*127:0*/ __Vtemp4671;
    VlWide<4>/*127:0*/ __Vtemp4672;
    VlWide<4>/*127:0*/ __Vtemp4674;
    VlWide<4>/*127:0*/ __Vtemp4680;
    VlWide<4>/*127:0*/ __Vtemp4682;
    VlWide<4>/*127:0*/ __Vtemp4683;
    VlWide<4>/*127:0*/ __Vtemp4685;
    VlWide<4>/*127:0*/ __Vtemp4691;
    VlWide<4>/*127:0*/ __Vtemp4693;
    VlWide<4>/*127:0*/ __Vtemp4694;
    VlWide<4>/*127:0*/ __Vtemp4696;
    VlWide<4>/*127:0*/ __Vtemp4702;
    VlWide<4>/*127:0*/ __Vtemp4704;
    VlWide<4>/*127:0*/ __Vtemp4705;
    VlWide<4>/*127:0*/ __Vtemp4707;
    VlWide<4>/*127:0*/ __Vtemp4713;
    VlWide<4>/*127:0*/ __Vtemp4715;
    VlWide<4>/*127:0*/ __Vtemp4716;
    VlWide<4>/*127:0*/ __Vtemp4718;
    VlWide<4>/*127:0*/ __Vtemp4724;
    VlWide<4>/*127:0*/ __Vtemp4726;
    VlWide<4>/*127:0*/ __Vtemp4727;
    VlWide<4>/*127:0*/ __Vtemp4729;
    VlWide<4>/*127:0*/ __Vtemp4735;
    VlWide<4>/*127:0*/ __Vtemp4737;
    VlWide<4>/*127:0*/ __Vtemp4738;
    VlWide<4>/*127:0*/ __Vtemp4740;
    VlWide<4>/*127:0*/ __Vtemp4746;
    VlWide<4>/*127:0*/ __Vtemp4748;
    VlWide<4>/*127:0*/ __Vtemp4749;
    VlWide<4>/*127:0*/ __Vtemp4751;
    VlWide<4>/*127:0*/ __Vtemp4757;
    VlWide<4>/*127:0*/ __Vtemp4759;
    VlWide<4>/*127:0*/ __Vtemp4760;
    VlWide<4>/*127:0*/ __Vtemp4762;
    VlWide<4>/*127:0*/ __Vtemp4768;
    VlWide<4>/*127:0*/ __Vtemp4770;
    VlWide<4>/*127:0*/ __Vtemp4771;
    VlWide<4>/*127:0*/ __Vtemp4773;
    VlWide<4>/*127:0*/ __Vtemp4779;
    VlWide<4>/*127:0*/ __Vtemp4781;
    VlWide<4>/*127:0*/ __Vtemp4782;
    VlWide<4>/*127:0*/ __Vtemp4784;
    VlWide<4>/*127:0*/ __Vtemp4790;
    VlWide<4>/*127:0*/ __Vtemp4792;
    VlWide<4>/*127:0*/ __Vtemp4793;
    VlWide<4>/*127:0*/ __Vtemp4795;
    VlWide<4>/*127:0*/ __Vtemp4801;
    VlWide<4>/*127:0*/ __Vtemp4803;
    VlWide<4>/*127:0*/ __Vtemp4804;
    VlWide<4>/*127:0*/ __Vtemp4806;
    VlWide<4>/*127:0*/ __Vtemp4812;
    VlWide<4>/*127:0*/ __Vtemp4814;
    VlWide<4>/*127:0*/ __Vtemp4815;
    VlWide<4>/*127:0*/ __Vtemp4817;
    VlWide<4>/*127:0*/ __Vtemp4823;
    VlWide<4>/*127:0*/ __Vtemp4825;
    VlWide<4>/*127:0*/ __Vtemp4826;
    VlWide<4>/*127:0*/ __Vtemp4828;
    VlWide<4>/*127:0*/ __Vtemp4834;
    VlWide<4>/*127:0*/ __Vtemp4836;
    VlWide<4>/*127:0*/ __Vtemp4837;
    VlWide<4>/*127:0*/ __Vtemp4839;
    VlWide<4>/*127:0*/ __Vtemp4845;
    VlWide<4>/*127:0*/ __Vtemp4847;
    VlWide<4>/*127:0*/ __Vtemp4848;
    VlWide<4>/*127:0*/ __Vtemp4850;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[0x3aU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2
        [0x3aU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[0x3bU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2
        [0x3bU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[0x3cU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2
        [0x3cU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[0x3dU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2
        [0x3dU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[0x3eU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2
        [0x3eU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[0x3fU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2
        [0x3fU];
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize_next 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize)
            : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wclint 
        = (((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr) 
            & (0x200bfffU >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr)) 
           | ((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr) 
              & (0x2004007U >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr_next 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr
            : vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint 
        = (((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr) 
            & (0x200bfffU >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr)) 
           | ((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr) 
              & (0x2004007U >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr)));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_valid_in 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state)) 
           & (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                 & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap))) 
               & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict))) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__division)));
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
                                                    VL_EXTEND_WQ(128,64, __Vtemp4446, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
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
                                                            __Vtemp4446[0U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                                                            = 
                                                            __Vtemp4446[1U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                                                            = 
                                                            __Vtemp4446[2U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                                                            = 
                                                            __Vtemp4446[3U];
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
                VL_EXTEND_WQ(128,64, __Vtemp4450, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] 
                    = __Vtemp4450[0U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                    = __Vtemp4450[1U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                    = __Vtemp4450[2U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                    = __Vtemp4450[3U];
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1) {
                VL_EXTEND_WQ(128,64, __Vtemp4451, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] 
                    = __Vtemp4451[0U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                    = __Vtemp4451[1U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                    = __Vtemp4451[2U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                    = __Vtemp4451[3U];
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
                                                    VL_EXTEND_WQ(128,64, __Vtemp4454, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                                                            = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                                                            = (IData)(
                                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
                                                                       >> 0x20U));
                                                    } else {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] 
                                                            = 
                                                            __Vtemp4454[0U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] 
                                                            = 
                                                            __Vtemp4454[1U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                                                            = 
                                                            __Vtemp4454[2U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                                                            = 
                                                            __Vtemp4454[3U];
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] = 0U;
                            vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] = 0U;
                            vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                                = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                            vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                                = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
                                           >> 0x20U));
                        }
                    } else {
                        VL_EXTEND_WQ(128,64, __Vtemp4458, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] 
                            = __Vtemp4458[0U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] 
                            = __Vtemp4458[1U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                            = __Vtemp4458[2U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                            = __Vtemp4458[3U];
                    }
                }
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)))) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3) {
                        VL_EXTEND_WQ(128,64, __Vtemp4459, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] 
                            = __Vtemp4459[0U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] 
                            = __Vtemp4459[1U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                            = __Vtemp4459[2U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                            = __Vtemp4459[3U];
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
                                                    VL_EXTEND_WQ(128,64, __Vtemp4462, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                                            = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                                            = (IData)(
                                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
                                                                       >> 0x20U));
                                                    } else {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] 
                                                            = 
                                                            __Vtemp4462[0U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] 
                                                            = 
                                                            __Vtemp4462[1U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                                            = 
                                                            __Vtemp4462[2U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                                            = 
                                                            __Vtemp4462[3U];
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] = 0U;
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] = 0U;
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                        = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                        = (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
                                                   >> 0x20U));
                                }
                            } else {
                                VL_EXTEND_WQ(128,64, __Vtemp4466, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] 
                                    = __Vtemp4466[0U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] 
                                    = __Vtemp4466[1U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                    = __Vtemp4466[2U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                    = __Vtemp4466[3U];
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
                                VL_EXTEND_WQ(128,64, __Vtemp4467, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] 
                                    = __Vtemp4467[0U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] 
                                    = __Vtemp4467[1U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                    = __Vtemp4467[2U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                    = __Vtemp4467[3U];
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
                                                    VL_EXTEND_WQ(128,64, __Vtemp4470, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line))) {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] = 0U;
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                                            = (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                                            = (IData)(
                                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata 
                                                                       >> 0x20U));
                                                    } else {
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] 
                                                            = 
                                                            __Vtemp4470[0U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] 
                                                            = 
                                                            __Vtemp4470[1U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                                            = 
                                                            __Vtemp4470[2U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                                            = 
                                                            __Vtemp4470[3U];
                                                    }
                                                }
                                            }
                                        } else {
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
                                        VL_EXTEND_WQ(128,64, __Vtemp4474, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] 
                                            = __Vtemp4474[0U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] 
                                            = __Vtemp4474[1U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                            = __Vtemp4474[2U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                            = __Vtemp4474[3U];
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
                                        VL_EXTEND_WQ(128,64, __Vtemp4475, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] 
                                            = __Vtemp4475[0U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] 
                                            = __Vtemp4475[1U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                            = __Vtemp4475[2U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                            = __Vtemp4475[3U];
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
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid_next 
            = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? ((((2U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                     & (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) 
                    & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint))
                    ? 1U : 0U) : 0U);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next 
            = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? ((((2U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                     & (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) 
                    & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint))
                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr
                    : 0U) : 0U);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize_next 
            = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? ((((2U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                     & (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) 
                    & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint))
                    ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize)
                    : 0U) : 0U);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize;
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
    VL_EXTEND_WQ(128,64, __Vtemp4477, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1);
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U] 
            = __Vtemp4477[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U] 
            = __Vtemp4477[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U] 
            = __Vtemp4477[2U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U] 
            = __Vtemp4477[3U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1)
                : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                    ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1)
                    : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                           >> 0x20U)) : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                          ? (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                                                     >> 0x20U))
                                          : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? (IData)((- (QData)((IData)((1U & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                                                            >> 0x3fU)))))))
                : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                    ? (IData)((- (QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                                                             >> 0x3fU)))))))
                    : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? (IData)(((- (QData)((IData)((1U & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                                                             >> 0x3fU)))))) 
                           >> 0x20U)) : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                          ? (IData)(
                                                    ((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                                                                                >> 0x3fU)))))) 
                                                     >> 0x20U))
                                          : 0U));
    }
    VL_EXTEND_WQ(66,64, __Vtemp4487, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
    VL_EXTEND_WQ(66,64, __Vtemp4488, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
            = __Vtemp4487[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
            = __Vtemp4487[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
            = __Vtemp4487[2U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp4488[0U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                      ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)
                                      : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp4488[1U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                      ? (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                 >> 0x20U))
                                      : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp4488[2U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                      ? (3U & (- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                                     >> 0x3fU))))))
                                      : 0U));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 3U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                 >> 2U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 1U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 5U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                 >> 4U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 3U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 7U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                 >> 6U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 5U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 9U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                 >> 8U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 7U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 0xbU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0xaU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 0xdU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0xcU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                >> 0xbU)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 0xfU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0xeU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                >> 0xdU)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 0x11U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                    >> 0x10U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 0xfU)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 0x13U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                    >> 0x12U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 0x11U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 0x15U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                    >> 0x14U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 0x13U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 0x17U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                    >> 0x16U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 0x15U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 0x19U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                    >> 0x18U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 0x17U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 0x1bU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                    >> 0x1aU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 0x19U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 0x1dU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                    >> 0x1cU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 0x1bU)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                      >> 0x1fU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                    >> 0x1eU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 0x1dU)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 1U)) & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U]) 
                 & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                    >> 0x1fU)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 3U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                 >> 2U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 1U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 5U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                 >> 4U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 3U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 7U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                 >> 6U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 5U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 9U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                 >> 8U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 7U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 0xbU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0xaU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                >> 9U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 0xdU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0xcU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                >> 0xbU)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 0xfU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0xeU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                >> 0xdU)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 0x11U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                    >> 0x10U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 0xfU)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 0x13U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                    >> 0x12U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 0x11U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 0x15U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                    >> 0x14U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 0x13U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 0x17U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                    >> 0x16U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 0x15U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 0x19U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                    >> 0x18U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 0x17U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 0x1bU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                    >> 0x1aU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 0x19U)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 0x1dU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                    >> 0x1cU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 0x1bU)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                      >> 0x1fU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                    >> 0x1eU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 0x1dU)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive 
        = (1U & (((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
                      >> 1U)) & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U]) 
                 & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                    >> 0x1fU)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 1U) & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U]));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 1U)) & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U]));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 1U) & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U])));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 3U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                              >> 2U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                           >> 1U))) 
                            | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 2U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 1U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 3U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                  >> 2U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                               >> 1U))) 
                                | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                       >> 2U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 1U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 3U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                >> 2U))) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                               >> 1U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 5U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                              >> 4U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                           >> 3U))) 
                            | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 4U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 3U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 5U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                  >> 4U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                               >> 3U))) 
                                | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                       >> 4U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 3U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 5U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                >> 4U))) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                               >> 3U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 7U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                              >> 6U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                           >> 5U))) 
                            | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 6U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 5U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 7U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                  >> 6U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                               >> 5U))) 
                                | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                       >> 6U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 5U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 7U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                >> 6U))) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                               >> 5U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 9U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                              >> 8U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                           >> 7U))) 
                            | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 8U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 7U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 9U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                  >> 8U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                               >> 7U))) 
                                | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                       >> 8U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 7U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 9U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                >> 8U))) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                               >> 7U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 0xbU) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                >> 0xaU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                               >> 9U))) 
                              | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                     >> 0xaU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 0xbU)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                    >> 0xaU) & (~ (
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 9U))) 
                                  | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                         >> 0xaU)) 
                                     & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                        >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 0xbU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                  >> 0xaU))) & (~ (
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 9U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 0xdU) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                >> 0xcU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                               >> 0xbU))) 
                              | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                     >> 0xcU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 0xbU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 0xdU)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                    >> 0xcU) & (~ (
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0xbU))) 
                                  | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                         >> 0xcU)) 
                                     & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                        >> 0xbU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 0xdU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                  >> 0xcU))) & (~ (
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0xbU))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 0xfU) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                >> 0xeU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                               >> 0xdU))) 
                              | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                     >> 0xeU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                  >> 0xdU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 0xfU)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                    >> 0xeU) & (~ (
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0xdU))) 
                                  | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                         >> 0xeU)) 
                                     & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                        >> 0xdU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 0xfU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                  >> 0xeU))) & (~ (
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0xdU))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 0x11U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                 >> 0x10U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                 >> 0xfU))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                      >> 0x10U)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0xfU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 0x11U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                     >> 0x10U) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0xfU))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                          >> 0x10U)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                         >> 0xfU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 0x11U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x10U))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0xfU))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 0x13U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                 >> 0x12U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                 >> 0x11U))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                      >> 0x12U)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x11U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 0x13U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                     >> 0x12U) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0x11U))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                          >> 0x12U)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                         >> 0x11U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 0x13U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x12U))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0x11U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 0x15U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                 >> 0x14U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                 >> 0x13U))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                      >> 0x14U)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x13U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 0x15U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                     >> 0x14U) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0x13U))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                          >> 0x14U)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                         >> 0x13U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 0x15U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x14U))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0x13U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 0x17U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                 >> 0x16U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                 >> 0x15U))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                      >> 0x16U)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x15U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 0x17U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                     >> 0x16U) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0x15U))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                          >> 0x16U)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                         >> 0x15U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 0x17U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x16U))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0x15U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 0x19U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                 >> 0x18U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                 >> 0x17U))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                      >> 0x18U)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x17U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 0x19U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                     >> 0x18U) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0x17U))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                          >> 0x18U)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                         >> 0x17U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 0x19U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x18U))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0x17U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 0x1bU) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                 >> 0x1aU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                 >> 0x19U))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                      >> 0x1aU)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x19U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 0x1bU)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                     >> 0x1aU) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0x19U))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                          >> 0x1aU)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                         >> 0x19U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 0x1bU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x1aU))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0x19U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 0x1dU) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                 >> 0x1cU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                 >> 0x1bU))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                      >> 0x1cU)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x1bU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 0x1dU)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                     >> 0x1cU) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0x1bU))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                          >> 0x1cU)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                         >> 0x1bU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 0x1dU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x1cU))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0x1bU))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 0x1fU) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                 >> 0x1eU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                 >> 0x1dU))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                      >> 0x1eU)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x1dU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 0x1fU)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                     >> 0x1eU) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0x1dU))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                          >> 0x1eU)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                         >> 0x1dU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                   >> 0x1fU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x1eU))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                   >> 0x1dU))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 1U) & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                             & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                   >> 0x1fU))) | ((~ 
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U]) 
                                                  & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                     >> 0x1fU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 1U)) & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                 & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                       >> 0x1fU))) 
                                | ((~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U]) 
                                   & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                      >> 0x1fU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 1U) & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U])) 
                 & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                       >> 0x1fU))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 3U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                              >> 2U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                           >> 1U))) 
                            | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 2U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 1U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 3U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                  >> 2U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                               >> 1U))) 
                                | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                       >> 2U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 1U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 3U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                >> 2U))) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                               >> 1U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 5U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                              >> 4U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                           >> 3U))) 
                            | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 4U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 3U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 5U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                  >> 4U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                               >> 3U))) 
                                | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                       >> 4U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 3U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 5U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                >> 4U))) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                               >> 3U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 7U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                              >> 6U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                           >> 5U))) 
                            | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 6U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 5U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 7U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                  >> 6U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                               >> 5U))) 
                                | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                       >> 6U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 5U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 7U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                >> 6U))) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                               >> 5U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 9U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                              >> 8U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                           >> 7U))) 
                            | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 8U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 7U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 9U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                  >> 8U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                               >> 7U))) 
                                | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                       >> 8U)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 7U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 9U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                >> 8U))) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                               >> 7U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 0xbU) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                >> 0xaU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                               >> 9U))) 
                              | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                     >> 0xaU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 0xbU)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                    >> 0xaU) & (~ (
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 9U))) 
                                  | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                         >> 0xaU)) 
                                     & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                        >> 9U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 0xbU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                  >> 0xaU))) & (~ (
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 9U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 0xdU) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                >> 0xcU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                               >> 0xbU))) 
                              | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                     >> 0xcU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 0xbU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 0xdU)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                    >> 0xcU) & (~ (
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0xbU))) 
                                  | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                         >> 0xcU)) 
                                     & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                        >> 0xbU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 0xdU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                  >> 0xcU))) & (~ (
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0xbU))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 0xfU) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                >> 0xeU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                               >> 0xdU))) 
                              | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                     >> 0xeU)) & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                  >> 0xdU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 0xfU)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                    >> 0xeU) & (~ (
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0xdU))) 
                                  | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                         >> 0xeU)) 
                                     & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                        >> 0xdU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 0xfU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                  >> 0xeU))) & (~ (
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0xdU))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 0x11U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                 >> 0x10U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                 >> 0xfU))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                      >> 0x10U)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0xfU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 0x11U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                     >> 0x10U) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0xfU))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                          >> 0x10U)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                         >> 0xfU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 0x11U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x10U))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0xfU))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 0x13U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                 >> 0x12U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                 >> 0x11U))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                      >> 0x12U)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x11U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 0x13U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                     >> 0x12U) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0x11U))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                          >> 0x12U)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                         >> 0x11U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 0x13U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x12U))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0x11U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 0x15U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                 >> 0x14U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                 >> 0x13U))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                      >> 0x14U)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x13U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 0x15U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                     >> 0x14U) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0x13U))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                          >> 0x14U)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                         >> 0x13U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 0x15U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x14U))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0x13U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 0x17U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                 >> 0x16U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                 >> 0x15U))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                      >> 0x16U)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x15U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 0x17U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                     >> 0x16U) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0x15U))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                          >> 0x16U)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                         >> 0x15U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 0x17U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x16U))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0x15U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 0x19U) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                 >> 0x18U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                 >> 0x17U))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                      >> 0x18U)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x17U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 0x19U)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                     >> 0x18U) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0x17U))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                          >> 0x18U)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                         >> 0x17U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 0x19U) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x18U))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0x17U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 0x1bU) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                 >> 0x1aU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                 >> 0x19U))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                      >> 0x1aU)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x19U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 0x1bU)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                     >> 0x1aU) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0x19U))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                          >> 0x1aU)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                         >> 0x19U)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 0x1bU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x1aU))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0x19U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 0x1dU) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                 >> 0x1cU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                 >> 0x1bU))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                      >> 0x1cU)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x1bU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 0x1dU)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                     >> 0x1cU) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0x1bU))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                          >> 0x1cU)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                         >> 0x1bU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 0x1dU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x1cU))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0x1bU))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                  >> 0x1fU) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                 >> 0x1eU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                 >> 0x1dU))) 
                               | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                      >> 0x1eU)) & 
                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x1dU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                     >> 0x1fU)) & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                     >> 0x1eU) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0x1dU))) 
                                   | ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                          >> 0x1eU)) 
                                      & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                         >> 0x1dU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                   >> 0x1fU) & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x1eU))) & (~ 
                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                   >> 0x1dU))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
                  >> 1U) & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
                             & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                   >> 0x1fU))) | ((~ 
                                                   vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U]) 
                                                  & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                     >> 0x1fU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
                     >> 1U)) & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
                                 & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                       >> 0x1fU))) 
                                | ((~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U]) 
                                   & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                      >> 0x1fU)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative 
        = (1U & (((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
                   >> 1U) & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U])) 
                 & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                       >> 0x1fU))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4498, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 1U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][0U] 
            = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][1U] 
            = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][2U] 
            = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][3U] 
            = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp4498[0U]) : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp4498[1U]) : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp4498[2U]) : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp4498[3U]) : 0U));
    }
    VL_SHIFTL_WWI(128,128,32, __Vtemp4504, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4506, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4507, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4509, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][0U] 
            = (~ __Vtemp4504[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][1U] 
            = (~ __Vtemp4504[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][2U] 
            = (~ __Vtemp4504[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][3U] 
            = (~ __Vtemp4504[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4506[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4507[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4509[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4506[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4507[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4509[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4506[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4507[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4509[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4506[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4507[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4509[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__2__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4515, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4517, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4518, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4520, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][0U] 
            = (~ __Vtemp4515[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][1U] 
            = (~ __Vtemp4515[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][2U] 
            = (~ __Vtemp4515[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][3U] 
            = (~ __Vtemp4515[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4517[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4518[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4520[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4517[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4518[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4520[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4517[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4518[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4520[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4517[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4518[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4520[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__4__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4526, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4528, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4529, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4531, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][0U] 
            = (~ __Vtemp4526[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][1U] 
            = (~ __Vtemp4526[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][2U] 
            = (~ __Vtemp4526[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][3U] 
            = (~ __Vtemp4526[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4528[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4529[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4531[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4528[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4529[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4531[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4528[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4529[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4531[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4528[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4529[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4531[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__6__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4537, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4539, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4540, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4542, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][0U] 
            = (~ __Vtemp4537[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][1U] 
            = (~ __Vtemp4537[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][2U] 
            = (~ __Vtemp4537[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][3U] 
            = (~ __Vtemp4537[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4539[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4540[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4542[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4539[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4540[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4542[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4539[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4540[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4542[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4539[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4540[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4542[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__8__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4548, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4550, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4551, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4553, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][0U] 
            = (~ __Vtemp4548[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][1U] 
            = (~ __Vtemp4548[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][2U] 
            = (~ __Vtemp4548[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][3U] 
            = (~ __Vtemp4548[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4550[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4551[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4553[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4550[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4551[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4553[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4550[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4551[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4553[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4550[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4551[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4553[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__10__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4559, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4561, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4562, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4564, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][0U] 
            = (~ __Vtemp4559[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][1U] 
            = (~ __Vtemp4559[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][2U] 
            = (~ __Vtemp4559[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][3U] 
            = (~ __Vtemp4559[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4561[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4562[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4564[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4561[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4562[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4564[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4561[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4562[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4564[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4561[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4562[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4564[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__12__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4570, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4572, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4573, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4575, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][0U] 
            = (~ __Vtemp4570[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][1U] 
            = (~ __Vtemp4570[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][2U] 
            = (~ __Vtemp4570[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][3U] 
            = (~ __Vtemp4570[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4572[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4573[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4575[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4572[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4573[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4575[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4572[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4573[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4575[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4572[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4573[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4575[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__14__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4581, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4583, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4584, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4586, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][0U] 
            = (~ __Vtemp4581[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][1U] 
            = (~ __Vtemp4581[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][2U] 
            = (~ __Vtemp4581[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][3U] 
            = (~ __Vtemp4581[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4583[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4584[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4586[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4583[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4584[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4586[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4583[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4584[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4586[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4583[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4584[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4586[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__16__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4592, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4594, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4595, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4597, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][0U] 
            = (~ __Vtemp4592[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][1U] 
            = (~ __Vtemp4592[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][2U] 
            = (~ __Vtemp4592[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][3U] 
            = (~ __Vtemp4592[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4594[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4595[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4597[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4594[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4595[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4597[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4594[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4595[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4597[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4594[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4595[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4597[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__18__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4603, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4605, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4606, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4608, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][0U] 
            = (~ __Vtemp4603[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][1U] 
            = (~ __Vtemp4603[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][2U] 
            = (~ __Vtemp4603[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][3U] 
            = (~ __Vtemp4603[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4605[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4606[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4608[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4605[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4606[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4608[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4605[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4606[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4608[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4605[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4606[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4608[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__20__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4614, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4616, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4617, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4619, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][0U] 
            = (~ __Vtemp4614[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][1U] 
            = (~ __Vtemp4614[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][2U] 
            = (~ __Vtemp4614[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][3U] 
            = (~ __Vtemp4614[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4616[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4617[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4619[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4616[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4617[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4619[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4616[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4617[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4619[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4616[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4617[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4619[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__22__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4625, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4627, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4628, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4630, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][0U] 
            = (~ __Vtemp4625[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][1U] 
            = (~ __Vtemp4625[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][2U] 
            = (~ __Vtemp4625[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][3U] 
            = (~ __Vtemp4625[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4627[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4628[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4630[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4627[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4628[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4630[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4627[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4628[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4630[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4627[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4628[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4630[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__24__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4636, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4638, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4639, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4641, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][0U] 
            = (~ __Vtemp4636[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][1U] 
            = (~ __Vtemp4636[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][2U] 
            = (~ __Vtemp4636[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][3U] 
            = (~ __Vtemp4636[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4638[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4639[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4641[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4638[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4639[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4641[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4638[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4639[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4641[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4638[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4639[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4641[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__26__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4647, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4649, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4650, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4652, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][0U] 
            = (~ __Vtemp4647[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][1U] 
            = (~ __Vtemp4647[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][2U] 
            = (~ __Vtemp4647[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][3U] 
            = (~ __Vtemp4647[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4649[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4650[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4652[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4649[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4650[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4652[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4649[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4650[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4652[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4649[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4650[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4652[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__28__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4658, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4660, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4661, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4663, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][0U] 
            = (~ __Vtemp4658[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][1U] 
            = (~ __Vtemp4658[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][2U] 
            = (~ __Vtemp4658[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][3U] 
            = (~ __Vtemp4658[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4660[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4661[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4663[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4660[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4661[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4663[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4660[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4661[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4663[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4660[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4661[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4663[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__30__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4669, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4671, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4672, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4674, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][0U] 
            = (~ __Vtemp4669[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][1U] 
            = (~ __Vtemp4669[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][2U] 
            = (~ __Vtemp4669[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][3U] 
            = (~ __Vtemp4669[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4671[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4672[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4674[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4671[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4672[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4674[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4671[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4672[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4674[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4671[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4672[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4674[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__32__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4680, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4682, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4683, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4685, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][0U] 
            = (~ __Vtemp4680[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][1U] 
            = (~ __Vtemp4680[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][2U] 
            = (~ __Vtemp4680[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][3U] 
            = (~ __Vtemp4680[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4682[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4683[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4685[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4682[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4683[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4685[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4682[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4683[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4685[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4682[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4683[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4685[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__34__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4691, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4693, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4694, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4696, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][0U] 
            = (~ __Vtemp4691[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][1U] 
            = (~ __Vtemp4691[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][2U] 
            = (~ __Vtemp4691[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][3U] 
            = (~ __Vtemp4691[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4693[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4694[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4696[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4693[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4694[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4696[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4693[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4694[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4696[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4693[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4694[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4696[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__36__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4702, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4704, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4705, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4707, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][0U] 
            = (~ __Vtemp4702[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][1U] 
            = (~ __Vtemp4702[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][2U] 
            = (~ __Vtemp4702[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][3U] 
            = (~ __Vtemp4702[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4704[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4705[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4707[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4704[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4705[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4707[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4704[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4705[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4707[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4704[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4705[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4707[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__38__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4713, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4715, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4716, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4718, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][0U] 
            = (~ __Vtemp4713[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][1U] 
            = (~ __Vtemp4713[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][2U] 
            = (~ __Vtemp4713[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][3U] 
            = (~ __Vtemp4713[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4715[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4716[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4718[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4715[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4716[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4718[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4715[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4716[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4718[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4715[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4716[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4718[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__40__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4724, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4726, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4727, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4729, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][0U] 
            = (~ __Vtemp4724[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][1U] 
            = (~ __Vtemp4724[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][2U] 
            = (~ __Vtemp4724[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][3U] 
            = (~ __Vtemp4724[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4726[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4727[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4729[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4726[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4727[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4729[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4726[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4727[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4729[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4726[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4727[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4729[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__42__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4735, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4737, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4738, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4740, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][0U] 
            = (~ __Vtemp4735[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][1U] 
            = (~ __Vtemp4735[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][2U] 
            = (~ __Vtemp4735[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][3U] 
            = (~ __Vtemp4735[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4737[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4738[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4740[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4737[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4738[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4740[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4737[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4738[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4740[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4737[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4738[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4740[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__44__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4746, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4748, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4749, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4751, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][0U] 
            = (~ __Vtemp4746[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][1U] 
            = (~ __Vtemp4746[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][2U] 
            = (~ __Vtemp4746[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][3U] 
            = (~ __Vtemp4746[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4748[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4749[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4751[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4748[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4749[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4751[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4748[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4749[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4751[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4748[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4749[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4751[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__46__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4757, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4759, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4760, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4762, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][0U] 
            = (~ __Vtemp4757[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][1U] 
            = (~ __Vtemp4757[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][2U] 
            = (~ __Vtemp4757[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][3U] 
            = (~ __Vtemp4757[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4759[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4760[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4762[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4759[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4760[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4762[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4759[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4760[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4762[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4759[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4760[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4762[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__48__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4768, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4770, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4771, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4773, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][0U] 
            = (~ __Vtemp4768[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][1U] 
            = (~ __Vtemp4768[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][2U] 
            = (~ __Vtemp4768[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][3U] 
            = (~ __Vtemp4768[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4770[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4771[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4773[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4770[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4771[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4773[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4770[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4771[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4773[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4770[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4771[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4773[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__50__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4779, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4781, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4782, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4784, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][0U] 
            = (~ __Vtemp4779[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][1U] 
            = (~ __Vtemp4779[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][2U] 
            = (~ __Vtemp4779[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][3U] 
            = (~ __Vtemp4779[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4781[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4782[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4784[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4781[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4782[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4784[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4781[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4782[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4784[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4781[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4782[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4784[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__52__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4790, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4792, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4793, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4795, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][0U] 
            = (~ __Vtemp4790[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][1U] 
            = (~ __Vtemp4790[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][2U] 
            = (~ __Vtemp4790[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][3U] 
            = (~ __Vtemp4790[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4792[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4793[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4795[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4792[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4793[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4795[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4792[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4793[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4795[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4792[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4793[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4795[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__54__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4801, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4803, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4804, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4806, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][0U] 
            = (~ __Vtemp4801[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][1U] 
            = (~ __Vtemp4801[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][2U] 
            = (~ __Vtemp4801[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][3U] 
            = (~ __Vtemp4801[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4803[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4804[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4806[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4803[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4804[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4806[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4803[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4804[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4806[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4803[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4804[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4806[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__56__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4812, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4814, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4815, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4817, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][0U] 
            = (~ __Vtemp4812[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][1U] 
            = (~ __Vtemp4812[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][2U] 
            = (~ __Vtemp4812[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][3U] 
            = (~ __Vtemp4812[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4814[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4815[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4817[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4814[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4815[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4817[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4814[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4815[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4817[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4814[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4815[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4817[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__58__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4823, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4825, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4826, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4828, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][0U] 
            = (~ __Vtemp4823[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][1U] 
            = (~ __Vtemp4823[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][2U] 
            = (~ __Vtemp4823[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][3U] 
            = (~ __Vtemp4823[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4825[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4826[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4828[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4825[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4826[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4828[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4825[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4826[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4828[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4825[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4826[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4828[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__60__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4834, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4836, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4837, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4839, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][0U] 
            = (~ __Vtemp4834[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][1U] 
            = (~ __Vtemp4834[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][2U] 
            = (~ __Vtemp4834[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][3U] 
            = (~ __Vtemp4834[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4836[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4837[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4839[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4836[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4837[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4839[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4836[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4837[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4839[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4836[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4837[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4839[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__62__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4845, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4847, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4848, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4850, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][0U] 
            = (~ __Vtemp4845[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][1U] 
            = (~ __Vtemp4845[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][2U] 
            = (~ __Vtemp4845[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][3U] 
            = (~ __Vtemp4845[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4847[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4848[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4850[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4847[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4848[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4850[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4847[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4848[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4850[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4847[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4848[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4850[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__64__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)));
}
