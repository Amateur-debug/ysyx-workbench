// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041461_TOP.h for the primary calling header

#include "Vysyx_041461_TOP___024root.h"
#include "Vysyx_041461_TOP__Syms.h"

#include "verilated_dpi.h"

void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__get_WB_valid_TOP(CData/*7:0*/ a);
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_29e045f6_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_0fc9e6c7_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_ed9e6550_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_d1140eb3_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_8cb9ad1b_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_be24ae63_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_84736496_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_a802bbfe_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_1adeb555_0;

VL_INLINE_OPT void Vysyx_041461_TOP___024root___sequent__TOP__15(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___sequent__TOP__15\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*4:0*/ __Vtableidx3;
    CData/*4:0*/ __Vtableidx4;
    CData/*4:0*/ __Vtableidx5;
    SData/*8:0*/ __Vtableidx6;
    VlWide<4>/*127:0*/ __Vtemp4384;
    VlWide<4>/*127:0*/ __Vtemp4388;
    VlWide<4>/*127:0*/ __Vtemp4390;
    VlWide<4>/*127:0*/ __Vtemp4394;
    VlWide<4>/*127:0*/ __Vtemp4396;
    VlWide<4>/*127:0*/ __Vtemp4400;
    VlWide<4>/*127:0*/ __Vtemp4402;
    VlWide<4>/*127:0*/ __Vtemp4406;
    IData/*31:0*/ __Vilp;
    // Body
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtimecmp_hit 
        = ((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr) 
           & (0x2004007U >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wlast 
        = (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid 
        = (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state));
    Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__get_WB_valid_TOP(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out);
    __Vtableidx5 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out) 
                     << 1U) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl 
        = Vysyx_041461_TOP__ConstPool__TABLE_29e045f6_0
        [__Vtableidx5];
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write 
            = (((((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)) 
                      | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                     | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                    | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                   | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                  | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                 | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                | (8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
               & 1U);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write = 0U;
    }
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
    if ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb 
            = ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
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
                                         ? 2U : 1U))))));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask 
            = ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
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
                                                      : 0xffffffffffffff00ULL))))));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align 
            = (1U & (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out) 
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
                                            : (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))))))));
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask = 0xffffffffffffffffULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align 
            = (1U & ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
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
                                                : (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))))))));
    }
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
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write 
            = (((((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out)) 
                      | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                     | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                    | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                   | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                  | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                 | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                | (8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
               & 1U);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write = 0U;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid;
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
    __Vtableidx2 = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed 
        = Vysyx_041461_TOP__ConstPool__TABLE_0fc9e6c7_0
        [__Vtableidx2];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_divw 
        = Vysyx_041461_TOP__ConstPool__TABLE_ed9e6550_0
        [__Vtableidx2];
    __Vtableidx6 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out) 
                     << 6U) | (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out) 
                                << 1U) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs1_read 
        = Vysyx_041461_TOP__ConstPool__TABLE_d1140eb3_0
        [__Vtableidx6];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs2_read 
        = Vysyx_041461_TOP__ConstPool__TABLE_8cb9ad1b_0
        [__Vtableidx6];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_csr_read 
        = Vysyx_041461_TOP__ConstPool__TABLE_be24ae63_0
        [__Vtableidx6];
    __Vtableidx1 = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed 
        = Vysyx_041461_TOP__ConstPool__TABLE_84736496_0
        [__Vtableidx1];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached 
        = (1U & (~ ((0x80000000U <= (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)) 
                    & (0x88000000U > (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)))));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)
            : ((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                        >> 3U)) << 3U));
    __Vtableidx4 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out) 
                     << 1U) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize 
        = Vysyx_041461_TOP__ConstPool__TABLE_a802bbfe_0
        [__Vtableidx4];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out)
            : ((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                        >> 3U)) << 3U));
    __Vtableidx3 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out) 
                     << 1U) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize 
        = Vysyx_041461_TOP__ConstPool__TABLE_1adeb555_0
        [__Vtableidx3];
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict = 0U;
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
         & (8U == (0xcU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict = 1U;
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
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                             >> 9U);
                                                    }
                                                }
                                            }
                                        } else {
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
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                             >> 9U);
                                                    }
                                                }
                                            }
                                        }
                                    } else {
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
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                             >> 9U);
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
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
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
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
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
                } else {
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
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                             >> 9U);
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
                            = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                               >> 9U);
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
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                             >> 9U);
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
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                             >> 9U);
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
                                    = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                       >> 9U);
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out 
        = ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
             & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out))) 
            & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align)))
            ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load)
                ? 6U : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store)
                         ? 7U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out)))
            : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out));
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
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__PLRU_tree
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit1) {
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
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit2) {
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
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit3) {
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
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit4) {
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
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit5) {
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
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit6) {
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
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit7) {
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
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit8) {
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
                                                VL_EXTEND_WQ(128,64, __Vtemp4384, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
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
                                                        __Vtemp4384[0U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[1U] 
                                                        = 
                                                        __Vtemp4384[1U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[2U] 
                                                        = 
                                                        __Vtemp4384[2U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[3U] 
                                                        = 
                                                        __Vtemp4384[3U];
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
                                    VL_EXTEND_WQ(128,64, __Vtemp4388, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[0U] 
                                        = __Vtemp4388[0U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[1U] 
                                        = __Vtemp4388[1U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[2U] 
                                        = __Vtemp4388[2U];
                                    vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata[3U] 
                                        = __Vtemp4388[3U];
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
                                                VL_EXTEND_WQ(128,64, __Vtemp4390, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
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
                                                        __Vtemp4390[0U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[1U] 
                                                        = 
                                                        __Vtemp4390[1U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[2U] 
                                                        = 
                                                        __Vtemp4390[2U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[3U] 
                                                        = 
                                                        __Vtemp4390[3U];
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
                            VL_EXTEND_WQ(128,64, __Vtemp4394, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[0U] 
                                = __Vtemp4394[0U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[1U] 
                                = __Vtemp4394[1U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[2U] 
                                = __Vtemp4394[2U];
                            vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata[3U] 
                                = __Vtemp4394[3U];
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
                                                VL_EXTEND_WQ(128,64, __Vtemp4396, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
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
                                                        __Vtemp4396[0U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[1U] 
                                                        = 
                                                        __Vtemp4396[1U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[2U] 
                                                        = 
                                                        __Vtemp4396[2U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[3U] 
                                                        = 
                                                        __Vtemp4396[3U];
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
                    VL_EXTEND_WQ(128,64, __Vtemp4400, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[0U] 
                        = __Vtemp4400[0U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[1U] 
                        = __Vtemp4400[1U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[2U] 
                        = __Vtemp4400[2U];
                    vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata[3U] 
                        = __Vtemp4400[3U];
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
                                                VL_EXTEND_WQ(128,64, __Vtemp4402, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
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
                                                        __Vtemp4402[0U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[1U] 
                                                        = 
                                                        __Vtemp4402[1U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[2U] 
                                                        = 
                                                        __Vtemp4402[2U];
                                                    vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[3U] 
                                                        = 
                                                        __Vtemp4402[3U];
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
            VL_EXTEND_WQ(128,64, __Vtemp4406, vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata);
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[0U] 
                = __Vtemp4406[0U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[1U] 
                = __Vtemp4406[1U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[2U] 
                = __Vtemp4406[2U];
            vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata[3U] 
                = __Vtemp4406[3U];
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
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag8_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                        = 
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 9U);
                                                }
                                            }
                                        }
                                    } else {
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
                                                     & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line)))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag7_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                        = 
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 9U);
                                                }
                                            }
                                        }
                                    }
                                } else {
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
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag6_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                        = 
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 9U);
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
                                    = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
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
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line) 
                                                    >> 2U)))) {
                                            if ((1U 
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
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
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
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2
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
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                        = 
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
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
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag2_next[(0x3fU 
                                                                             & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                    = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                       >> 9U);
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
                                                     & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line)))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag3_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                        = 
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 9U);
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
                        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                           >> 9U);
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
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag4_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                        = 
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 9U);
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
                            = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                               >> 9U);
                    }
                }
            }
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x33U)) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[__Vilp] 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vysyx_041461_TOP___024root___sequent__TOP__16(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___sequent__TOP__16\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp4408;
    VlWide<4>/*127:0*/ __Vtemp4412;
    VlWide<4>/*127:0*/ __Vtemp4413;
    VlWide<4>/*127:0*/ __Vtemp4416;
    VlWide<4>/*127:0*/ __Vtemp4420;
    VlWide<4>/*127:0*/ __Vtemp4421;
    VlWide<4>/*127:0*/ __Vtemp4424;
    VlWide<4>/*127:0*/ __Vtemp4428;
    VlWide<4>/*127:0*/ __Vtemp4429;
    VlWide<4>/*127:0*/ __Vtemp4432;
    VlWide<4>/*127:0*/ __Vtemp4436;
    VlWide<4>/*127:0*/ __Vtemp4437;
    VlWide<4>/*127:0*/ __Vtemp4439;
    VlWide<3>/*95:0*/ __Vtemp4450;
    VlWide<3>/*95:0*/ __Vtemp4451;
    VlWide<3>/*95:0*/ __Vtemp4452;
    VlWide<3>/*95:0*/ __Vtemp4455;
    VlWide<3>/*95:0*/ __Vtemp4456;
    VlWide<3>/*95:0*/ __Vtemp4457;
    VlWide<3>/*95:0*/ __Vtemp4459;
    VlWide<3>/*95:0*/ __Vtemp4460;
    VlWide<4>/*127:0*/ __Vtemp4470;
    VlWide<4>/*127:0*/ __Vtemp4476;
    VlWide<4>/*127:0*/ __Vtemp4478;
    VlWide<4>/*127:0*/ __Vtemp4479;
    VlWide<4>/*127:0*/ __Vtemp4481;
    VlWide<4>/*127:0*/ __Vtemp4487;
    VlWide<4>/*127:0*/ __Vtemp4489;
    VlWide<4>/*127:0*/ __Vtemp4490;
    VlWide<4>/*127:0*/ __Vtemp4492;
    VlWide<4>/*127:0*/ __Vtemp4498;
    VlWide<4>/*127:0*/ __Vtemp4500;
    VlWide<4>/*127:0*/ __Vtemp4501;
    VlWide<4>/*127:0*/ __Vtemp4503;
    VlWide<4>/*127:0*/ __Vtemp4509;
    VlWide<4>/*127:0*/ __Vtemp4511;
    VlWide<4>/*127:0*/ __Vtemp4512;
    VlWide<4>/*127:0*/ __Vtemp4514;
    VlWide<4>/*127:0*/ __Vtemp4520;
    VlWide<4>/*127:0*/ __Vtemp4522;
    VlWide<4>/*127:0*/ __Vtemp4523;
    VlWide<4>/*127:0*/ __Vtemp4525;
    VlWide<4>/*127:0*/ __Vtemp4531;
    VlWide<4>/*127:0*/ __Vtemp4533;
    VlWide<4>/*127:0*/ __Vtemp4534;
    VlWide<4>/*127:0*/ __Vtemp4536;
    VlWide<4>/*127:0*/ __Vtemp4542;
    VlWide<4>/*127:0*/ __Vtemp4544;
    VlWide<4>/*127:0*/ __Vtemp4545;
    VlWide<4>/*127:0*/ __Vtemp4547;
    VlWide<4>/*127:0*/ __Vtemp4553;
    VlWide<4>/*127:0*/ __Vtemp4555;
    VlWide<4>/*127:0*/ __Vtemp4556;
    VlWide<4>/*127:0*/ __Vtemp4558;
    VlWide<4>/*127:0*/ __Vtemp4564;
    VlWide<4>/*127:0*/ __Vtemp4566;
    VlWide<4>/*127:0*/ __Vtemp4567;
    VlWide<4>/*127:0*/ __Vtemp4569;
    VlWide<4>/*127:0*/ __Vtemp4575;
    VlWide<4>/*127:0*/ __Vtemp4577;
    VlWide<4>/*127:0*/ __Vtemp4578;
    VlWide<4>/*127:0*/ __Vtemp4580;
    VlWide<4>/*127:0*/ __Vtemp4586;
    VlWide<4>/*127:0*/ __Vtemp4588;
    VlWide<4>/*127:0*/ __Vtemp4589;
    VlWide<4>/*127:0*/ __Vtemp4591;
    VlWide<4>/*127:0*/ __Vtemp4597;
    VlWide<4>/*127:0*/ __Vtemp4599;
    VlWide<4>/*127:0*/ __Vtemp4600;
    VlWide<4>/*127:0*/ __Vtemp4602;
    VlWide<4>/*127:0*/ __Vtemp4608;
    VlWide<4>/*127:0*/ __Vtemp4610;
    VlWide<4>/*127:0*/ __Vtemp4611;
    VlWide<4>/*127:0*/ __Vtemp4613;
    VlWide<4>/*127:0*/ __Vtemp4619;
    VlWide<4>/*127:0*/ __Vtemp4621;
    VlWide<4>/*127:0*/ __Vtemp4622;
    VlWide<4>/*127:0*/ __Vtemp4624;
    VlWide<4>/*127:0*/ __Vtemp4630;
    VlWide<4>/*127:0*/ __Vtemp4632;
    VlWide<4>/*127:0*/ __Vtemp4633;
    VlWide<4>/*127:0*/ __Vtemp4635;
    VlWide<4>/*127:0*/ __Vtemp4641;
    VlWide<4>/*127:0*/ __Vtemp4643;
    VlWide<4>/*127:0*/ __Vtemp4644;
    VlWide<4>/*127:0*/ __Vtemp4646;
    VlWide<4>/*127:0*/ __Vtemp4652;
    VlWide<4>/*127:0*/ __Vtemp4654;
    VlWide<4>/*127:0*/ __Vtemp4655;
    VlWide<4>/*127:0*/ __Vtemp4657;
    VlWide<4>/*127:0*/ __Vtemp4663;
    VlWide<4>/*127:0*/ __Vtemp4665;
    VlWide<4>/*127:0*/ __Vtemp4666;
    VlWide<4>/*127:0*/ __Vtemp4668;
    VlWide<4>/*127:0*/ __Vtemp4674;
    VlWide<4>/*127:0*/ __Vtemp4676;
    VlWide<4>/*127:0*/ __Vtemp4677;
    VlWide<4>/*127:0*/ __Vtemp4679;
    VlWide<4>/*127:0*/ __Vtemp4685;
    VlWide<4>/*127:0*/ __Vtemp4687;
    VlWide<4>/*127:0*/ __Vtemp4688;
    VlWide<4>/*127:0*/ __Vtemp4690;
    VlWide<4>/*127:0*/ __Vtemp4696;
    VlWide<4>/*127:0*/ __Vtemp4698;
    VlWide<4>/*127:0*/ __Vtemp4699;
    VlWide<4>/*127:0*/ __Vtemp4701;
    VlWide<4>/*127:0*/ __Vtemp4707;
    VlWide<4>/*127:0*/ __Vtemp4709;
    VlWide<4>/*127:0*/ __Vtemp4710;
    VlWide<4>/*127:0*/ __Vtemp4712;
    VlWide<4>/*127:0*/ __Vtemp4718;
    VlWide<4>/*127:0*/ __Vtemp4720;
    VlWide<4>/*127:0*/ __Vtemp4721;
    VlWide<4>/*127:0*/ __Vtemp4723;
    VlWide<4>/*127:0*/ __Vtemp4729;
    VlWide<4>/*127:0*/ __Vtemp4731;
    VlWide<4>/*127:0*/ __Vtemp4732;
    VlWide<4>/*127:0*/ __Vtemp4734;
    VlWide<4>/*127:0*/ __Vtemp4740;
    VlWide<4>/*127:0*/ __Vtemp4742;
    VlWide<4>/*127:0*/ __Vtemp4743;
    VlWide<4>/*127:0*/ __Vtemp4745;
    VlWide<4>/*127:0*/ __Vtemp4751;
    VlWide<4>/*127:0*/ __Vtemp4753;
    VlWide<4>/*127:0*/ __Vtemp4754;
    VlWide<4>/*127:0*/ __Vtemp4756;
    VlWide<4>/*127:0*/ __Vtemp4762;
    VlWide<4>/*127:0*/ __Vtemp4764;
    VlWide<4>/*127:0*/ __Vtemp4765;
    VlWide<4>/*127:0*/ __Vtemp4767;
    VlWide<4>/*127:0*/ __Vtemp4773;
    VlWide<4>/*127:0*/ __Vtemp4775;
    VlWide<4>/*127:0*/ __Vtemp4776;
    VlWide<4>/*127:0*/ __Vtemp4778;
    VlWide<4>/*127:0*/ __Vtemp4784;
    VlWide<4>/*127:0*/ __Vtemp4786;
    VlWide<4>/*127:0*/ __Vtemp4787;
    VlWide<4>/*127:0*/ __Vtemp4789;
    VlWide<4>/*127:0*/ __Vtemp4795;
    VlWide<4>/*127:0*/ __Vtemp4797;
    VlWide<4>/*127:0*/ __Vtemp4798;
    VlWide<4>/*127:0*/ __Vtemp4800;
    VlWide<4>/*127:0*/ __Vtemp4806;
    VlWide<4>/*127:0*/ __Vtemp4808;
    VlWide<4>/*127:0*/ __Vtemp4809;
    VlWide<4>/*127:0*/ __Vtemp4811;
    VlWide<4>/*127:0*/ __Vtemp4817;
    VlWide<4>/*127:0*/ __Vtemp4819;
    VlWide<4>/*127:0*/ __Vtemp4820;
    VlWide<4>/*127:0*/ __Vtemp4822;
    // Body
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[0x34U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
        [0x34U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[0x35U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
        [0x35U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[0x36U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
        [0x36U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[0x37U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
        [0x37U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[0x38U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
        [0x38U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[0x39U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
        [0x39U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[0x3aU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
        [0x3aU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[0x3bU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
        [0x3bU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[0x3cU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
        [0x3cU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[0x3dU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
        [0x3dU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[0x3eU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
        [0x3eU];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[0x3fU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5
        [0x3fU];
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
                                                     & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line)))) {
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__tag5_next[(0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                                                >> 3U)))] 
                                                        = 
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 9U);
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
                                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                   >> 9U);
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
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize;
    }
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_arsize 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize;
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_arsize = 0U;
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out)
            : 0U);
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
                                                       ? 0ULL
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
                                                       ? 0ULL
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
                                                    VL_EXTEND_WQ(128,64, __Vtemp4408, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
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
                                                            __Vtemp4408[0U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                                                            = 
                                                            __Vtemp4408[1U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                                                            = 
                                                            __Vtemp4408[2U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                                                            = 
                                                            __Vtemp4408[3U];
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
                VL_EXTEND_WQ(128,64, __Vtemp4412, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] 
                    = __Vtemp4412[0U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                    = __Vtemp4412[1U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                    = __Vtemp4412[2U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                    = __Vtemp4412[3U];
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1) {
                VL_EXTEND_WQ(128,64, __Vtemp4413, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[0U] 
                    = __Vtemp4413[0U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[1U] 
                    = __Vtemp4413[1U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[2U] 
                    = __Vtemp4413[2U];
                vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata[3U] 
                    = __Vtemp4413[3U];
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
                                                    VL_EXTEND_WQ(128,64, __Vtemp4416, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
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
                                                            __Vtemp4416[0U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] 
                                                            = 
                                                            __Vtemp4416[1U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                                                            = 
                                                            __Vtemp4416[2U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                                                            = 
                                                            __Vtemp4416[3U];
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
                        VL_EXTEND_WQ(128,64, __Vtemp4420, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] 
                            = __Vtemp4420[0U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] 
                            = __Vtemp4420[1U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                            = __Vtemp4420[2U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                            = __Vtemp4420[3U];
                    }
                }
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)))) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3) {
                        VL_EXTEND_WQ(128,64, __Vtemp4421, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] 
                            = __Vtemp4421[0U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] 
                            = __Vtemp4421[1U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                            = __Vtemp4421[2U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                            = __Vtemp4421[3U];
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
                                                    VL_EXTEND_WQ(128,64, __Vtemp4424, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
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
                                                            __Vtemp4424[0U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] 
                                                            = 
                                                            __Vtemp4424[1U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                                            = 
                                                            __Vtemp4424[2U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                                            = 
                                                            __Vtemp4424[3U];
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
                                VL_EXTEND_WQ(128,64, __Vtemp4428, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] 
                                    = __Vtemp4428[0U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] 
                                    = __Vtemp4428[1U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                    = __Vtemp4428[2U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                    = __Vtemp4428[3U];
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
                                VL_EXTEND_WQ(128,64, __Vtemp4429, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] 
                                    = __Vtemp4429[0U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] 
                                    = __Vtemp4429[1U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                    = __Vtemp4429[2U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                    = __Vtemp4429[3U];
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
                                                    VL_EXTEND_WQ(128,64, __Vtemp4432, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
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
                                                            __Vtemp4432[0U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] 
                                                            = 
                                                            __Vtemp4432[1U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                                            = 
                                                            __Vtemp4432[2U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                                            = 
                                                            __Vtemp4432[3U];
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
                                        VL_EXTEND_WQ(128,64, __Vtemp4436, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] 
                                            = __Vtemp4436[0U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] 
                                            = __Vtemp4436[1U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                            = __Vtemp4436[2U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                            = __Vtemp4436[3U];
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
                                        VL_EXTEND_WQ(128,64, __Vtemp4437, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] 
                                            = __Vtemp4437[0U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] 
                                            = __Vtemp4437[1U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                            = __Vtemp4437[2U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                            = __Vtemp4437[3U];
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_positive 
        = (1U & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed)) 
                 | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_divw)
                     ? (~ (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                                   >> 0x1fU))) : (~ (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                                                             >> 0x3fU))))));
    VL_EXTEND_WQ(128,64, __Vtemp4439, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1);
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U] 
            = __Vtemp4439[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U] 
            = __Vtemp4439[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U] 
            = __Vtemp4439[2U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U] 
            = __Vtemp4439[3U];
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_positive 
        = (1U & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed)) 
                 | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_divw)
                     ? ((~ (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                                    >> 0x1fU))) ^ (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                           >> 0x1fU)))
                     : ((~ (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                                    >> 0x3fU))) ^ (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                           >> 0x3fU))))));
    __Vtemp4450[0U] = ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[2U] 
                        << 1U) | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[1U] 
                                  >> 0x1fU));
    __Vtemp4450[1U] = ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[3U] 
                        << 1U) | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[2U] 
                                  >> 0x1fU));
    __Vtemp4450[2U] = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[3U] 
                       >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp4451, (1ULL + (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
    VL_EXTEND_WQ(65,64, __Vtemp4452, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
    VL_EXTEND_WQ(65,64, __Vtemp4455, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed) {
        __Vtemp4456[0U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                          >> 0x3fU)))
                            ? __Vtemp4451[0U] : __Vtemp4452[0U]);
        __Vtemp4456[1U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                          >> 0x3fU)))
                            ? __Vtemp4451[1U] : __Vtemp4452[1U]);
        __Vtemp4456[2U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                          >> 0x3fU)))
                            ? __Vtemp4451[2U] : __Vtemp4452[2U]);
    } else {
        __Vtemp4456[0U] = __Vtemp4455[0U];
        __Vtemp4456[1U] = __Vtemp4455[1U];
        __Vtemp4456[2U] = __Vtemp4455[2U];
    }
    VL_SUB_W(3, __Vtemp4457, __Vtemp4450, __Vtemp4456);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[0U] 
        = __Vtemp4457[0U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[1U] 
        = __Vtemp4457[1U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[2U] 
        = (1U & __Vtemp4457[2U]);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__subw_out 
        = (0x1ffffffffULL & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend_w 
                              >> 0x1fU) - ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed)
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                           >> 0x1fU)))
                                                ? (QData)((IData)(
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)))))
                                                : (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)))
                                            : (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)))));
    VL_EXTEND_WQ(66,64, __Vtemp4459, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
    VL_EXTEND_WQ(66,64, __Vtemp4460, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
            = __Vtemp4459[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
            = __Vtemp4459[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
            = __Vtemp4459[2U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp4460[0U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                      ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)
                                      : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp4460[1U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                      ? (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                 >> 0x20U))
                                      : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp4460[2U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                      ? (3U & (- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                                     >> 0x3fU))))))
                                      : 0U));
    }
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_divw) {
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
    VL_SHIFTL_WWI(128,128,32, __Vtemp4470, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 1U);
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
                    ? (~ __Vtemp4470[0U]) : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp4470[1U]) : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp4470[2U]) : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp4470[3U]) : 0U));
    }
    VL_SHIFTL_WWI(128,128,32, __Vtemp4476, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4478, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4479, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4481, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][0U] 
            = (~ __Vtemp4476[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][1U] 
            = (~ __Vtemp4476[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][2U] 
            = (~ __Vtemp4476[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][3U] 
            = (~ __Vtemp4476[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4478[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4479[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4481[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4478[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4479[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4481[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4478[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4479[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4481[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4478[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4479[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4481[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__2__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4487, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4489, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4490, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4492, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][0U] 
            = (~ __Vtemp4487[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][1U] 
            = (~ __Vtemp4487[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][2U] 
            = (~ __Vtemp4487[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][3U] 
            = (~ __Vtemp4487[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4489[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4490[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4492[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4489[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4490[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4492[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4489[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4490[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4492[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4489[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4490[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4492[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__4__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4498, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4500, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4501, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4503, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][0U] 
            = (~ __Vtemp4498[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][1U] 
            = (~ __Vtemp4498[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][2U] 
            = (~ __Vtemp4498[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][3U] 
            = (~ __Vtemp4498[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4500[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4501[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4503[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4500[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4501[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4503[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4500[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4501[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4503[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4500[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4501[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4503[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__6__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4509, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4511, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4512, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4514, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][0U] 
            = (~ __Vtemp4509[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][1U] 
            = (~ __Vtemp4509[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][2U] 
            = (~ __Vtemp4509[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][3U] 
            = (~ __Vtemp4509[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4511[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4512[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4514[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4511[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4512[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4514[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4511[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4512[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4514[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4511[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4512[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4514[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__8__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4520, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4522, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4523, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4525, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][0U] 
            = (~ __Vtemp4520[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][1U] 
            = (~ __Vtemp4520[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][2U] 
            = (~ __Vtemp4520[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][3U] 
            = (~ __Vtemp4520[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4522[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4523[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4525[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4522[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4523[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4525[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4522[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4523[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4525[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4522[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4523[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4525[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__10__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4531, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4533, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4534, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4536, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][0U] 
            = (~ __Vtemp4531[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][1U] 
            = (~ __Vtemp4531[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][2U] 
            = (~ __Vtemp4531[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][3U] 
            = (~ __Vtemp4531[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4533[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4534[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4536[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4533[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4534[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4536[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4533[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4534[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4536[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4533[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4534[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4536[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__12__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4542, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4544, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4545, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4547, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][0U] 
            = (~ __Vtemp4542[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][1U] 
            = (~ __Vtemp4542[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][2U] 
            = (~ __Vtemp4542[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][3U] 
            = (~ __Vtemp4542[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4544[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4545[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4547[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4544[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4545[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4547[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4544[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4545[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4547[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4544[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4545[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4547[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__14__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4553, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4555, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4556, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4558, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][0U] 
            = (~ __Vtemp4553[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][1U] 
            = (~ __Vtemp4553[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][2U] 
            = (~ __Vtemp4553[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][3U] 
            = (~ __Vtemp4553[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4555[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4556[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4558[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4555[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4556[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4558[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4555[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4556[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4558[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4555[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4556[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4558[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__16__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4564, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4566, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4567, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4569, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][0U] 
            = (~ __Vtemp4564[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][1U] 
            = (~ __Vtemp4564[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][2U] 
            = (~ __Vtemp4564[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][3U] 
            = (~ __Vtemp4564[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4566[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4567[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4569[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4566[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4567[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4569[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4566[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4567[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4569[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4566[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4567[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4569[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__18__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4575, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4577, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4578, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4580, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][0U] 
            = (~ __Vtemp4575[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][1U] 
            = (~ __Vtemp4575[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][2U] 
            = (~ __Vtemp4575[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][3U] 
            = (~ __Vtemp4575[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4577[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4578[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4580[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4577[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4578[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4580[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4577[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4578[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4580[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4577[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4578[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4580[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__20__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4586, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4588, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4589, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4591, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][0U] 
            = (~ __Vtemp4586[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][1U] 
            = (~ __Vtemp4586[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][2U] 
            = (~ __Vtemp4586[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][3U] 
            = (~ __Vtemp4586[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4588[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4589[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4591[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4588[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4589[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4591[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4588[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4589[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4591[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4588[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4589[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4591[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__22__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4597, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4599, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4600, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4602, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][0U] 
            = (~ __Vtemp4597[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][1U] 
            = (~ __Vtemp4597[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][2U] 
            = (~ __Vtemp4597[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][3U] 
            = (~ __Vtemp4597[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4599[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4600[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4602[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4599[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4600[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4602[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4599[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4600[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4602[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4599[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4600[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4602[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__24__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4608, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4610, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4611, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4613, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][0U] 
            = (~ __Vtemp4608[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][1U] 
            = (~ __Vtemp4608[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][2U] 
            = (~ __Vtemp4608[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][3U] 
            = (~ __Vtemp4608[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4610[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4611[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4613[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4610[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4611[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4613[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4610[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4611[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4613[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4610[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4611[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4613[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__26__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4619, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4621, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4622, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4624, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][0U] 
            = (~ __Vtemp4619[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][1U] 
            = (~ __Vtemp4619[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][2U] 
            = (~ __Vtemp4619[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][3U] 
            = (~ __Vtemp4619[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4621[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4622[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4624[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4621[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4622[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4624[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4621[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4622[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4624[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4621[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4622[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4624[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__28__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4630, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4632, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4633, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4635, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][0U] 
            = (~ __Vtemp4630[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][1U] 
            = (~ __Vtemp4630[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][2U] 
            = (~ __Vtemp4630[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][3U] 
            = (~ __Vtemp4630[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4632[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4633[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4635[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4632[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4633[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4635[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4632[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4633[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4635[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4632[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4633[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4635[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__30__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4641, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4643, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4644, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4646, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][0U] 
            = (~ __Vtemp4641[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][1U] 
            = (~ __Vtemp4641[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][2U] 
            = (~ __Vtemp4641[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][3U] 
            = (~ __Vtemp4641[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4643[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4644[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4646[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4643[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4644[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4646[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4643[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4644[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4646[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4643[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4644[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4646[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__32__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4652, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4654, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4655, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4657, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][0U] 
            = (~ __Vtemp4652[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][1U] 
            = (~ __Vtemp4652[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][2U] 
            = (~ __Vtemp4652[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][3U] 
            = (~ __Vtemp4652[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4654[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4655[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4657[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4654[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4655[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4657[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4654[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4655[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4657[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4654[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4655[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4657[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__34__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4663, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4665, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4666, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4668, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][0U] 
            = (~ __Vtemp4663[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][1U] 
            = (~ __Vtemp4663[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][2U] 
            = (~ __Vtemp4663[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][3U] 
            = (~ __Vtemp4663[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4665[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4666[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4668[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4665[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4666[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4668[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4665[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4666[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4668[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4665[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4666[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4668[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__36__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4674, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4676, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4677, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4679, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][0U] 
            = (~ __Vtemp4674[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][1U] 
            = (~ __Vtemp4674[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][2U] 
            = (~ __Vtemp4674[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][3U] 
            = (~ __Vtemp4674[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4676[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4677[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4679[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4676[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4677[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4679[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4676[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4677[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4679[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4676[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4677[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4679[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__38__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4685, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4687, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4688, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4690, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][0U] 
            = (~ __Vtemp4685[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][1U] 
            = (~ __Vtemp4685[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][2U] 
            = (~ __Vtemp4685[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][3U] 
            = (~ __Vtemp4685[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4687[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4688[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4690[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4687[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4688[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4690[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4687[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4688[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4690[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4687[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4688[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4690[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__40__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4696, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4698, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4699, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4701, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][0U] 
            = (~ __Vtemp4696[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][1U] 
            = (~ __Vtemp4696[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][2U] 
            = (~ __Vtemp4696[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][3U] 
            = (~ __Vtemp4696[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4698[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4699[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4701[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4698[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4699[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4701[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4698[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4699[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4701[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4698[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4699[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4701[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__42__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4707, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4709, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4710, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4712, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][0U] 
            = (~ __Vtemp4707[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][1U] 
            = (~ __Vtemp4707[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][2U] 
            = (~ __Vtemp4707[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][3U] 
            = (~ __Vtemp4707[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4709[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4710[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4712[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4709[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4710[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4712[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4709[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4710[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4712[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4709[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4710[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4712[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__44__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4718, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4720, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4721, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4723, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][0U] 
            = (~ __Vtemp4718[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][1U] 
            = (~ __Vtemp4718[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][2U] 
            = (~ __Vtemp4718[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][3U] 
            = (~ __Vtemp4718[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4720[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4721[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4723[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4720[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4721[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4723[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4720[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4721[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4723[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4720[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4721[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4723[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__46__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4729, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4731, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4732, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4734, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][0U] 
            = (~ __Vtemp4729[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][1U] 
            = (~ __Vtemp4729[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][2U] 
            = (~ __Vtemp4729[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][3U] 
            = (~ __Vtemp4729[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4731[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4732[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4734[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4731[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4732[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4734[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4731[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4732[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4734[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4731[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4732[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4734[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__48__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4740, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4742, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4743, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4745, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][0U] 
            = (~ __Vtemp4740[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][1U] 
            = (~ __Vtemp4740[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][2U] 
            = (~ __Vtemp4740[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][3U] 
            = (~ __Vtemp4740[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4742[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4743[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4745[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4742[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4743[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4745[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4742[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4743[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4745[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4742[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4743[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4745[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__50__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4751, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4753, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4754, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4756, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][0U] 
            = (~ __Vtemp4751[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][1U] 
            = (~ __Vtemp4751[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][2U] 
            = (~ __Vtemp4751[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][3U] 
            = (~ __Vtemp4751[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4753[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4754[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4756[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4753[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4754[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4756[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4753[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4754[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4756[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4753[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4754[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4756[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__52__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4762, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4764, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4765, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4767, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][0U] 
            = (~ __Vtemp4762[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][1U] 
            = (~ __Vtemp4762[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][2U] 
            = (~ __Vtemp4762[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][3U] 
            = (~ __Vtemp4762[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4764[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4765[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4767[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4764[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4765[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4767[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4764[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4765[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4767[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4764[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4765[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4767[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__54__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4773, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4775, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4776, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4778, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][0U] 
            = (~ __Vtemp4773[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][1U] 
            = (~ __Vtemp4773[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][2U] 
            = (~ __Vtemp4773[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][3U] 
            = (~ __Vtemp4773[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4775[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4776[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4778[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4775[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4776[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4778[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4775[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4776[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4778[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4775[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4776[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4778[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__56__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4784, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4786, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4787, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4789, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][0U] 
            = (~ __Vtemp4784[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][1U] 
            = (~ __Vtemp4784[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][2U] 
            = (~ __Vtemp4784[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][3U] 
            = (~ __Vtemp4784[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4786[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4787[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4789[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4786[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4787[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4789[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4786[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4787[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4789[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4786[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4787[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4789[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__58__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4795, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4797, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4798, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4800, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][0U] 
            = (~ __Vtemp4795[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][1U] 
            = (~ __Vtemp4795[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][2U] 
            = (~ __Vtemp4795[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][3U] 
            = (~ __Vtemp4795[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4797[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4798[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4800[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4797[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4798[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4800[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4797[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4798[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4800[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4797[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4798[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4800[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__60__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4806, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4808, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4809, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4811, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][0U] 
            = (~ __Vtemp4806[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][1U] 
            = (~ __Vtemp4806[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][2U] 
            = (~ __Vtemp4806[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][3U] 
            = (~ __Vtemp4806[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4808[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4809[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4811[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4808[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4809[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4811[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4808[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4809[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4811[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4808[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4809[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4811[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__62__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4817, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4819, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4820, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4822, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][0U] 
            = (~ __Vtemp4817[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][1U] 
            = (~ __Vtemp4817[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][2U] 
            = (~ __Vtemp4817[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][3U] 
            = (~ __Vtemp4817[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4819[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4820[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4822[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4819[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4820[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4822[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4819[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4820[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4822[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4819[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4820[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4822[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__64__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)));
}
