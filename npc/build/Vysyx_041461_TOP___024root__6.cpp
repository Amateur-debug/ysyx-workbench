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

VL_INLINE_OPT void Vysyx_041461_TOP___024root___sequent__TOP__14(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___sequent__TOP__14\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*4:0*/ __Vtableidx5;
    SData/*8:0*/ __Vtableidx6;
    VlWide<4>/*127:0*/ __Vtemp4295;
    VlWide<3>/*95:0*/ __Vtemp4306;
    VlWide<3>/*95:0*/ __Vtemp4307;
    VlWide<3>/*95:0*/ __Vtemp4308;
    VlWide<3>/*95:0*/ __Vtemp4311;
    VlWide<3>/*95:0*/ __Vtemp4312;
    VlWide<3>/*95:0*/ __Vtemp4313;
    VlWide<3>/*95:0*/ __Vtemp4315;
    VlWide<3>/*95:0*/ __Vtemp4316;
    VlWide<4>/*127:0*/ __Vtemp4326;
    VlWide<4>/*127:0*/ __Vtemp4332;
    VlWide<4>/*127:0*/ __Vtemp4334;
    VlWide<4>/*127:0*/ __Vtemp4335;
    VlWide<4>/*127:0*/ __Vtemp4337;
    VlWide<4>/*127:0*/ __Vtemp4343;
    VlWide<4>/*127:0*/ __Vtemp4345;
    VlWide<4>/*127:0*/ __Vtemp4346;
    VlWide<4>/*127:0*/ __Vtemp4348;
    VlWide<4>/*127:0*/ __Vtemp4354;
    VlWide<4>/*127:0*/ __Vtemp4356;
    VlWide<4>/*127:0*/ __Vtemp4357;
    VlWide<4>/*127:0*/ __Vtemp4359;
    VlWide<4>/*127:0*/ __Vtemp4365;
    VlWide<4>/*127:0*/ __Vtemp4367;
    VlWide<4>/*127:0*/ __Vtemp4368;
    VlWide<4>/*127:0*/ __Vtemp4370;
    VlWide<4>/*127:0*/ __Vtemp4376;
    VlWide<4>/*127:0*/ __Vtemp4378;
    VlWide<4>/*127:0*/ __Vtemp4379;
    VlWide<4>/*127:0*/ __Vtemp4381;
    VlWide<4>/*127:0*/ __Vtemp4387;
    VlWide<4>/*127:0*/ __Vtemp4389;
    VlWide<4>/*127:0*/ __Vtemp4390;
    VlWide<4>/*127:0*/ __Vtemp4392;
    VlWide<4>/*127:0*/ __Vtemp4398;
    VlWide<4>/*127:0*/ __Vtemp4400;
    VlWide<4>/*127:0*/ __Vtemp4401;
    VlWide<4>/*127:0*/ __Vtemp4403;
    VlWide<4>/*127:0*/ __Vtemp4409;
    VlWide<4>/*127:0*/ __Vtemp4411;
    VlWide<4>/*127:0*/ __Vtemp4412;
    VlWide<4>/*127:0*/ __Vtemp4414;
    VlWide<4>/*127:0*/ __Vtemp4420;
    VlWide<4>/*127:0*/ __Vtemp4422;
    VlWide<4>/*127:0*/ __Vtemp4423;
    VlWide<4>/*127:0*/ __Vtemp4425;
    VlWide<4>/*127:0*/ __Vtemp4431;
    VlWide<4>/*127:0*/ __Vtemp4433;
    VlWide<4>/*127:0*/ __Vtemp4434;
    VlWide<4>/*127:0*/ __Vtemp4436;
    VlWide<4>/*127:0*/ __Vtemp4442;
    VlWide<4>/*127:0*/ __Vtemp4444;
    VlWide<4>/*127:0*/ __Vtemp4445;
    VlWide<4>/*127:0*/ __Vtemp4447;
    VlWide<4>/*127:0*/ __Vtemp4453;
    VlWide<4>/*127:0*/ __Vtemp4455;
    VlWide<4>/*127:0*/ __Vtemp4456;
    VlWide<4>/*127:0*/ __Vtemp4458;
    VlWide<4>/*127:0*/ __Vtemp4464;
    VlWide<4>/*127:0*/ __Vtemp4466;
    VlWide<4>/*127:0*/ __Vtemp4467;
    VlWide<4>/*127:0*/ __Vtemp4469;
    VlWide<4>/*127:0*/ __Vtemp4475;
    VlWide<4>/*127:0*/ __Vtemp4477;
    VlWide<4>/*127:0*/ __Vtemp4478;
    VlWide<4>/*127:0*/ __Vtemp4480;
    VlWide<4>/*127:0*/ __Vtemp4486;
    VlWide<4>/*127:0*/ __Vtemp4488;
    VlWide<4>/*127:0*/ __Vtemp4489;
    VlWide<4>/*127:0*/ __Vtemp4491;
    VlWide<4>/*127:0*/ __Vtemp4497;
    VlWide<4>/*127:0*/ __Vtemp4499;
    VlWide<4>/*127:0*/ __Vtemp4500;
    VlWide<4>/*127:0*/ __Vtemp4502;
    VlWide<4>/*127:0*/ __Vtemp4508;
    VlWide<4>/*127:0*/ __Vtemp4510;
    VlWide<4>/*127:0*/ __Vtemp4511;
    VlWide<4>/*127:0*/ __Vtemp4513;
    VlWide<4>/*127:0*/ __Vtemp4519;
    VlWide<4>/*127:0*/ __Vtemp4521;
    VlWide<4>/*127:0*/ __Vtemp4522;
    VlWide<4>/*127:0*/ __Vtemp4524;
    VlWide<4>/*127:0*/ __Vtemp4530;
    VlWide<4>/*127:0*/ __Vtemp4532;
    VlWide<4>/*127:0*/ __Vtemp4533;
    VlWide<4>/*127:0*/ __Vtemp4535;
    VlWide<4>/*127:0*/ __Vtemp4541;
    VlWide<4>/*127:0*/ __Vtemp4543;
    VlWide<4>/*127:0*/ __Vtemp4544;
    VlWide<4>/*127:0*/ __Vtemp4546;
    VlWide<4>/*127:0*/ __Vtemp4552;
    VlWide<4>/*127:0*/ __Vtemp4554;
    VlWide<4>/*127:0*/ __Vtemp4555;
    VlWide<4>/*127:0*/ __Vtemp4557;
    VlWide<4>/*127:0*/ __Vtemp4563;
    VlWide<4>/*127:0*/ __Vtemp4565;
    VlWide<4>/*127:0*/ __Vtemp4566;
    VlWide<4>/*127:0*/ __Vtemp4568;
    VlWide<4>/*127:0*/ __Vtemp4574;
    VlWide<4>/*127:0*/ __Vtemp4576;
    VlWide<4>/*127:0*/ __Vtemp4577;
    VlWide<4>/*127:0*/ __Vtemp4579;
    VlWide<4>/*127:0*/ __Vtemp4585;
    VlWide<4>/*127:0*/ __Vtemp4587;
    VlWide<4>/*127:0*/ __Vtemp4588;
    VlWide<4>/*127:0*/ __Vtemp4590;
    VlWide<4>/*127:0*/ __Vtemp4596;
    VlWide<4>/*127:0*/ __Vtemp4598;
    VlWide<4>/*127:0*/ __Vtemp4599;
    VlWide<4>/*127:0*/ __Vtemp4601;
    VlWide<4>/*127:0*/ __Vtemp4607;
    VlWide<4>/*127:0*/ __Vtemp4609;
    VlWide<4>/*127:0*/ __Vtemp4610;
    VlWide<4>/*127:0*/ __Vtemp4612;
    VlWide<4>/*127:0*/ __Vtemp4618;
    VlWide<4>/*127:0*/ __Vtemp4620;
    VlWide<4>/*127:0*/ __Vtemp4621;
    VlWide<4>/*127:0*/ __Vtemp4623;
    VlWide<4>/*127:0*/ __Vtemp4629;
    VlWide<4>/*127:0*/ __Vtemp4631;
    VlWide<4>/*127:0*/ __Vtemp4632;
    VlWide<4>/*127:0*/ __Vtemp4634;
    VlWide<4>/*127:0*/ __Vtemp4640;
    VlWide<4>/*127:0*/ __Vtemp4642;
    VlWide<4>/*127:0*/ __Vtemp4643;
    VlWide<4>/*127:0*/ __Vtemp4645;
    VlWide<4>/*127:0*/ __Vtemp4651;
    VlWide<4>/*127:0*/ __Vtemp4653;
    VlWide<4>/*127:0*/ __Vtemp4654;
    VlWide<4>/*127:0*/ __Vtemp4656;
    VlWide<4>/*127:0*/ __Vtemp4662;
    VlWide<4>/*127:0*/ __Vtemp4664;
    VlWide<4>/*127:0*/ __Vtemp4665;
    VlWide<4>/*127:0*/ __Vtemp4667;
    VlWide<4>/*127:0*/ __Vtemp4673;
    VlWide<4>/*127:0*/ __Vtemp4675;
    VlWide<4>/*127:0*/ __Vtemp4676;
    VlWide<4>/*127:0*/ __Vtemp4678;
    // Body
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
    Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__get_WB_valid_TOP(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out);
    __Vtableidx5 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out) 
                     << 1U) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl 
        = Vysyx_041461_TOP__ConstPool__TABLE_29e045f6_0
        [__Vtableidx5];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
           & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out)));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wlast 
        = (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid 
        = (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid_next 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
            ? ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? 1U : 0U) : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap 
        = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
            & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out))) 
           | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
              & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF2_trap 
        = (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
              & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
             | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out)))) 
            | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
               & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out)))) 
           | ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
              & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out))));
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
    VL_EXTEND_WQ(128,64, __Vtemp4295, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1);
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U] 
            = __Vtemp4295[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U] 
            = __Vtemp4295[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U] 
            = __Vtemp4295[2U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U] 
            = __Vtemp4295[3U];
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
    __Vtemp4306[0U] = ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[2U] 
                        << 1U) | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[1U] 
                                  >> 0x1fU));
    __Vtemp4306[1U] = ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[3U] 
                        << 1U) | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[2U] 
                                  >> 0x1fU));
    __Vtemp4306[2U] = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend[3U] 
                       >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp4307, (1ULL + (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
    VL_EXTEND_WQ(65,64, __Vtemp4308, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
    VL_EXTEND_WQ(65,64, __Vtemp4311, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed) {
        __Vtemp4312[0U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                          >> 0x3fU)))
                            ? __Vtemp4307[0U] : __Vtemp4308[0U]);
        __Vtemp4312[1U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                          >> 0x3fU)))
                            ? __Vtemp4307[1U] : __Vtemp4308[1U]);
        __Vtemp4312[2U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                          >> 0x3fU)))
                            ? __Vtemp4307[2U] : __Vtemp4308[2U]);
    } else {
        __Vtemp4312[0U] = __Vtemp4311[0U];
        __Vtemp4312[1U] = __Vtemp4311[1U];
        __Vtemp4312[2U] = __Vtemp4311[2U];
    }
    VL_SUB_W(3, __Vtemp4313, __Vtemp4306, __Vtemp4312);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[0U] 
        = __Vtemp4313[0U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[1U] 
        = __Vtemp4313[1U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out[2U] 
        = (1U & __Vtemp4313[2U]);
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
    VL_EXTEND_WQ(66,64, __Vtemp4315, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
    VL_EXTEND_WQ(66,64, __Vtemp4316, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
            = __Vtemp4315[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
            = __Vtemp4315[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
            = __Vtemp4315[2U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp4316[0U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                      ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)
                                      : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp4316[1U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                      ? (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                 >> 0x20U))
                                      : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp4316[2U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
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
    VL_SHIFTL_WWI(128,128,32, __Vtemp4326, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 1U);
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
                    ? (~ __Vtemp4326[0U]) : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp4326[1U]) : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp4326[2U]) : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp4326[3U]) : 0U));
    }
    VL_SHIFTL_WWI(128,128,32, __Vtemp4332, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4334, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4335, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4337, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][0U] 
            = (~ __Vtemp4332[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][1U] 
            = (~ __Vtemp4332[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][2U] 
            = (~ __Vtemp4332[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][3U] 
            = (~ __Vtemp4332[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4334[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4335[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4337[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4334[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4335[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4337[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4334[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4335[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4337[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4334[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4335[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4337[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__2__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4343, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4345, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4346, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4348, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][0U] 
            = (~ __Vtemp4343[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][1U] 
            = (~ __Vtemp4343[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][2U] 
            = (~ __Vtemp4343[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][3U] 
            = (~ __Vtemp4343[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4345[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4346[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4348[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4345[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4346[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4348[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4345[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4346[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4348[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4345[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4346[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4348[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__4__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4354, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4356, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4357, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4359, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][0U] 
            = (~ __Vtemp4354[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][1U] 
            = (~ __Vtemp4354[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][2U] 
            = (~ __Vtemp4354[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][3U] 
            = (~ __Vtemp4354[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4356[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4357[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4359[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4356[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4357[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4359[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4356[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4357[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4359[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4356[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4357[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4359[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__6__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4365, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4367, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4368, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4370, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][0U] 
            = (~ __Vtemp4365[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][1U] 
            = (~ __Vtemp4365[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][2U] 
            = (~ __Vtemp4365[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][3U] 
            = (~ __Vtemp4365[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4367[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4368[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4370[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4367[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4368[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4370[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4367[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4368[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4370[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4367[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4368[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4370[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__8__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4376, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4378, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4379, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4381, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][0U] 
            = (~ __Vtemp4376[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][1U] 
            = (~ __Vtemp4376[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][2U] 
            = (~ __Vtemp4376[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][3U] 
            = (~ __Vtemp4376[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4378[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4379[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4381[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4378[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4379[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4381[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4378[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4379[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4381[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4378[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4379[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4381[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__10__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4387, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4389, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4390, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4392, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][0U] 
            = (~ __Vtemp4387[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][1U] 
            = (~ __Vtemp4387[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][2U] 
            = (~ __Vtemp4387[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][3U] 
            = (~ __Vtemp4387[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4389[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4390[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4392[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4389[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4390[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4392[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4389[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4390[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4392[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4389[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4390[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4392[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__12__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4398, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4400, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4401, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4403, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][0U] 
            = (~ __Vtemp4398[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][1U] 
            = (~ __Vtemp4398[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][2U] 
            = (~ __Vtemp4398[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][3U] 
            = (~ __Vtemp4398[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4400[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4401[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4403[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4400[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4401[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4403[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4400[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4401[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4403[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4400[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4401[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4403[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__14__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4409, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4411, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4412, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4414, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][0U] 
            = (~ __Vtemp4409[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][1U] 
            = (~ __Vtemp4409[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][2U] 
            = (~ __Vtemp4409[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][3U] 
            = (~ __Vtemp4409[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4411[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4412[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4414[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4411[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4412[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4414[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4411[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4412[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4414[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4411[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4412[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4414[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__16__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4420, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4422, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4423, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4425, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][0U] 
            = (~ __Vtemp4420[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][1U] 
            = (~ __Vtemp4420[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][2U] 
            = (~ __Vtemp4420[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][3U] 
            = (~ __Vtemp4420[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4422[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4423[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4425[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4422[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4423[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4425[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4422[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4423[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4425[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4422[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4423[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4425[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__18__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4431, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4433, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4434, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4436, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][0U] 
            = (~ __Vtemp4431[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][1U] 
            = (~ __Vtemp4431[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][2U] 
            = (~ __Vtemp4431[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][3U] 
            = (~ __Vtemp4431[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4433[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4434[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4436[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4433[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4434[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4436[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4433[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4434[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4436[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4433[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4434[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4436[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__20__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4442, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4444, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4445, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4447, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][0U] 
            = (~ __Vtemp4442[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][1U] 
            = (~ __Vtemp4442[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][2U] 
            = (~ __Vtemp4442[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][3U] 
            = (~ __Vtemp4442[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4444[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4445[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4447[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4444[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4445[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4447[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4444[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4445[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4447[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4444[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4445[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4447[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__22__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4453, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4455, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4456, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4458, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][0U] 
            = (~ __Vtemp4453[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][1U] 
            = (~ __Vtemp4453[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][2U] 
            = (~ __Vtemp4453[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][3U] 
            = (~ __Vtemp4453[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4455[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4456[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4458[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4455[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4456[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4458[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4455[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4456[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4458[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4455[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4456[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4458[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__24__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4464, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4466, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4467, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4469, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][0U] 
            = (~ __Vtemp4464[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][1U] 
            = (~ __Vtemp4464[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][2U] 
            = (~ __Vtemp4464[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][3U] 
            = (~ __Vtemp4464[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4466[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4467[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4469[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4466[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4467[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4469[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4466[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4467[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4469[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4466[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4467[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4469[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__26__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4475, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4477, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4478, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4480, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][0U] 
            = (~ __Vtemp4475[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][1U] 
            = (~ __Vtemp4475[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][2U] 
            = (~ __Vtemp4475[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][3U] 
            = (~ __Vtemp4475[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4477[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4478[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4480[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4477[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4478[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4480[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4477[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4478[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4480[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4477[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4478[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4480[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__28__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4486, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4488, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4489, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4491, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][0U] 
            = (~ __Vtemp4486[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][1U] 
            = (~ __Vtemp4486[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][2U] 
            = (~ __Vtemp4486[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][3U] 
            = (~ __Vtemp4486[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4488[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4489[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4491[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4488[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4489[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4491[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4488[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4489[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4491[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4488[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4489[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4491[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__30__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4497, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4499, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4500, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4502, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][0U] 
            = (~ __Vtemp4497[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][1U] 
            = (~ __Vtemp4497[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][2U] 
            = (~ __Vtemp4497[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][3U] 
            = (~ __Vtemp4497[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4499[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4500[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4502[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4499[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4500[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4502[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4499[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4500[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4502[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4499[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4500[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4502[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__32__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4508, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4510, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4511, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4513, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][0U] 
            = (~ __Vtemp4508[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][1U] 
            = (~ __Vtemp4508[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][2U] 
            = (~ __Vtemp4508[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][3U] 
            = (~ __Vtemp4508[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4510[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4511[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4513[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4510[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4511[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4513[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4510[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4511[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4513[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4510[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4511[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4513[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__34__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4519, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4521, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4522, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4524, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][0U] 
            = (~ __Vtemp4519[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][1U] 
            = (~ __Vtemp4519[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][2U] 
            = (~ __Vtemp4519[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][3U] 
            = (~ __Vtemp4519[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4521[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4522[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4524[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4521[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4522[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4524[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4521[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4522[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4524[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4521[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4522[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4524[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__36__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4530, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4532, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4533, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4535, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][0U] 
            = (~ __Vtemp4530[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][1U] 
            = (~ __Vtemp4530[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][2U] 
            = (~ __Vtemp4530[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][3U] 
            = (~ __Vtemp4530[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4532[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4533[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4535[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4532[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4533[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4535[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4532[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4533[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4535[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4532[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4533[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4535[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__38__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4541, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4543, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4544, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4546, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][0U] 
            = (~ __Vtemp4541[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][1U] 
            = (~ __Vtemp4541[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][2U] 
            = (~ __Vtemp4541[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][3U] 
            = (~ __Vtemp4541[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4543[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4544[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4546[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4543[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4544[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4546[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4543[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4544[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4546[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4543[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4544[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4546[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__40__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4552, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4554, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4555, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4557, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][0U] 
            = (~ __Vtemp4552[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][1U] 
            = (~ __Vtemp4552[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][2U] 
            = (~ __Vtemp4552[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][3U] 
            = (~ __Vtemp4552[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4554[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4555[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4557[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4554[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4555[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4557[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4554[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4555[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4557[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4554[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4555[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4557[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__42__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4563, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4565, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4566, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4568, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][0U] 
            = (~ __Vtemp4563[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][1U] 
            = (~ __Vtemp4563[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][2U] 
            = (~ __Vtemp4563[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][3U] 
            = (~ __Vtemp4563[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4565[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4566[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4568[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4565[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4566[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4568[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4565[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4566[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4568[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4565[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4566[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4568[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__44__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4574, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4576, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4577, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4579, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][0U] 
            = (~ __Vtemp4574[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][1U] 
            = (~ __Vtemp4574[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][2U] 
            = (~ __Vtemp4574[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][3U] 
            = (~ __Vtemp4574[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4576[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4577[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4579[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4576[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4577[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4579[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4576[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4577[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4579[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4576[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4577[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4579[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__46__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4585, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4587, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4588, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4590, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][0U] 
            = (~ __Vtemp4585[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][1U] 
            = (~ __Vtemp4585[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][2U] 
            = (~ __Vtemp4585[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][3U] 
            = (~ __Vtemp4585[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4587[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4588[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4590[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4587[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4588[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4590[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4587[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4588[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4590[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4587[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4588[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4590[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__48__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4596, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4598, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4599, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4601, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][0U] 
            = (~ __Vtemp4596[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][1U] 
            = (~ __Vtemp4596[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][2U] 
            = (~ __Vtemp4596[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][3U] 
            = (~ __Vtemp4596[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4598[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4599[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4601[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4598[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4599[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4601[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4598[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4599[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4601[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4598[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4599[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4601[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__50__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4607, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4609, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4610, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4612, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][0U] 
            = (~ __Vtemp4607[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][1U] 
            = (~ __Vtemp4607[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][2U] 
            = (~ __Vtemp4607[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][3U] 
            = (~ __Vtemp4607[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4609[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4610[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4612[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4609[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4610[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4612[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4609[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4610[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4612[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4609[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4610[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4612[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__52__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4618, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4620, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4621, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4623, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][0U] 
            = (~ __Vtemp4618[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][1U] 
            = (~ __Vtemp4618[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][2U] 
            = (~ __Vtemp4618[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][3U] 
            = (~ __Vtemp4618[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4620[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4621[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4623[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4620[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4621[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4623[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4620[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4621[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4623[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4620[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4621[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4623[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__54__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4629, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4631, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4632, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4634, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][0U] 
            = (~ __Vtemp4629[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][1U] 
            = (~ __Vtemp4629[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][2U] 
            = (~ __Vtemp4629[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][3U] 
            = (~ __Vtemp4629[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4631[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4632[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4634[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4631[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4632[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4634[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4631[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4632[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4634[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4631[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4632[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4634[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__56__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4640, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4642, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4643, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4645, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][0U] 
            = (~ __Vtemp4640[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][1U] 
            = (~ __Vtemp4640[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][2U] 
            = (~ __Vtemp4640[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][3U] 
            = (~ __Vtemp4640[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4642[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4643[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4645[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4642[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4643[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4645[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4642[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4643[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4645[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4642[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4643[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4645[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__58__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4651, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4653, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4654, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4656, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][0U] 
            = (~ __Vtemp4651[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][1U] 
            = (~ __Vtemp4651[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][2U] 
            = (~ __Vtemp4651[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][3U] 
            = (~ __Vtemp4651[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4653[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4654[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4656[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4653[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4654[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4656[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4653[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4654[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4656[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4653[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4654[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4656[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__60__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4662, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4664, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4665, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4667, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][0U] 
            = (~ __Vtemp4662[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][1U] 
            = (~ __Vtemp4662[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][2U] 
            = (~ __Vtemp4662[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][3U] 
            = (~ __Vtemp4662[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4664[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4665[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4667[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4664[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4665[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4667[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4664[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4665[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4667[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4664[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4665[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4667[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__62__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4673, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4675, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4676, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp4678, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][0U] 
            = (~ __Vtemp4673[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][1U] 
            = (~ __Vtemp4673[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][2U] 
            = (~ __Vtemp4673[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][3U] 
            = (~ __Vtemp4673[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4675[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4676[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4678[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4675[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4676[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4678[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4675[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4676[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4678[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp4675[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp4676[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp4678[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__64__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)));
}

VL_INLINE_OPT void Vysyx_041461_TOP___024root___sequent__TOP__15(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___sequent__TOP__15\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp4684;
    VlWide<4>/*127:0*/ __Vtemp4685;
    VlWide<4>/*127:0*/ __Vtemp4686;
    VlWide<4>/*127:0*/ __Vtemp4687;
    // Body
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[1U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[1U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[1U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[1U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[2U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[2U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[2U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[2U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[3U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[3U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[3U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[3U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[4U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[4U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[4U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[4U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[5U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[5U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[5U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[5U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[6U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[6U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[6U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[6U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[7U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[7U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[7U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[7U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[8U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[8U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[8U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[8U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[9U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[9U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[9U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[9U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0xaU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0xaU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0xaU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0xaU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0xbU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0xbU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0xbU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0xbU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0xcU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0xcU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0xcU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0xcU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0xdU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0xdU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0xdU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0xdU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0xeU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0xeU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0xeU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0xeU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0xfU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0xfU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0xfU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0xfU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x10U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x10U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x10U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x10U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x11U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x11U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x11U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x11U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x12U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x12U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x12U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x12U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x13U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x13U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x13U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x13U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x14U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x14U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x14U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x14U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x15U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x15U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x15U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x15U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x16U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x16U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x16U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x16U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x17U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x17U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x17U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x17U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x18U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x18U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x18U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x18U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x19U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x19U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x19U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x19U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x1aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x1aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x1aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x1aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x1bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x1bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x1bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x1bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x1cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x1cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x1cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x1cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x1dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x1dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x1dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x1dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x1eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x1eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x1eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x1eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x1fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x1fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x1fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x1fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x20U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x20U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x20U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x20U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x21U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x21U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x21U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x21U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x22U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x22U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x22U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x22U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x23U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x23U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x23U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x23U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x24U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x24U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x24U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x24U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x25U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x25U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x25U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x25U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x26U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x26U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x26U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x26U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x27U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x27U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x27U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x27U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x28U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x28U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x28U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x28U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x29U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x29U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x29U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x29U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x2aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x2aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x2aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x2aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x2bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x2bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x2bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x2bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x2cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x2cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x2cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x2cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x2dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x2dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x2dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x2dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x2eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x2eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x2eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x2eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x2fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x2fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x2fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x2fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x30U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x30U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x30U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x30U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x31U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x31U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x31U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x31U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x32U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x32U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x32U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x32U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x33U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x33U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x33U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x33U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x34U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x34U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x34U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x34U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x35U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x35U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x35U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x35U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x36U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x36U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x36U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x36U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x37U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x37U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x37U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x37U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x38U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x38U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x38U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x38U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x39U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x39U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x39U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x39U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x3aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x3aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x3aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x3aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x3bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x3bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x3bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x3bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x3cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x3cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x3cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x3cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x3dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x3dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x3dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x3dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x3eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x3eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x3eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x3eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x3fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x3fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x3fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x3fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x40U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x40U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x40U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x40U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x41U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x41U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x41U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x41U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x42U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x42U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x42U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x42U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x43U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x43U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x43U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x43U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x44U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x44U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x44U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x44U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x45U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x45U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x45U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x45U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x46U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x46U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x46U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x46U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x47U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x47U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x47U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x47U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x48U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x48U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x48U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x48U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x49U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x49U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x49U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x49U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x4aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x4aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x4aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x4aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x4bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x4bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x4bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x4bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x4cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x4cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x4cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x4cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x4dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x4dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x4dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x4dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x4eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x4eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x4eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x4eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x4fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x4fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x4fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x4fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x50U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x50U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x50U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x50U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x51U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x51U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x51U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x51U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x52U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x52U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x52U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x52U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x53U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x53U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x53U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x53U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x54U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x54U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x54U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x54U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x55U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x55U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x55U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x55U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x56U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x56U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x56U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x56U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x57U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x57U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x57U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x57U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x58U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x58U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x58U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x58U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x59U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x59U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x59U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x59U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x5aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x5aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x5aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x5aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x5bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x5bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x5bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x5bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x5cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x5cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x5cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x5cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x5dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x5dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x5dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x5dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x5eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x5eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x5eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x5eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x5fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x5fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x5fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x5fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x60U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x60U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x60U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x60U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x61U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x61U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x61U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x61U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x62U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x62U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x62U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x62U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x63U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x63U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x63U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x63U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x64U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x64U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x64U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x64U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x65U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x65U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x65U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x65U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x66U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x66U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x66U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x66U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x67U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x67U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x67U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x67U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x68U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x68U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x68U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x68U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x69U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x69U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x69U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x69U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x6aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x6aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x6aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x6aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x6bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x6bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x6bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x6bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x6cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x6cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x6cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x6cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x6dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x6dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x6dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x6dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x6eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x6eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x6eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x6eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x6fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x6fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x6fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x6fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x70U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x70U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x70U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x70U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x71U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x71U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x71U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x71U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x72U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x72U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x72U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x72U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x73U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x73U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x73U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x73U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x74U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x74U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x74U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x74U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x75U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x75U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x75U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x75U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x76U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x76U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x76U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x76U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x77U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x77U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x77U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x77U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x78U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x78U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x78U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x78U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x79U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x79U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x79U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x79U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x7aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x7aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x7aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x7aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x7bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x7bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x7bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x7bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x7cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x7cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x7cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x7cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x7dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x7dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x7dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x7dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x7eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x7eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x7eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x7eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x7fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0x7fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x7fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x7fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7[0U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1fffffffcULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | (IData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                [1U]) << 1U) | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                                [0U])))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1fffffff3ULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [3U]) << 1U) | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                                 [2U])))) 
              << 2U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1ffffffcfULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [5U]) << 1U) | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                                 [4U])))) 
              << 4U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1ffffff3fULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [7U]) << 1U) | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                                 [6U])))) 
              << 6U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1fffffcffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [9U]) << 1U) | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                                 [8U])))) 
              << 8U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1fffff3ffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [0xbU]) << 1U) | (
                                                   (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                                   & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                                   [0xaU])))) 
              << 0xaU));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1ffffcfffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [0xdU]) << 1U) | (
                                                   (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                                   & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                                   [0xcU])))) 
              << 0xcU));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1ffff3fffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [0xfU]) << 1U) | (
                                                   (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                                   & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                                   [0xeU])))) 
              << 0xeU));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1fffcffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [0x11U]) << 1U) | 
                               ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                [0x10U])))) << 0x10U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1fff3ffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [0x13U]) << 1U) | 
                               ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                [0x12U])))) << 0x12U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1ffcfffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [0x15U]) << 1U) | 
                               ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                [0x14U])))) << 0x14U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1ff3fffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [0x17U]) << 1U) | 
                               ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                [0x16U])))) << 0x16U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1fcffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [0x19U]) << 1U) | 
                               ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                [0x18U])))) << 0x18U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1f3ffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [0x1bU]) << 1U) | 
                               ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                [0x1aU])))) << 0x1aU));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x1cfffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [0x1dU]) << 1U) | 
                               ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                [0x1cU])))) << 0x1cU));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0x13fffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                 & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                 [0x1fU]) << 1U) | 
                               ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                                [0x1eU])))) << 0x1eU));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
        = ((0xffffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c) 
           | ((QData)((IData)(((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2)) 
                               & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c
                               [0x20U]))) << 0x20U));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0U] 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[1U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__2__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[2U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__4__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[3U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__6__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[4U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__8__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[5U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__10__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[6U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__12__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[7U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__14__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[8U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__16__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[9U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__18__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0xaU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__20__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0xbU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__22__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0xcU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__24__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0xdU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__26__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0xeU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__28__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0xfU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__30__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x10U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__32__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x11U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__34__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x12U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__36__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x13U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__38__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x14U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__40__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x15U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__42__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x16U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__44__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x17U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__46__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x18U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__48__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x19U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__50__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x1aU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__52__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x1bU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__54__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x1cU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__56__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x1dU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__58__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x1eU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__60__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x1fU] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__62__KET____DOT__Booth_core__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0x20U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__64__KET____DOT__Booth_core__Booth_core_c;
    VL_ADD_W(4, __Vtemp4684, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src1, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src2);
    VL_EXTEND_WI(128,1, __Vtemp4685, (1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                    >> 0x20U))));
    VL_ADD_W(4, __Vtemp4686, __Vtemp4684, __Vtemp4685);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_hi 
        = (((QData)((IData)(__Vtemp4686[3U])) << 0x20U) 
           | (QData)((IData)(__Vtemp4686[2U])));
    VL_EXTEND_WI(128,1, __Vtemp4687, (1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                    >> 0x20U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_lo 
        = (((((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src1[1U])) 
              << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src1[0U]))) 
            + (((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src2[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src2[0U])))) 
           + (((QData)((IData)(__Vtemp4687[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp4687[0U]))));
    if ((1U & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out)) 
               | (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out = 0ULL;
    } else if ((0x10U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        if ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out = 0ULL;
                } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out = 0ULL;
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_remainder_out 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_remainder_out)));
                }
            } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_remainder_out 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_remainder_out)));
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out)));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out)));
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_lo 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_lo)));
            }
        } else if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                           - vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle)));
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                        = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                           + vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle)));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                    = (QData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1), 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)))));
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle)));
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                    = (QData)((IData)(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1) 
                                       >> (0x1fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)))));
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle)));
            }
        } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                    = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                       << (0x1fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle)));
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_remainder_out;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_remainder_out;
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out;
        }
    } else if ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out;
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_hi;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_hi;
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_hi;
            }
        } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_lo;
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                        < vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)
                        ? 1ULL : 0ULL);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (VL_LTS_IQQ(1,64,64, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)
                    ? 1ULL : 0ULL);
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                   & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
        }
    } else if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                       | vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                       ^ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                   - vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                   + vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
        }
    } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1, 
                                 (0x3fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                   >> (0x3fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
        }
    } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
            = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
               << (0x3fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0ULL;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out = 0ULL;
    }
}
