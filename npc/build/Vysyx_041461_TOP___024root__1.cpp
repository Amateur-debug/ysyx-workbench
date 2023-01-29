// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041461_TOP.h for the primary calling header

#include "Vysyx_041461_TOP___024root.h"
#include "Vysyx_041461_TOP__Syms.h"

#include "verilated_dpi.h"

void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__get_WB_valid_TOP(CData/*7:0*/ a);
void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__ebreak_TOP();
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_0fc9e6c7_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_ed9e6550_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_d1140eb3_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_8cb9ad1b_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_041461_TOP__ConstPool__TABLE_be24ae63_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_041461_TOP__ConstPool__TABLE_84736496_0;

VL_INLINE_OPT void Vysyx_041461_TOP___024root___sequent__TOP__6(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___sequent__TOP__6\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    SData/*8:0*/ __Vtableidx5;
    VlWide<4>/*127:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp43;
    VlWide<3>/*95:0*/ __Vtemp44;
    VlWide<4>/*127:0*/ __Vtemp53;
    VlWide<4>/*127:0*/ __Vtemp55;
    VlWide<4>/*127:0*/ __Vtemp56;
    VlWide<4>/*127:0*/ __Vtemp58;
    VlWide<4>/*127:0*/ __Vtemp64;
    VlWide<4>/*127:0*/ __Vtemp66;
    VlWide<4>/*127:0*/ __Vtemp67;
    VlWide<4>/*127:0*/ __Vtemp69;
    VlWide<4>/*127:0*/ __Vtemp75;
    VlWide<4>/*127:0*/ __Vtemp77;
    VlWide<4>/*127:0*/ __Vtemp78;
    VlWide<4>/*127:0*/ __Vtemp80;
    VlWide<4>/*127:0*/ __Vtemp86;
    VlWide<4>/*127:0*/ __Vtemp88;
    VlWide<4>/*127:0*/ __Vtemp89;
    VlWide<4>/*127:0*/ __Vtemp91;
    VlWide<4>/*127:0*/ __Vtemp97;
    VlWide<4>/*127:0*/ __Vtemp99;
    VlWide<4>/*127:0*/ __Vtemp100;
    VlWide<4>/*127:0*/ __Vtemp102;
    VlWide<4>/*127:0*/ __Vtemp108;
    VlWide<4>/*127:0*/ __Vtemp110;
    VlWide<4>/*127:0*/ __Vtemp111;
    VlWide<4>/*127:0*/ __Vtemp113;
    VlWide<4>/*127:0*/ __Vtemp119;
    VlWide<4>/*127:0*/ __Vtemp121;
    VlWide<4>/*127:0*/ __Vtemp122;
    VlWide<4>/*127:0*/ __Vtemp124;
    VlWide<4>/*127:0*/ __Vtemp130;
    VlWide<4>/*127:0*/ __Vtemp132;
    VlWide<4>/*127:0*/ __Vtemp133;
    VlWide<4>/*127:0*/ __Vtemp135;
    VlWide<4>/*127:0*/ __Vtemp141;
    VlWide<4>/*127:0*/ __Vtemp143;
    VlWide<4>/*127:0*/ __Vtemp144;
    VlWide<4>/*127:0*/ __Vtemp146;
    VlWide<4>/*127:0*/ __Vtemp152;
    VlWide<4>/*127:0*/ __Vtemp154;
    VlWide<4>/*127:0*/ __Vtemp155;
    VlWide<4>/*127:0*/ __Vtemp157;
    VlWide<4>/*127:0*/ __Vtemp163;
    VlWide<4>/*127:0*/ __Vtemp165;
    VlWide<4>/*127:0*/ __Vtemp166;
    VlWide<4>/*127:0*/ __Vtemp168;
    VlWide<4>/*127:0*/ __Vtemp174;
    VlWide<4>/*127:0*/ __Vtemp176;
    VlWide<4>/*127:0*/ __Vtemp177;
    VlWide<4>/*127:0*/ __Vtemp179;
    VlWide<4>/*127:0*/ __Vtemp185;
    VlWide<4>/*127:0*/ __Vtemp187;
    VlWide<4>/*127:0*/ __Vtemp188;
    VlWide<4>/*127:0*/ __Vtemp190;
    VlWide<4>/*127:0*/ __Vtemp196;
    VlWide<4>/*127:0*/ __Vtemp198;
    VlWide<4>/*127:0*/ __Vtemp199;
    VlWide<4>/*127:0*/ __Vtemp201;
    VlWide<4>/*127:0*/ __Vtemp207;
    VlWide<4>/*127:0*/ __Vtemp209;
    VlWide<4>/*127:0*/ __Vtemp210;
    VlWide<4>/*127:0*/ __Vtemp212;
    VlWide<4>/*127:0*/ __Vtemp218;
    VlWide<4>/*127:0*/ __Vtemp220;
    VlWide<4>/*127:0*/ __Vtemp221;
    VlWide<4>/*127:0*/ __Vtemp223;
    VlWide<4>/*127:0*/ __Vtemp229;
    VlWide<4>/*127:0*/ __Vtemp231;
    VlWide<4>/*127:0*/ __Vtemp232;
    VlWide<4>/*127:0*/ __Vtemp234;
    VlWide<4>/*127:0*/ __Vtemp240;
    VlWide<4>/*127:0*/ __Vtemp242;
    VlWide<4>/*127:0*/ __Vtemp243;
    VlWide<4>/*127:0*/ __Vtemp245;
    VlWide<4>/*127:0*/ __Vtemp251;
    VlWide<4>/*127:0*/ __Vtemp253;
    VlWide<4>/*127:0*/ __Vtemp254;
    VlWide<4>/*127:0*/ __Vtemp256;
    VlWide<4>/*127:0*/ __Vtemp262;
    VlWide<4>/*127:0*/ __Vtemp264;
    VlWide<4>/*127:0*/ __Vtemp265;
    VlWide<4>/*127:0*/ __Vtemp267;
    VlWide<4>/*127:0*/ __Vtemp273;
    VlWide<4>/*127:0*/ __Vtemp275;
    VlWide<4>/*127:0*/ __Vtemp276;
    VlWide<4>/*127:0*/ __Vtemp278;
    VlWide<4>/*127:0*/ __Vtemp284;
    VlWide<4>/*127:0*/ __Vtemp286;
    VlWide<4>/*127:0*/ __Vtemp287;
    VlWide<4>/*127:0*/ __Vtemp289;
    VlWide<4>/*127:0*/ __Vtemp295;
    VlWide<4>/*127:0*/ __Vtemp297;
    VlWide<4>/*127:0*/ __Vtemp298;
    VlWide<4>/*127:0*/ __Vtemp300;
    VlWide<4>/*127:0*/ __Vtemp306;
    VlWide<4>/*127:0*/ __Vtemp308;
    VlWide<4>/*127:0*/ __Vtemp309;
    VlWide<4>/*127:0*/ __Vtemp311;
    VlWide<4>/*127:0*/ __Vtemp317;
    VlWide<4>/*127:0*/ __Vtemp319;
    VlWide<4>/*127:0*/ __Vtemp320;
    VlWide<4>/*127:0*/ __Vtemp322;
    VlWide<4>/*127:0*/ __Vtemp328;
    VlWide<4>/*127:0*/ __Vtemp330;
    VlWide<4>/*127:0*/ __Vtemp331;
    VlWide<4>/*127:0*/ __Vtemp333;
    VlWide<4>/*127:0*/ __Vtemp339;
    VlWide<4>/*127:0*/ __Vtemp341;
    VlWide<4>/*127:0*/ __Vtemp342;
    VlWide<4>/*127:0*/ __Vtemp344;
    VlWide<4>/*127:0*/ __Vtemp350;
    VlWide<4>/*127:0*/ __Vtemp352;
    VlWide<4>/*127:0*/ __Vtemp353;
    VlWide<4>/*127:0*/ __Vtemp355;
    VlWide<4>/*127:0*/ __Vtemp361;
    VlWide<4>/*127:0*/ __Vtemp363;
    VlWide<4>/*127:0*/ __Vtemp364;
    VlWide<4>/*127:0*/ __Vtemp366;
    VlWide<4>/*127:0*/ __Vtemp372;
    VlWide<4>/*127:0*/ __Vtemp374;
    VlWide<4>/*127:0*/ __Vtemp375;
    VlWide<4>/*127:0*/ __Vtemp377;
    VlWide<4>/*127:0*/ __Vtemp383;
    VlWide<4>/*127:0*/ __Vtemp385;
    VlWide<4>/*127:0*/ __Vtemp386;
    VlWide<4>/*127:0*/ __Vtemp388;
    VlWide<4>/*127:0*/ __Vtemp394;
    VlWide<4>/*127:0*/ __Vtemp396;
    VlWide<4>/*127:0*/ __Vtemp397;
    VlWide<4>/*127:0*/ __Vtemp399;
    VlWide<4>/*127:0*/ __Vtemp406;
    VlWide<4>/*127:0*/ __Vtemp408;
    VlWide<4>/*127:0*/ __Vtemp414;
    VlWide<4>/*127:0*/ __Vtemp415;
    VlWide<4>/*127:0*/ __Vtemp416;
    VlWide<4>/*127:0*/ __Vtemp417;
    VlWide<4>/*127:0*/ __Vtemp418;
    VlWide<4>/*127:0*/ __Vtemp419;
    VlWide<4>/*127:0*/ __Vtemp420;
    VlWide<4>/*127:0*/ __Vtemp421;
    VlWide<4>/*127:0*/ __Vtemp422;
    VlWide<4>/*127:0*/ __Vtemp423;
    VlWide<4>/*127:0*/ __Vtemp424;
    VlWide<4>/*127:0*/ __Vtemp425;
    VlWide<4>/*127:0*/ __Vtemp426;
    VlWide<4>/*127:0*/ __Vtemp427;
    VlWide<4>/*127:0*/ __Vtemp428;
    VlWide<4>/*127:0*/ __Vtemp429;
    VlWide<4>/*127:0*/ __Vtemp430;
    VlWide<4>/*127:0*/ __Vtemp431;
    VlWide<4>/*127:0*/ __Vtemp432;
    VlWide<4>/*127:0*/ __Vtemp433;
    VlWide<4>/*127:0*/ __Vtemp434;
    VlWide<4>/*127:0*/ __Vtemp435;
    VlWide<4>/*127:0*/ __Vtemp436;
    VlWide<4>/*127:0*/ __Vtemp437;
    VlWide<4>/*127:0*/ __Vtemp438;
    VlWide<4>/*127:0*/ __Vtemp439;
    VlWide<4>/*127:0*/ __Vtemp440;
    VlWide<4>/*127:0*/ __Vtemp441;
    VlWide<4>/*127:0*/ __Vtemp442;
    VlWide<4>/*127:0*/ __Vtemp443;
    VlWide<4>/*127:0*/ __Vtemp444;
    VlWide<4>/*127:0*/ __Vtemp445;
    VlWide<4>/*127:0*/ __Vtemp446;
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V4__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V3__v127;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out;
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag5__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__tag6__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V2__v127;
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__V1__v127;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out;
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V8__v127;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out;
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v64) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v64;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v65;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v66;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v67;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v68;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v69;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v70;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v71;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v72;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v73;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v74;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v75;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v76;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v77;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v78;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v79;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v80;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v81;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v82;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v83;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v84;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v85;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v86;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v87;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v88;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v89;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v90;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v91;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v92;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v93;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v94;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v95;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v96;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v97;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v98;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v99;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v100;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v101;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v102;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v103;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v104;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v105;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v106;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v107;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v108;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v109;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v110;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v111;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v112;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v113;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v114;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v115;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v116;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v117;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v118;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v119;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v120;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v121;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v122;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v123;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v124;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v125;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v126;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__V7__v127;
    }
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state;
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__state 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__state;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_MEM_ctrl_out 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__EXEreg_MEM_ctrl_out;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
        = vlSelf->__Vdly__ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out;
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
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v128) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v128;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[1U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v129;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[2U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v130;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[3U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v131;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[4U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v132;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[5U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v133;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[6U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v134;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[7U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v135;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[8U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v136;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[9U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v137;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0xaU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v138;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0xbU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v139;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0xcU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v140;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0xdU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v141;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0xeU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v142;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0xfU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v143;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x10U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v144;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x11U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v145;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x12U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v146;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x13U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v147;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x14U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v148;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x15U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v149;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x16U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v150;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x17U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v151;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x18U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v152;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x19U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v153;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x1aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v154;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x1bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v155;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x1cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v156;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x1dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v157;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x1eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v158;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x1fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v159;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x20U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v160;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x21U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v161;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x22U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v162;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x23U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v163;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x24U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v164;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x25U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v165;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x26U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v166;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x27U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v167;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x28U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v168;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x29U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v169;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x2aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v170;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x2bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v171;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x2cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v172;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x2dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v173;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x2eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v174;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x2fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v175;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x30U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v176;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x31U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v177;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x32U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v178;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x33U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v179;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x34U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v180;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x35U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v181;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x36U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v182;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x37U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v183;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x38U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v184;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x39U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v185;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x3aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v186;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x3bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v187;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x3cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v188;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x3dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v189;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x3eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v190;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x3fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v191;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x40U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v192;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x41U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v193;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x42U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v194;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x43U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v195;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x44U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v196;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x45U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v197;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x46U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v198;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x47U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v199;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x48U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v200;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x49U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v201;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x4aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v202;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x4bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v203;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x4cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v204;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x4dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v205;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x4eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v206;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x4fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v207;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x50U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v208;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x51U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v209;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x52U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v210;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x53U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v211;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x54U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v212;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x55U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v213;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x56U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v214;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x57U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v215;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x58U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v216;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x59U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v217;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x5aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v218;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x5bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v219;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x5cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v220;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x5dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v221;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x5eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v222;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x5fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v223;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x60U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v224;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x61U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v225;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x62U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v226;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x63U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v227;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x64U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v228;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x65U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v229;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x66U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v230;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x67U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v231;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x68U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v232;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x69U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v233;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x6aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v234;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x6bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v235;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x6cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v236;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x6dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v237;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x6eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v238;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x6fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v239;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x70U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v240;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x71U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v241;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x72U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v242;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x73U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v243;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x74U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v244;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x75U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v245;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x76U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v246;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x77U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v247;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x78U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v248;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x79U] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v249;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7aU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v250;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7bU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v251;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7cU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v252;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7dU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v253;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7eU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v254;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out[0x7fU] 
            = vlSelf->__Vdlyvval__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out__v255;
    }
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wlast 
        = (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid 
        = (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state));
    Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__get_WB_valid_TOP(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out);
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
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write 
            = ((((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)) 
                     | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                    | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                   | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                  | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                 | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
               & 1U);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write = 0U;
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
           & (((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out)) 
                   | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                  | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                 | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
               | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
              | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))));
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write 
            = ((((((((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out)) 
                     | (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                    | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                   | (4U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                  | (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                 | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
               & 1U);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write = 0U;
    }
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
    __Vtableidx5 = (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out) 
                     << 6U) | (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out) 
                                << 1U) | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs1_read 
        = Vysyx_041461_TOP__ConstPool__TABLE_d1140eb3_0
        [__Vtableidx5];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs2_read 
        = Vysyx_041461_TOP__ConstPool__TABLE_8cb9ad1b_0
        [__Vtableidx5];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_csr_read 
        = Vysyx_041461_TOP__ConstPool__TABLE_be24ae63_0
        [__Vtableidx5];
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
    if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
         & (8U == (0xcU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))))) {
        if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write) {
            if (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out) 
                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict = 1U;
            }
        }
    }
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
    VL_EXTEND_WQ(128,64, __Vtemp33, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1);
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U] 
            = __Vtemp33[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U] 
            = __Vtemp33[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U] 
            = __Vtemp33[2U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U] 
            = __Vtemp33[3U];
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
    VL_EXTEND_WQ(66,64, __Vtemp43, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
    VL_EXTEND_WQ(66,64, __Vtemp44, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
            = __Vtemp43[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
            = __Vtemp43[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
            = __Vtemp43[2U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp44[0U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                    ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)
                                    : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp44[1U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                    ? (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                               >> 0x20U))
                                    : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp44[2U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                    ? (3U & (- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                                   >> 0x3fU))))))
                                    : 0U));
    }
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 1U) & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U]));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive 
        = (1U & ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                     >> 1U)) & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U]));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative 
        = (1U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                  >> 1U) & (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U])));
    VL_SHIFTL_WWI(128,128,32, __Vtemp53, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp55, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp56, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp58, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][0U] 
            = (~ __Vtemp53[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][1U] 
            = (~ __Vtemp53[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][2U] 
            = (~ __Vtemp53[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][3U] 
            = (~ __Vtemp53[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp55[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp56[0U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp58[0U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp55[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp56[1U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp58[1U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp55[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp56[2U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp58[2U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp55[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp56[3U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp58[3U]
                                        : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__2__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp64, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp66, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp67, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp69, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][0U] 
            = (~ __Vtemp64[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][1U] 
            = (~ __Vtemp64[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][2U] 
            = (~ __Vtemp64[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][3U] 
            = (~ __Vtemp64[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp66[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp67[0U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp69[0U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp66[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp67[1U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp69[1U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp66[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp67[2U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp69[2U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp66[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp67[3U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp69[3U]
                                        : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__4__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp75, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp77, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp78, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp80, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][0U] 
            = (~ __Vtemp75[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][1U] 
            = (~ __Vtemp75[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][2U] 
            = (~ __Vtemp75[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][3U] 
            = (~ __Vtemp75[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp77[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp78[0U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp80[0U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp77[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp78[1U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp80[1U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp77[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp78[2U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp80[2U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp77[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp78[3U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp80[3U]
                                        : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__6__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp86, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp88, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp89, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp91, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][0U] 
            = (~ __Vtemp86[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][1U] 
            = (~ __Vtemp86[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][2U] 
            = (~ __Vtemp86[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][3U] 
            = (~ __Vtemp86[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp88[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp89[0U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp91[0U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp88[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp89[1U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp91[1U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp88[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp89[2U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp91[2U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp88[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp89[3U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp91[3U]
                                        : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__8__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp97, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp99, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp100, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp102, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][0U] 
            = (~ __Vtemp97[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][1U] 
            = (~ __Vtemp97[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][2U] 
            = (~ __Vtemp97[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][3U] 
            = (~ __Vtemp97[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp99[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp100[0U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp102[0U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp99[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp100[1U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp102[1U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp99[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp100[2U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp102[2U]
                                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp99[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                    ? (~ __Vtemp100[3U])
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                        ? __Vtemp102[3U]
                                        : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__10__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp108, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp110, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp111, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp113, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][0U] 
            = (~ __Vtemp108[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][1U] 
            = (~ __Vtemp108[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][2U] 
            = (~ __Vtemp108[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][3U] 
            = (~ __Vtemp108[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp110[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp111[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp113[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp110[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp111[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp113[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp110[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp111[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp113[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp110[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp111[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp113[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__12__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp119, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp121, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp122, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp124, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][0U] 
            = (~ __Vtemp119[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][1U] 
            = (~ __Vtemp119[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][2U] 
            = (~ __Vtemp119[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][3U] 
            = (~ __Vtemp119[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp121[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp122[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp124[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp121[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp122[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp124[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp121[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp122[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp124[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp121[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp122[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp124[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__14__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp130, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp132, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp133, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp135, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][0U] 
            = (~ __Vtemp130[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][1U] 
            = (~ __Vtemp130[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][2U] 
            = (~ __Vtemp130[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][3U] 
            = (~ __Vtemp130[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp132[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp133[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp135[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp132[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp133[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp135[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp132[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp133[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp135[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp132[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp133[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp135[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__16__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp141, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp143, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp144, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp146, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][0U] 
            = (~ __Vtemp141[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][1U] 
            = (~ __Vtemp141[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][2U] 
            = (~ __Vtemp141[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][3U] 
            = (~ __Vtemp141[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp143[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp144[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp146[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp143[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp144[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp146[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp143[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp144[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp146[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp143[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp144[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp146[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__18__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp152, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp154, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp155, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp157, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][0U] 
            = (~ __Vtemp152[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][1U] 
            = (~ __Vtemp152[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][2U] 
            = (~ __Vtemp152[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][3U] 
            = (~ __Vtemp152[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp154[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp155[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp157[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp154[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp155[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp157[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp154[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp155[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp157[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp154[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp155[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp157[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__20__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp163, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp165, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp166, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp168, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][0U] 
            = (~ __Vtemp163[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][1U] 
            = (~ __Vtemp163[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][2U] 
            = (~ __Vtemp163[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][3U] 
            = (~ __Vtemp163[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp165[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp166[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp168[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp165[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp166[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp168[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp165[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp166[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp168[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp165[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp166[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp168[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__22__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp174, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp176, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp177, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp179, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][0U] 
            = (~ __Vtemp174[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][1U] 
            = (~ __Vtemp174[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][2U] 
            = (~ __Vtemp174[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][3U] 
            = (~ __Vtemp174[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp176[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp177[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp179[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp176[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp177[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp179[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp176[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp177[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp179[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp176[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp177[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp179[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__24__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp185, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp187, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp188, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp190, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][0U] 
            = (~ __Vtemp185[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][1U] 
            = (~ __Vtemp185[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][2U] 
            = (~ __Vtemp185[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][3U] 
            = (~ __Vtemp185[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp187[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp188[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp190[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp187[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp188[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp190[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp187[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp188[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp190[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp187[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp188[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp190[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__26__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp196, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp198, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp199, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp201, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][0U] 
            = (~ __Vtemp196[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][1U] 
            = (~ __Vtemp196[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][2U] 
            = (~ __Vtemp196[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][3U] 
            = (~ __Vtemp196[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp198[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp199[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp201[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp198[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp199[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp201[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp198[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp199[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp201[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp198[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp199[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp201[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__28__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp207, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp209, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp210, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp212, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][0U] 
            = (~ __Vtemp207[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][1U] 
            = (~ __Vtemp207[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][2U] 
            = (~ __Vtemp207[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][3U] 
            = (~ __Vtemp207[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp209[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp210[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp212[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp209[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp210[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp212[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp209[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp210[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp212[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp209[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp210[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp212[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__30__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp218, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp220, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp221, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp223, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][0U] 
            = (~ __Vtemp218[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][1U] 
            = (~ __Vtemp218[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][2U] 
            = (~ __Vtemp218[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][3U] 
            = (~ __Vtemp218[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp220[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp221[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp223[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp220[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp221[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp223[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp220[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp221[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp223[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp220[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp221[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp223[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__32__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp229, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp231, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp232, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp234, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][0U] 
            = (~ __Vtemp229[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][1U] 
            = (~ __Vtemp229[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][2U] 
            = (~ __Vtemp229[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][3U] 
            = (~ __Vtemp229[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp231[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp232[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp234[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp231[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp232[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp234[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp231[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp232[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp234[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp231[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp232[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp234[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__34__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp240, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp242, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp243, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp245, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][0U] 
            = (~ __Vtemp240[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][1U] 
            = (~ __Vtemp240[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][2U] 
            = (~ __Vtemp240[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][3U] 
            = (~ __Vtemp240[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp242[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp243[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp245[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp242[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp243[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp245[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp242[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp243[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp245[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp242[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp243[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp245[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__36__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp251, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp253, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp254, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp256, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][0U] 
            = (~ __Vtemp251[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][1U] 
            = (~ __Vtemp251[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][2U] 
            = (~ __Vtemp251[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][3U] 
            = (~ __Vtemp251[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp253[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp254[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp256[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp253[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp254[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp256[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp253[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp254[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp256[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp253[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp254[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp256[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__38__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp262, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp264, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp265, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp267, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][0U] 
            = (~ __Vtemp262[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][1U] 
            = (~ __Vtemp262[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][2U] 
            = (~ __Vtemp262[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][3U] 
            = (~ __Vtemp262[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp264[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp265[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp267[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp264[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp265[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp267[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp264[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp265[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp267[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp264[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp265[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp267[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__40__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp273, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp275, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp276, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp278, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][0U] 
            = (~ __Vtemp273[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][1U] 
            = (~ __Vtemp273[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][2U] 
            = (~ __Vtemp273[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][3U] 
            = (~ __Vtemp273[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp275[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp276[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp278[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp275[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp276[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp278[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp275[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp276[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp278[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp275[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp276[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp278[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__42__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp284, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp286, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp287, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp289, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][0U] 
            = (~ __Vtemp284[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][1U] 
            = (~ __Vtemp284[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][2U] 
            = (~ __Vtemp284[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][3U] 
            = (~ __Vtemp284[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp286[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp287[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp289[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp286[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp287[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp289[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp286[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp287[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp289[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp286[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp287[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp289[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__44__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp295, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp297, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp298, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp300, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][0U] 
            = (~ __Vtemp295[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][1U] 
            = (~ __Vtemp295[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][2U] 
            = (~ __Vtemp295[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][3U] 
            = (~ __Vtemp295[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp297[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp298[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp300[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp297[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp298[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp300[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp297[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp298[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp300[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp297[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp298[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp300[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__46__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp306, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp308, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp309, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp311, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][0U] 
            = (~ __Vtemp306[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][1U] 
            = (~ __Vtemp306[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][2U] 
            = (~ __Vtemp306[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][3U] 
            = (~ __Vtemp306[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp308[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp309[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp311[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp308[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp309[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp311[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp308[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp309[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp311[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp308[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp309[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp311[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__48__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp317, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp319, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp320, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp322, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][0U] 
            = (~ __Vtemp317[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][1U] 
            = (~ __Vtemp317[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][2U] 
            = (~ __Vtemp317[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][3U] 
            = (~ __Vtemp317[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp319[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp320[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp322[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp319[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp320[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp322[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp319[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp320[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp322[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp319[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp320[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp322[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__50__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp328, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp330, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp331, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp333, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][0U] 
            = (~ __Vtemp328[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][1U] 
            = (~ __Vtemp328[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][2U] 
            = (~ __Vtemp328[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][3U] 
            = (~ __Vtemp328[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp330[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp331[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp333[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp330[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp331[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp333[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp330[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp331[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp333[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp330[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp331[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp333[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__52__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp339, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp341, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp342, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp344, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][0U] 
            = (~ __Vtemp339[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][1U] 
            = (~ __Vtemp339[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][2U] 
            = (~ __Vtemp339[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][3U] 
            = (~ __Vtemp339[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp341[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp342[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp344[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp341[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp342[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp344[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp341[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp342[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp344[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp341[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp342[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp344[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__54__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp350, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp352, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp353, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp355, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][0U] 
            = (~ __Vtemp350[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][1U] 
            = (~ __Vtemp350[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][2U] 
            = (~ __Vtemp350[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][3U] 
            = (~ __Vtemp350[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp352[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp353[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp355[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp352[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp353[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp355[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp352[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp353[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp355[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp352[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp353[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp355[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__56__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp361, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp363, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp364, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp366, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][0U] 
            = (~ __Vtemp361[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][1U] 
            = (~ __Vtemp361[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][2U] 
            = (~ __Vtemp361[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][3U] 
            = (~ __Vtemp361[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp363[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp364[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp366[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp363[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp364[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp366[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp363[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp364[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp366[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp363[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp364[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp366[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__58__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp372, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp374, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp375, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp377, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][0U] 
            = (~ __Vtemp372[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][1U] 
            = (~ __Vtemp372[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][2U] 
            = (~ __Vtemp372[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][3U] 
            = (~ __Vtemp372[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp374[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp375[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp377[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp374[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp375[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp377[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp374[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp375[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp377[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp374[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp375[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp377[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__60__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp383, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp385, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp386, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp388, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][0U] 
            = (~ __Vtemp383[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][1U] 
            = (~ __Vtemp383[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][2U] 
            = (~ __Vtemp383[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][3U] 
            = (~ __Vtemp383[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp385[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp386[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp388[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp385[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp386[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp388[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp385[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp386[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp388[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp385[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp386[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp388[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__62__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp394, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp396, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp397, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp399, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][0U] 
            = (~ __Vtemp394[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][1U] 
            = (~ __Vtemp394[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][2U] 
            = (~ __Vtemp394[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][3U] 
            = (~ __Vtemp394[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp396[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp397[0U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp399[0U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp396[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp397[1U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp399[1U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp396[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp397[2U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp399[2U]
                                         : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp396[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                     ? (~ __Vtemp397[3U])
                                     : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                         ? __Vtemp399[3U]
                                         : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__64__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core0__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp406, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp408, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 1U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core0__Booth_core_p[0U] 
            = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core0__Booth_core_p[1U] 
            = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core0__Booth_core_p[2U] 
            = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core0__Booth_core_p[3U] 
            = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core0__Booth_core_p[0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp406[0U]) : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                             ? __Vtemp408[0U]
                                             : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core0__Booth_core_p[1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp406[1U]) : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                             ? __Vtemp408[1U]
                                             : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core0__Booth_core_p[2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp406[2U]) : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                             ? __Vtemp408[2U]
                                             : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core0__Booth_core_p[3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp406[3U]) : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                             ? __Vtemp408[3U]
                                             : 0U)));
    }
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core0__Booth_core_c;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][0U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core0__Booth_core_p[0U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][1U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core0__Booth_core_p[1U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][2U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core0__Booth_core_p[2U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][3U] 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core0__Booth_core_p[3U];
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x80U, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)) {
        __Vtemp414[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0U][0U];
        __Vtemp414[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0U][1U];
        __Vtemp414[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0U][2U];
        __Vtemp414[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp414[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1fffffffeULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | (IData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)));
        __Vtemp415[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [1U][0U];
        __Vtemp415[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [1U][1U];
        __Vtemp415[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [1U][2U];
        __Vtemp415[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [1U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp415[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1fffffffdULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 1U));
        __Vtemp416[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [2U][0U];
        __Vtemp416[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [2U][1U];
        __Vtemp416[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [2U][2U];
        __Vtemp416[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [2U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp416[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1fffffffbULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 2U));
        __Vtemp417[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [3U][0U];
        __Vtemp417[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [3U][1U];
        __Vtemp417[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [3U][2U];
        __Vtemp417[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [3U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp417[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1fffffff7ULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 3U));
        __Vtemp418[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [4U][0U];
        __Vtemp418[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [4U][1U];
        __Vtemp418[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [4U][2U];
        __Vtemp418[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [4U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp418[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1ffffffefULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 4U));
        __Vtemp419[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [5U][0U];
        __Vtemp419[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [5U][1U];
        __Vtemp419[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [5U][2U];
        __Vtemp419[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [5U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp419[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1ffffffdfULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 5U));
        __Vtemp420[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [6U][0U];
        __Vtemp420[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [6U][1U];
        __Vtemp420[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [6U][2U];
        __Vtemp420[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [6U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp420[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1ffffffbfULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 6U));
        __Vtemp421[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [7U][0U];
        __Vtemp421[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [7U][1U];
        __Vtemp421[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [7U][2U];
        __Vtemp421[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [7U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp421[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1ffffff7fULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 7U));
        __Vtemp422[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [8U][0U];
        __Vtemp422[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [8U][1U];
        __Vtemp422[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [8U][2U];
        __Vtemp422[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [8U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp422[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1fffffeffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 8U));
        __Vtemp423[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [9U][0U];
        __Vtemp423[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [9U][1U];
        __Vtemp423[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [9U][2U];
        __Vtemp423[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [9U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp423[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1fffffdffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 9U));
        __Vtemp424[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xaU][0U];
        __Vtemp424[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xaU][1U];
        __Vtemp424[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xaU][2U];
        __Vtemp424[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xaU][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp424[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1fffffbffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0xaU));
        __Vtemp425[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xbU][0U];
        __Vtemp425[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xbU][1U];
        __Vtemp425[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xbU][2U];
        __Vtemp425[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xbU][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp425[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1fffff7ffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0xbU));
        __Vtemp426[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xcU][0U];
        __Vtemp426[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xcU][1U];
        __Vtemp426[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xcU][2U];
        __Vtemp426[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xcU][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp426[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1ffffefffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0xcU));
        __Vtemp427[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xdU][0U];
        __Vtemp427[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xdU][1U];
        __Vtemp427[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xdU][2U];
        __Vtemp427[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xdU][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp427[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1ffffdfffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0xdU));
        __Vtemp428[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xeU][0U];
        __Vtemp428[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xeU][1U];
        __Vtemp428[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xeU][2U];
        __Vtemp428[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xeU][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp428[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1ffffbfffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0xeU));
        __Vtemp429[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xfU][0U];
        __Vtemp429[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xfU][1U];
        __Vtemp429[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xfU][2U];
        __Vtemp429[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0xfU][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp429[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1ffff7fffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0xfU));
        __Vtemp430[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x10U][0U];
        __Vtemp430[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x10U][1U];
        __Vtemp430[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x10U][2U];
        __Vtemp430[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x10U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp430[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1fffeffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x10U));
        __Vtemp431[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x11U][0U];
        __Vtemp431[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x11U][1U];
        __Vtemp431[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x11U][2U];
        __Vtemp431[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x11U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp431[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1fffdffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x11U));
        __Vtemp432[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x12U][0U];
        __Vtemp432[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x12U][1U];
        __Vtemp432[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x12U][2U];
        __Vtemp432[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x12U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp432[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1fffbffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x12U));
        __Vtemp433[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x13U][0U];
        __Vtemp433[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x13U][1U];
        __Vtemp433[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x13U][2U];
        __Vtemp433[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x13U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp433[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1fff7ffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x13U));
        __Vtemp434[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x14U][0U];
        __Vtemp434[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x14U][1U];
        __Vtemp434[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x14U][2U];
        __Vtemp434[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x14U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp434[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1ffefffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x14U));
        __Vtemp435[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x15U][0U];
        __Vtemp435[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x15U][1U];
        __Vtemp435[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x15U][2U];
        __Vtemp435[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x15U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp435[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1ffdfffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x15U));
        __Vtemp436[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x16U][0U];
        __Vtemp436[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x16U][1U];
        __Vtemp436[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x16U][2U];
        __Vtemp436[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x16U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp436[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1ffbfffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x16U));
        __Vtemp437[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x17U][0U];
        __Vtemp437[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x17U][1U];
        __Vtemp437[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x17U][2U];
        __Vtemp437[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x17U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp437[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1ff7fffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x17U));
        __Vtemp438[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x18U][0U];
        __Vtemp438[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x18U][1U];
        __Vtemp438[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x18U][2U];
        __Vtemp438[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x18U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp438[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1feffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x18U));
        __Vtemp439[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x19U][0U];
        __Vtemp439[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x19U][1U];
        __Vtemp439[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x19U][2U];
        __Vtemp439[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x19U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp439[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1fdffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x19U));
        __Vtemp440[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1aU][0U];
        __Vtemp440[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1aU][1U];
        __Vtemp440[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1aU][2U];
        __Vtemp440[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1aU][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp440[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1fbffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x1aU));
        __Vtemp441[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1bU][0U];
        __Vtemp441[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1bU][1U];
        __Vtemp441[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1bU][2U];
        __Vtemp441[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1bU][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp441[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1f7ffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x1bU));
        __Vtemp442[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1cU][0U];
        __Vtemp442[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1cU][1U];
        __Vtemp442[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1cU][2U];
        __Vtemp442[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1cU][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp442[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1efffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x1cU));
        __Vtemp443[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1dU][0U];
        __Vtemp443[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1dU][1U];
        __Vtemp443[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1dU][2U];
        __Vtemp443[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1dU][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp443[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1dfffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x1dU));
        __Vtemp444[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1eU][0U];
        __Vtemp444[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1eU][1U];
        __Vtemp444[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1eU][2U];
        __Vtemp444[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1eU][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp444[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x1bfffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x1eU));
        __Vtemp445[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1fU][0U];
        __Vtemp445[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1fU][1U];
        __Vtemp445[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1fU][2U];
        __Vtemp445[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x1fU][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp445[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0x17fffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x1fU));
        __Vtemp446[0U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x20U][0U];
        __Vtemp446[1U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x20U][1U];
        __Vtemp446[2U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x20U][2U];
        __Vtemp446[3U] = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p
            [0x20U][3U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1 
            = (1U & (__Vtemp446[(3U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
                                       >> 5U))] >> 
                     (0x1fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next[(0x7fU 
                                                                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)] 
            = ((0xffffffffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out_next
                [(0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j)]) 
               | ((QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vlvbound1)) 
                  << 0x20U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__k = 0x21U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j 
            = ((IData)(1U) + vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__j);
    }
}
