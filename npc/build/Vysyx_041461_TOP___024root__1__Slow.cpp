// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041461_TOP.h for the primary calling header

#include "Vysyx_041461_TOP___024root.h"
#include "Vysyx_041461_TOP__Syms.h"

#include "verilated_dpi.h"

void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__get_need_difftest_TOP(CData/*7:0*/ a);
void Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__ebreak_TOP();

void Vysyx_041461_TOP___024root___settle__TOP__21(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___settle__TOP__21\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp4951;
    VlWide<4>/*127:0*/ __Vtemp4955;
    VlWide<4>/*127:0*/ __Vtemp4956;
    VlWide<4>/*127:0*/ __Vtemp4959;
    VlWide<4>/*127:0*/ __Vtemp4963;
    VlWide<4>/*127:0*/ __Vtemp4964;
    VlWide<4>/*127:0*/ __Vtemp4967;
    VlWide<4>/*127:0*/ __Vtemp4971;
    VlWide<4>/*127:0*/ __Vtemp4972;
    VlWide<4>/*127:0*/ __Vtemp4974;
    VlWide<3>/*95:0*/ __Vtemp4984;
    VlWide<3>/*95:0*/ __Vtemp4985;
    VlWide<4>/*127:0*/ __Vtemp4995;
    VlWide<4>/*127:0*/ __Vtemp5001;
    VlWide<4>/*127:0*/ __Vtemp5003;
    VlWide<4>/*127:0*/ __Vtemp5004;
    VlWide<4>/*127:0*/ __Vtemp5006;
    VlWide<4>/*127:0*/ __Vtemp5012;
    VlWide<4>/*127:0*/ __Vtemp5014;
    VlWide<4>/*127:0*/ __Vtemp5015;
    VlWide<4>/*127:0*/ __Vtemp5017;
    VlWide<4>/*127:0*/ __Vtemp5023;
    VlWide<4>/*127:0*/ __Vtemp5025;
    VlWide<4>/*127:0*/ __Vtemp5026;
    VlWide<4>/*127:0*/ __Vtemp5028;
    VlWide<4>/*127:0*/ __Vtemp5034;
    VlWide<4>/*127:0*/ __Vtemp5036;
    VlWide<4>/*127:0*/ __Vtemp5037;
    VlWide<4>/*127:0*/ __Vtemp5039;
    VlWide<4>/*127:0*/ __Vtemp5045;
    VlWide<4>/*127:0*/ __Vtemp5047;
    VlWide<4>/*127:0*/ __Vtemp5048;
    VlWide<4>/*127:0*/ __Vtemp5050;
    VlWide<4>/*127:0*/ __Vtemp5056;
    VlWide<4>/*127:0*/ __Vtemp5058;
    VlWide<4>/*127:0*/ __Vtemp5059;
    VlWide<4>/*127:0*/ __Vtemp5061;
    VlWide<4>/*127:0*/ __Vtemp5067;
    VlWide<4>/*127:0*/ __Vtemp5069;
    VlWide<4>/*127:0*/ __Vtemp5070;
    VlWide<4>/*127:0*/ __Vtemp5072;
    VlWide<4>/*127:0*/ __Vtemp5078;
    VlWide<4>/*127:0*/ __Vtemp5080;
    VlWide<4>/*127:0*/ __Vtemp5081;
    VlWide<4>/*127:0*/ __Vtemp5083;
    VlWide<4>/*127:0*/ __Vtemp5089;
    VlWide<4>/*127:0*/ __Vtemp5091;
    VlWide<4>/*127:0*/ __Vtemp5092;
    VlWide<4>/*127:0*/ __Vtemp5094;
    VlWide<4>/*127:0*/ __Vtemp5100;
    VlWide<4>/*127:0*/ __Vtemp5102;
    VlWide<4>/*127:0*/ __Vtemp5103;
    VlWide<4>/*127:0*/ __Vtemp5105;
    VlWide<4>/*127:0*/ __Vtemp5111;
    VlWide<4>/*127:0*/ __Vtemp5113;
    VlWide<4>/*127:0*/ __Vtemp5114;
    VlWide<4>/*127:0*/ __Vtemp5116;
    VlWide<4>/*127:0*/ __Vtemp5122;
    VlWide<4>/*127:0*/ __Vtemp5124;
    VlWide<4>/*127:0*/ __Vtemp5125;
    VlWide<4>/*127:0*/ __Vtemp5127;
    VlWide<4>/*127:0*/ __Vtemp5133;
    VlWide<4>/*127:0*/ __Vtemp5135;
    VlWide<4>/*127:0*/ __Vtemp5136;
    VlWide<4>/*127:0*/ __Vtemp5138;
    VlWide<4>/*127:0*/ __Vtemp5144;
    VlWide<4>/*127:0*/ __Vtemp5146;
    VlWide<4>/*127:0*/ __Vtemp5147;
    VlWide<4>/*127:0*/ __Vtemp5149;
    VlWide<4>/*127:0*/ __Vtemp5155;
    VlWide<4>/*127:0*/ __Vtemp5157;
    VlWide<4>/*127:0*/ __Vtemp5158;
    VlWide<4>/*127:0*/ __Vtemp5160;
    VlWide<4>/*127:0*/ __Vtemp5166;
    VlWide<4>/*127:0*/ __Vtemp5168;
    VlWide<4>/*127:0*/ __Vtemp5169;
    VlWide<4>/*127:0*/ __Vtemp5171;
    VlWide<4>/*127:0*/ __Vtemp5177;
    VlWide<4>/*127:0*/ __Vtemp5179;
    VlWide<4>/*127:0*/ __Vtemp5180;
    VlWide<4>/*127:0*/ __Vtemp5182;
    VlWide<4>/*127:0*/ __Vtemp5188;
    VlWide<4>/*127:0*/ __Vtemp5190;
    VlWide<4>/*127:0*/ __Vtemp5191;
    VlWide<4>/*127:0*/ __Vtemp5193;
    VlWide<4>/*127:0*/ __Vtemp5199;
    VlWide<4>/*127:0*/ __Vtemp5201;
    VlWide<4>/*127:0*/ __Vtemp5202;
    VlWide<4>/*127:0*/ __Vtemp5204;
    VlWide<4>/*127:0*/ __Vtemp5210;
    VlWide<4>/*127:0*/ __Vtemp5212;
    VlWide<4>/*127:0*/ __Vtemp5213;
    VlWide<4>/*127:0*/ __Vtemp5215;
    VlWide<4>/*127:0*/ __Vtemp5221;
    VlWide<4>/*127:0*/ __Vtemp5223;
    VlWide<4>/*127:0*/ __Vtemp5224;
    VlWide<4>/*127:0*/ __Vtemp5226;
    VlWide<4>/*127:0*/ __Vtemp5232;
    VlWide<4>/*127:0*/ __Vtemp5234;
    VlWide<4>/*127:0*/ __Vtemp5235;
    VlWide<4>/*127:0*/ __Vtemp5237;
    VlWide<4>/*127:0*/ __Vtemp5243;
    VlWide<4>/*127:0*/ __Vtemp5245;
    VlWide<4>/*127:0*/ __Vtemp5246;
    VlWide<4>/*127:0*/ __Vtemp5248;
    VlWide<4>/*127:0*/ __Vtemp5254;
    VlWide<4>/*127:0*/ __Vtemp5256;
    VlWide<4>/*127:0*/ __Vtemp5257;
    VlWide<4>/*127:0*/ __Vtemp5259;
    VlWide<4>/*127:0*/ __Vtemp5265;
    VlWide<4>/*127:0*/ __Vtemp5267;
    VlWide<4>/*127:0*/ __Vtemp5268;
    VlWide<4>/*127:0*/ __Vtemp5270;
    VlWide<4>/*127:0*/ __Vtemp5276;
    VlWide<4>/*127:0*/ __Vtemp5278;
    VlWide<4>/*127:0*/ __Vtemp5279;
    VlWide<4>/*127:0*/ __Vtemp5281;
    VlWide<4>/*127:0*/ __Vtemp5287;
    VlWide<4>/*127:0*/ __Vtemp5289;
    VlWide<4>/*127:0*/ __Vtemp5290;
    VlWide<4>/*127:0*/ __Vtemp5292;
    VlWide<4>/*127:0*/ __Vtemp5298;
    VlWide<4>/*127:0*/ __Vtemp5300;
    VlWide<4>/*127:0*/ __Vtemp5301;
    VlWide<4>/*127:0*/ __Vtemp5303;
    VlWide<4>/*127:0*/ __Vtemp5309;
    VlWide<4>/*127:0*/ __Vtemp5311;
    VlWide<4>/*127:0*/ __Vtemp5312;
    VlWide<4>/*127:0*/ __Vtemp5314;
    VlWide<4>/*127:0*/ __Vtemp5320;
    VlWide<4>/*127:0*/ __Vtemp5322;
    VlWide<4>/*127:0*/ __Vtemp5323;
    VlWide<4>/*127:0*/ __Vtemp5325;
    VlWide<4>/*127:0*/ __Vtemp5331;
    VlWide<4>/*127:0*/ __Vtemp5333;
    VlWide<4>/*127:0*/ __Vtemp5334;
    VlWide<4>/*127:0*/ __Vtemp5336;
    VlWide<4>/*127:0*/ __Vtemp5342;
    VlWide<4>/*127:0*/ __Vtemp5344;
    VlWide<4>/*127:0*/ __Vtemp5345;
    VlWide<4>/*127:0*/ __Vtemp5347;
    // Body
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
                                                    VL_EXTEND_WQ(128,64, __Vtemp4951, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
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
                                                            __Vtemp4951[0U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] 
                                                            = 
                                                            __Vtemp4951[1U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                                                            = 
                                                            __Vtemp4951[2U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                                                            = 
                                                            __Vtemp4951[3U];
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
                        VL_EXTEND_WQ(128,64, __Vtemp4955, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] 
                            = __Vtemp4955[0U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] 
                            = __Vtemp4955[1U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                            = __Vtemp4955[2U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                            = __Vtemp4955[3U];
                    }
                }
            }
        } else if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store) {
            if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1)))) {
                if ((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2)))) {
                    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3) {
                        VL_EXTEND_WQ(128,64, __Vtemp4956, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[0U] 
                            = __Vtemp4956[0U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[1U] 
                            = __Vtemp4956[1U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[2U] 
                            = __Vtemp4956[2U];
                        vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata[3U] 
                            = __Vtemp4956[3U];
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
                                                    VL_EXTEND_WQ(128,64, __Vtemp4959, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
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
                                                            __Vtemp4959[0U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] 
                                                            = 
                                                            __Vtemp4959[1U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                                            = 
                                                            __Vtemp4959[2U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                                            = 
                                                            __Vtemp4959[3U];
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
                                VL_EXTEND_WQ(128,64, __Vtemp4963, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] 
                                    = __Vtemp4963[0U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] 
                                    = __Vtemp4963[1U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                    = __Vtemp4963[2U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                    = __Vtemp4963[3U];
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
                                VL_EXTEND_WQ(128,64, __Vtemp4964, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[0U] 
                                    = __Vtemp4964[0U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[1U] 
                                    = __Vtemp4964[1U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[2U] 
                                    = __Vtemp4964[2U];
                                vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata[3U] 
                                    = __Vtemp4964[3U];
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
                                                    VL_EXTEND_WQ(128,64, __Vtemp4967, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
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
                                                            __Vtemp4967[0U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] 
                                                            = 
                                                            __Vtemp4967[1U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                                            = 
                                                            __Vtemp4967[2U];
                                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                                            = 
                                                            __Vtemp4967[3U];
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
                                        VL_EXTEND_WQ(128,64, __Vtemp4971, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] 
                                            = __Vtemp4971[0U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] 
                                            = __Vtemp4971[1U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                            = __Vtemp4971[2U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                            = __Vtemp4971[3U];
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
                                        VL_EXTEND_WQ(128,64, __Vtemp4972, vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata);
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[0U] 
                                            = __Vtemp4972[0U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[1U] 
                                            = __Vtemp4972[1U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[2U] 
                                            = __Vtemp4972[2U];
                                        vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata[3U] 
                                            = __Vtemp4972[3U];
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_AXI_rdata 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata;
    if ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_AXI_rdata 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rdata;
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata_next 
        = ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rdata
            : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ok 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
            ? ((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE)) 
               | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_trap))
            : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                ? (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rvalid) 
                      & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rid))) 
                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rlast)) 
                    & ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rresp)) 
                       | (1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rresp)))) 
                   & ((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE)) 
                      | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_trap)))
                : ((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                   & ((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE)) 
                      | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_trap)))));
    VL_EXTEND_WQ(128,64, __Vtemp4974, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1);
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U] 
            = __Vtemp4974[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U] 
            = __Vtemp4974[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U] 
            = __Vtemp4974[2U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U] 
            = __Vtemp4974[3U];
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
    if ((1U & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out)) 
               | (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out = 0ULL;
    } else if ((0x10U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        if ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out = 0ULL;
                } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out = 0ULL;
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
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
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_remainder_out 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_remainder_out)));
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out 
                                                                   >> 0x1fU))))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out)));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out)));
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
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
                        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1) 
                           - (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2));
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle)));
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1) 
                           + (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2));
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = (((QData)((IData)((- (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle)));
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                    = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1), 
                                     (0x1fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle)));
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                    = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1) 
                       >> (0x1fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle)));
            }
        } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                    = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1) 
                       << (0x1fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (((QData)((IData)((- (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle)));
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_remainder_out;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_remainder_out;
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out;
        }
    } else if ((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out;
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_hi;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_hi;
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_hi;
            }
        } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_lo;
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                        < vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)
                        ? 1ULL : 0ULL);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (VL_LTS_IQQ(1,64,64, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)
                    ? 1ULL : 0ULL);
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                   & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
        }
    } else if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                       | vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
            } else {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                    = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                       ^ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
            }
        } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                   - vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                   + vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
        }
    } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = VL_SHIFTRS_QQI(64,64,6, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1, 
                                 (0x3fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
                = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
                   >> (0x3fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
        }
    } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out 
            = (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1 
               << (0x3fU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle = 0U;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out = 0ULL;
    }
    VL_EXTEND_WQ(66,64, __Vtemp4984, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
    VL_EXTEND_WQ(66,64, __Vtemp4985, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
            = __Vtemp4984[0U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
            = __Vtemp4984[1U];
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
            = __Vtemp4984[2U];
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp4985[0U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                      ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)
                                      : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp4985[1U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                      ? (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                 >> 0x20U))
                                      : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
            = ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                ? __Vtemp4985[2U] : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed))
                                      ? (3U & (- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                                     >> 0x3fU))))))
                                      : 0U));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid_next 
        = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
            ? ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? ((((2U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                     & (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) 
                    & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint))
                    ? 1U : 0U) : 0U) : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_arready 
        = (1U & ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                  ? (((2U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                      & (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) 
                     & ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)
                         ? (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                         : (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate))))
                  : ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                      ? (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate))
                      : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))))));
    vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid_next 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
            ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid)
            : ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                    ? 0U : (((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
                             & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)))
                             ? 1U : 0U)) : ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                             ? 0U : 
                                            ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                              ? 1U : 0U))));
    if ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))) {
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
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr;
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize_next 
            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize;
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
                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_araddr
                    : (((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
                        & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)))
                        ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr
                        : vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_araddr))
                : ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_araddr
                    : ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                        ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr
                        : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arsize_next 
            = ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                    ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                        ? 2U : 3U) : (((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
                                       & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)))
                                       ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize)
                                       : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                           ? 2U : 3U)))
                : ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                    ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                        ? 2U : 3U) : ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                       ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize)
                                       : 0U)));
    }
    Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__get_need_difftest_TOP(
                                                                                ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
                                                                                & (~ 
                                                                                ((0U 
                                                                                != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out)) 
                                                                                & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ok))))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out = 1U;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE = 0U;
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
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE = 2U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((0U == (7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0xcU)))) {
                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE = 3U;
                                }
                            }
                        }
                    } else if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                        if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                             >> 5U)))) {
            if ((0x10U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                if ((8U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                    if ((1U & (~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                  >> 2U)))) {
                        if ((2U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                            if ((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)) {
                                if ((1U == (7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                  >> 0xcU)))) {
                                    if ((0U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 0x1aU))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out 
                                            = ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                   >> 0x19U)) 
                                               & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out));
                                    }
                                } else if ((5U == (7U 
                                                   & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                      >> 0xcU)))) {
                                    if ((0U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 0x1aU))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out 
                                            = ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                   >> 0x19U)) 
                                               & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out));
                                    } else if ((0x10U 
                                                == 
                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0x1aU))) {
                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out 
                                            = ((~ (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                   >> 0x19U)) 
                                               & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out));
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
                            if ((0x20U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                           >> 7U))) {
                                vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE = 4U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
          & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap))) 
         & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict)))) {
        if ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out 
                = ((~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE) 
                       >> 1U)) & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE)) 
                                  & (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ok) 
                                      & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out))) 
                                     & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out)))));
        } else if ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out 
                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ok;
        } else if ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out 
                = vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ok;
        }
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out 
            = ((~ ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                     & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                    & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap))) 
                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict))) 
               & (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                   & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                  & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap))));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__misa_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__misa;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mscratch_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mscratch;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcycle_next 
        = (1ULL + vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcycle);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__minstret_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__minstret;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtval_next 
        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtval;
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
                            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next = 0x8000000000000007ULL;
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
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out;
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next = 6ULL;
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                            = (0xfffffffffffffff7ULL 
                               & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtval_next 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out;
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                            = ((0xffffffffffffff7fULL 
                                & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next) 
                               | ((QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                              >> 3U))))) 
                                  << 7U));
                    } else {
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out;
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next = 4ULL;
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                            = (0xfffffffffffffff7ULL 
                               & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtval_next 
                            = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out;
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
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next = 2ULL;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                        = (0xfffffffffffffff7ULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtval_next 
                        = (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_inst_out));
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                        = ((0xffffffffffffff7fULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next) 
                           | ((QData)((IData)((1U & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                             >> 3U))))) 
                              << 7U));
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next = 3ULL;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                        = (0xfffffffffffffff7ULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
                    Vysyx_041461_TOP___024root____Vdpiimwrap_ysyx_041461_TOP__DOT__core__DOT__WB__DOT__ebreak_TOP();
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
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out;
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next = 0xbULL;
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
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next = 0ULL;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                    = (0xfffffffffffffff7ULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtval_next 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out;
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                    = ((0xffffffffffffff7fULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next) 
                       | ((QData)((IData)((1U & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                         >> 3U))))) 
                          << 7U));
            }
            if ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ok) 
                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ok)) 
                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ok))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__minstret_next 
                    = (1ULL + vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__minstret);
            }
        } else if ((((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)) 
                     | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                    | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)))) {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__minstret_next 
                = (1ULL + vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__minstret);
            if (((((((((0x300U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out)) 
                       | (0x301U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) 
                      | (0x304U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) 
                     | (0x305U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) 
                    | (0x340U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) 
                   | (0x341U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) 
                  | (0x342U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) 
                 | (0x344U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out)))) {
                if ((0x300U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c;
                } else if ((0x301U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__misa_next 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c;
                } else if ((0x304U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c;
                } else if ((0x305U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec_next 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c;
                } else if ((0x340U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mscratch_next 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c;
                } else if ((0x341U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c;
                } else if ((0x342U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c;
                } else {
                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip_next 
                        = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c;
                }
            } else if ((0xb00U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcycle_next 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c;
            } else if ((0xb02U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__minstret_next 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c;
            } else if ((0x343U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out))) {
                vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtval_next 
                    = vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c;
            }
        } else {
            vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__minstret_next 
                = (1ULL + vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__minstret);
        }
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip_next 
        = ((QData)((IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime 
                            >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp))) 
           << 7U);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next 
        = (0xffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next 
        = (0xffffffffffffff80ULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
        = (0x1fffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
        = (0xfffffffffffff8ffULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
        = (0xffffffffffffff8fULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
        = (0xfffffffffffffff8ULL & vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next 
        = (0x1800ULL | vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next);
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ready 
        = (1U & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out)) 
                 | (~ ((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out)) 
                       & (((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ok)) 
                           | (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ok))) 
                          | (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ok)))))));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ready 
        = (1U & ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
                  ? (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                        & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                       & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap))) 
                      & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict)))
                      ? ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)) 
                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ready))
                      : ((~ ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                               & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                              & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap))) 
                             & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict))) 
                         & ((~ (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                 & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                                & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap)))) 
                            | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ready))))
                  : ((8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ready))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_c[0U] 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp4995, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 1U);
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
                    ? (~ __Vtemp4995[0U]) : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp4995[1U]) : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp4995[2U]) : 0U));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U]
                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                    ? (~ __Vtemp4995[3U]) : 0U));
    }
    VL_SHIFTL_WWI(128,128,32, __Vtemp5001, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5003, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5004, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5006, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][0U] 
            = (~ __Vtemp5001[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][1U] 
            = (~ __Vtemp5001[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][2U] 
            = (~ __Vtemp5001[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][3U] 
            = (~ __Vtemp5001[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5003[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5004[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5006[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5003[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5004[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5006[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5003[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5004[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5006[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[1U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5003[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5004[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5006[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__2__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5012, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5014, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5015, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5017, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][0U] 
            = (~ __Vtemp5012[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][1U] 
            = (~ __Vtemp5012[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][2U] 
            = (~ __Vtemp5012[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][3U] 
            = (~ __Vtemp5012[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5014[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5015[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5017[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5014[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5015[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5017[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5014[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5015[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5017[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[2U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5014[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5015[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5017[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__4__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5023, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5025, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5026, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5028, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][0U] 
            = (~ __Vtemp5023[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][1U] 
            = (~ __Vtemp5023[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][2U] 
            = (~ __Vtemp5023[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][3U] 
            = (~ __Vtemp5023[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5025[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5026[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5028[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5025[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5026[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5028[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5025[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5026[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5028[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[3U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5025[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5026[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5028[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__6__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5034, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5036, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5037, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5039, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][0U] 
            = (~ __Vtemp5034[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][1U] 
            = (~ __Vtemp5034[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][2U] 
            = (~ __Vtemp5034[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][3U] 
            = (~ __Vtemp5034[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5036[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5037[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5039[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5036[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5037[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5039[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5036[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5037[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5039[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[4U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5036[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5037[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5039[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__8__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5045, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5047, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5048, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5050, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][0U] 
            = (~ __Vtemp5045[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][1U] 
            = (~ __Vtemp5045[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][2U] 
            = (~ __Vtemp5045[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][3U] 
            = (~ __Vtemp5045[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5047[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5048[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5050[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5047[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5048[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5050[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5047[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5048[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5050[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[5U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5047[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5048[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5050[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__10__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5056, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5058, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5059, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5061, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][0U] 
            = (~ __Vtemp5056[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][1U] 
            = (~ __Vtemp5056[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][2U] 
            = (~ __Vtemp5056[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][3U] 
            = (~ __Vtemp5056[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5058[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5059[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5061[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5058[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5059[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5061[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5058[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5059[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5061[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[6U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5058[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5059[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5061[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__12__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5067, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5069, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5070, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5072, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][0U] 
            = (~ __Vtemp5067[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][1U] 
            = (~ __Vtemp5067[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][2U] 
            = (~ __Vtemp5067[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][3U] 
            = (~ __Vtemp5067[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5069[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5070[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5072[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5069[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5070[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5072[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5069[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5070[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5072[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[7U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5069[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5070[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5072[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__14__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5078, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5080, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5081, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5083, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][0U] 
            = (~ __Vtemp5078[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][1U] 
            = (~ __Vtemp5078[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][2U] 
            = (~ __Vtemp5078[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][3U] 
            = (~ __Vtemp5078[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5080[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5081[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5083[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5080[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5081[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5083[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5080[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5081[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5083[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[8U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5080[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5081[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5083[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__16__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5089, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5091, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5092, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5094, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][0U] 
            = (~ __Vtemp5089[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][1U] 
            = (~ __Vtemp5089[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][2U] 
            = (~ __Vtemp5089[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][3U] 
            = (~ __Vtemp5089[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5091[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5092[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5094[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5091[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5092[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5094[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5091[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5092[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5094[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[9U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5091[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5092[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5094[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__18__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5100, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5102, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5103, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5105, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][0U] 
            = (~ __Vtemp5100[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][1U] 
            = (~ __Vtemp5100[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][2U] 
            = (~ __Vtemp5100[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][3U] 
            = (~ __Vtemp5100[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5102[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5103[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5105[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5102[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5103[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5105[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5102[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5103[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5105[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xaU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5102[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5103[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5105[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__20__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5111, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5113, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5114, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5116, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][0U] 
            = (~ __Vtemp5111[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][1U] 
            = (~ __Vtemp5111[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][2U] 
            = (~ __Vtemp5111[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][3U] 
            = (~ __Vtemp5111[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5113[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5114[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5116[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5113[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5114[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5116[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5113[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5114[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5116[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xbU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5113[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5114[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5116[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__22__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5122, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5124, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5125, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5127, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][0U] 
            = (~ __Vtemp5122[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][1U] 
            = (~ __Vtemp5122[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][2U] 
            = (~ __Vtemp5122[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][3U] 
            = (~ __Vtemp5122[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5124[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5125[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5127[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5124[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5125[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5127[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5124[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5125[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5127[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xcU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5124[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5125[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5127[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__24__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5133, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5135, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5136, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5138, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][0U] 
            = (~ __Vtemp5133[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][1U] 
            = (~ __Vtemp5133[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][2U] 
            = (~ __Vtemp5133[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][3U] 
            = (~ __Vtemp5133[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5135[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5136[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5138[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5135[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5136[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5138[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5135[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5136[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5138[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xdU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5135[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5136[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5138[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__26__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5144, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5146, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5147, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5149, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][0U] 
            = (~ __Vtemp5144[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][1U] 
            = (~ __Vtemp5144[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][2U] 
            = (~ __Vtemp5144[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][3U] 
            = (~ __Vtemp5144[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5146[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5147[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5149[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5146[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5147[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5149[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5146[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5147[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5149[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xeU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5146[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5147[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5149[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__28__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5155, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5157, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5158, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5160, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][0U] 
            = (~ __Vtemp5155[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][1U] 
            = (~ __Vtemp5155[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][2U] 
            = (~ __Vtemp5155[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][3U] 
            = (~ __Vtemp5155[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5157[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5158[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5160[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5157[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5158[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5160[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5157[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5158[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5160[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0xfU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5157[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5158[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5160[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__30__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5166, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5168, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5169, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5171, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][0U] 
            = (~ __Vtemp5166[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][1U] 
            = (~ __Vtemp5166[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][2U] 
            = (~ __Vtemp5166[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][3U] 
            = (~ __Vtemp5166[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5168[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5169[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5171[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5168[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5169[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5171[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5168[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5169[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5171[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x10U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5168[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5169[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5171[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__32__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5177, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5179, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5180, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5182, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][0U] 
            = (~ __Vtemp5177[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][1U] 
            = (~ __Vtemp5177[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][2U] 
            = (~ __Vtemp5177[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][3U] 
            = (~ __Vtemp5177[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5179[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5180[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5182[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5179[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5180[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5182[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5179[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5180[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5182[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x11U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5179[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5180[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5182[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__34__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5188, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5190, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5191, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5193, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][0U] 
            = (~ __Vtemp5188[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][1U] 
            = (~ __Vtemp5188[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][2U] 
            = (~ __Vtemp5188[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][3U] 
            = (~ __Vtemp5188[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5190[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5191[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5193[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5190[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5191[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5193[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5190[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5191[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5193[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x12U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5190[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5191[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5193[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__36__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5199, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5201, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5202, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5204, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][0U] 
            = (~ __Vtemp5199[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][1U] 
            = (~ __Vtemp5199[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][2U] 
            = (~ __Vtemp5199[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][3U] 
            = (~ __Vtemp5199[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5201[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5202[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5204[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5201[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5202[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5204[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5201[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5202[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5204[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x13U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5201[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5202[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5204[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__38__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5210, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5212, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5213, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5215, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][0U] 
            = (~ __Vtemp5210[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][1U] 
            = (~ __Vtemp5210[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][2U] 
            = (~ __Vtemp5210[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][3U] 
            = (~ __Vtemp5210[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5212[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5213[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5215[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5212[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5213[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5215[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5212[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5213[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5215[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x14U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5212[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5213[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5215[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__40__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5221, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5223, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5224, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5226, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][0U] 
            = (~ __Vtemp5221[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][1U] 
            = (~ __Vtemp5221[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][2U] 
            = (~ __Vtemp5221[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][3U] 
            = (~ __Vtemp5221[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5223[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5224[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5226[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5223[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5224[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5226[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5223[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5224[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5226[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x15U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5223[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5224[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5226[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__42__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5232, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5234, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5235, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5237, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][0U] 
            = (~ __Vtemp5232[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][1U] 
            = (~ __Vtemp5232[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][2U] 
            = (~ __Vtemp5232[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][3U] 
            = (~ __Vtemp5232[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5234[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5235[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5237[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5234[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5235[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5237[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5234[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5235[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5237[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x16U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5234[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5235[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5237[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__44__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5243, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5245, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5246, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5248, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][0U] 
            = (~ __Vtemp5243[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][1U] 
            = (~ __Vtemp5243[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][2U] 
            = (~ __Vtemp5243[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][3U] 
            = (~ __Vtemp5243[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5245[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5246[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5248[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5245[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5246[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5248[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5245[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5246[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5248[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x17U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5245[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5246[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5248[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__46__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5254, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5256, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5257, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5259, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][0U] 
            = (~ __Vtemp5254[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][1U] 
            = (~ __Vtemp5254[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][2U] 
            = (~ __Vtemp5254[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][3U] 
            = (~ __Vtemp5254[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5256[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5257[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5259[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5256[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5257[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5259[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5256[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5257[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5259[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x18U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5256[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5257[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5259[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__48__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5265, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5267, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5268, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5270, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][0U] 
            = (~ __Vtemp5265[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][1U] 
            = (~ __Vtemp5265[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][2U] 
            = (~ __Vtemp5265[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][3U] 
            = (~ __Vtemp5265[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5267[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5268[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5270[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5267[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5268[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5270[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5267[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5268[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5270[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x19U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5267[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5268[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5270[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__50__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5276, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5278, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5279, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5281, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][0U] 
            = (~ __Vtemp5276[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][1U] 
            = (~ __Vtemp5276[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][2U] 
            = (~ __Vtemp5276[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][3U] 
            = (~ __Vtemp5276[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5278[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5279[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5281[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5278[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5279[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5281[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5278[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5279[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5281[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1aU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5278[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5279[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5281[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__52__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5287, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5289, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5290, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5292, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][0U] 
            = (~ __Vtemp5287[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][1U] 
            = (~ __Vtemp5287[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][2U] 
            = (~ __Vtemp5287[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][3U] 
            = (~ __Vtemp5287[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5289[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5290[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5292[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5289[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5290[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5292[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5289[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5290[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5292[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1bU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5289[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5290[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5292[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__54__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5298, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5300, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5301, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5303, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][0U] 
            = (~ __Vtemp5298[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][1U] 
            = (~ __Vtemp5298[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][2U] 
            = (~ __Vtemp5298[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][3U] 
            = (~ __Vtemp5298[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5300[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5301[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5303[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5300[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5301[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5303[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5300[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5301[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5303[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1cU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5300[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5301[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5303[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__56__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5309, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5311, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5312, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5314, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][0U] 
            = (~ __Vtemp5309[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][1U] 
            = (~ __Vtemp5309[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][2U] 
            = (~ __Vtemp5309[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][3U] 
            = (~ __Vtemp5309[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5311[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5312[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5314[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5311[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5312[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5314[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5311[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5312[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5314[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1dU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5311[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5312[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5314[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__58__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5320, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5322, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5323, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5325, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][0U] 
            = (~ __Vtemp5320[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][1U] 
            = (~ __Vtemp5320[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][2U] 
            = (~ __Vtemp5320[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][3U] 
            = (~ __Vtemp5320[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5322[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5323[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5325[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5322[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5323[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5325[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5322[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5323[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5325[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1eU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5322[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5323[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5325[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__60__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5331, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5333, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5334, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5336, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][0U] 
            = (~ __Vtemp5331[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][1U] 
            = (~ __Vtemp5331[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][2U] 
            = (~ __Vtemp5331[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][3U] 
            = (~ __Vtemp5331[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5333[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5334[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5336[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5333[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5334[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5336[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5333[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5334[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5336[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x1fU][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5333[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5334[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5336[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__62__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)));
    VL_SHIFTL_WWI(128,128,32, __Vtemp5342, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5344, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5345, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp5347, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
    if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative) {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][0U] 
            = (~ __Vtemp5342[0U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][1U] 
            = (~ __Vtemp5342[1U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][2U] 
            = (~ __Vtemp5342[2U]);
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][3U] 
            = (~ __Vtemp5342[3U]);
    } else {
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][0U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5344[0U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5345[0U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5347[0U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][1U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5344[1U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5345[1U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5347[1U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][2U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5344[2U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5345[2U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5347[2U]
                                          : 0U)));
        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core_p[0x20U][3U] 
            = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                ? __Vtemp5344[3U] : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                      ? (~ __Vtemp5345[3U])
                                      : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                          ? __Vtemp5347[3U]
                                          : 0U)));
    }
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__64__KET____DOT__Booth_core__Booth_core_c 
        = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative) 
           | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)) 
              & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ready 
        = (1U & ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state))
                  ? (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                        & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                       & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap))) 
                      & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict)))
                      ? (((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__multiplication)) 
                          & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__division))) 
                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ready))
                      : ((~ ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                               & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                              & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap))) 
                             & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict))) 
                         & ((~ (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                 & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap)))) 
                            | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ready))))
                  : ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state)) 
                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ready))));
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
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_ready 
        = (1U & (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                    & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                   & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap))) 
                  & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict)))
                  ? ((4U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))
                      ? ((~ ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE) 
                             >> 1U)) & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE)) 
                                        & ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ok) 
                                             & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ready)) 
                                            & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out))) 
                                           & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out)))))
                      : ((2U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))
                          ? ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))
                              ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ready) 
                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ok))
                              : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ready) 
                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ok)))
                          : ((1U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))
                              ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ready) 
                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ok))
                              : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ready))))
                  : ((~ ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                          & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap))) 
                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict))) 
                     & ((~ (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                             & (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out))) 
                            & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap)))) 
                        | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ready)))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2_ready 
        = (1U & ((~ ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_valid_out) 
                       & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_trap_out))) 
                      & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) 
                     & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF2_trap)))) 
                 | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_ready)));
}

void Vysyx_041461_TOP___024root___settle__TOP__22(Vysyx_041461_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041461_TOP___024root___settle__TOP__22\n"); );
    // Body
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6[0U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout6;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4[0U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout4;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2[0U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout2;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[1U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[1U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[1U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[1U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[1U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[2U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[2U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[2U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[2U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[2U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[3U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[3U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[3U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[3U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[3U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[4U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[4U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[4U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[4U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[4U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[5U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[5U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[5U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[5U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[5U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[6U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[6U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[6U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[6U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[6U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[7U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[7U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[7U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[7U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[7U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[8U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[8U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[8U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[8U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[8U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__8__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[9U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[9U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[9U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[9U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[9U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__9__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0xaU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0xaU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0xaU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0xaU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0xaU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__10__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0xbU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0xbU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0xbU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0xbU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0xbU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__11__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0xcU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0xcU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0xcU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0xcU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0xcU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__12__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0xdU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0xdU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0xdU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0xdU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0xdU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__13__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0xeU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0xeU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0xeU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0xeU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0xeU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__14__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0xfU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0xfU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0xfU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0xfU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0xfU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__15__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x10U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x10U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x10U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x10U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x10U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__16__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x11U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x11U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x11U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x11U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x11U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__17__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x12U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x12U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x12U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x12U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x12U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__18__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x13U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x13U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x13U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x13U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x13U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__19__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x14U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x14U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x14U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x14U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x14U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__20__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x15U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x15U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x15U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x15U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x15U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__21__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x16U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x16U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x16U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x16U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x16U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__22__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x17U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x17U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x17U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x17U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x17U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__23__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x18U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x18U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x18U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x18U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x18U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__24__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x19U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x19U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x19U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x19U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x19U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__25__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x1aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x1aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x1aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x1aU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x1aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__26__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x1bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x1bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x1bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x1bU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x1bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__27__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x1cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x1cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x1cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x1cU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x1cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__28__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x1dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x1dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x1dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x1dU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x1dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__29__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x1eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x1eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x1eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x1eU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x1eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__30__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x1fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x1fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x1fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x1fU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x1fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__31__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x20U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x20U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x20U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x20U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x20U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__32__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x21U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x21U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x21U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x21U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x21U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__33__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x22U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x22U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x22U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x22U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x22U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__34__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x23U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x23U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x23U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x23U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x23U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__35__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x24U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x24U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x24U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x24U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x24U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__36__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x25U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x25U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x25U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x25U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x25U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__37__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x26U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x26U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x26U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x26U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x26U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__38__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x27U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x27U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x27U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x27U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x27U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__39__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x28U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x28U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x28U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x28U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x28U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__40__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x29U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x29U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x29U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x29U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x29U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__41__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x2aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x2aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x2aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x2aU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x2aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__42__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x2bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x2bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x2bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x2bU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x2bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__43__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x2cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x2cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x2cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x2cU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x2cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__44__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x2dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x2dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x2dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x2dU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x2dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__45__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x2eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x2eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x2eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x2eU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x2eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__46__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x2fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x2fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x2fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x2fU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x2fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__47__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x30U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x30U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x30U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x30U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x30U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__48__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x31U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x31U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x31U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x31U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x31U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__49__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x32U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x32U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x32U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x32U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x32U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__50__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x33U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x33U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x33U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x33U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x33U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__51__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x34U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x34U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x34U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x34U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x34U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__52__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x35U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x35U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x35U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x35U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x35U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__53__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x36U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x36U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x36U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x36U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x36U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__54__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x37U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x37U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x37U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x37U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x37U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__55__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x38U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x38U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x38U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x38U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x38U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__56__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x39U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x39U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x39U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x39U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x39U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__57__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x3aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x3aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x3aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x3aU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x3aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__58__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x3bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x3bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x3bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x3bU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x3bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__59__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x3cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x3cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x3cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x3cU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x3cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__60__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x3dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x3dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x3dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x3dU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x3dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__61__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x3eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x3eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x3eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x3eU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x3eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__62__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x3fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x3fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x3fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x3fU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x3fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__63__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x40U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x40U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x40U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x40U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x40U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__64__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x41U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x41U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x41U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x41U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x41U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__65__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x42U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x42U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x42U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x42U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x42U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__66__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x43U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x43U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x43U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x43U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x43U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__67__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x44U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x44U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x44U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x44U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x44U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__68__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x45U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x45U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x45U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x45U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x45U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__69__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x46U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x46U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x46U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x46U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x46U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__70__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x47U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x47U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x47U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x47U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x47U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__71__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x48U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x48U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x48U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x48U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x48U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__72__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x49U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x49U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x49U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x49U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x49U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__73__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x4aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x4aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x4aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x4aU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x4aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__74__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x4bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x4bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x4bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x4bU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x4bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__75__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x4cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x4cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x4cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x4cU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x4cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__76__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x4dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x4dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x4dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x4dU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x4dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__77__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x4eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x4eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x4eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x4eU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x4eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__78__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x4fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x4fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x4fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x4fU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x4fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__79__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x50U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x50U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x50U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x50U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x50U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__80__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x51U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x51U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x51U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x51U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x51U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__81__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x52U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x52U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x52U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x52U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x52U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__82__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x53U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x53U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x53U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x53U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x53U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__83__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x54U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x54U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x54U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x54U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x54U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__84__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x55U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x55U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x55U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x55U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x55U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__85__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x56U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x56U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x56U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x56U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x56U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__86__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x57U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x57U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x57U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x57U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x57U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__87__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x58U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x58U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x58U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x58U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x58U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__88__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x59U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x59U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x59U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x59U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x59U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__89__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x5aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x5aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x5aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x5aU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x5aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__90__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x5bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x5bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x5bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x5bU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x5bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__91__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x5cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x5cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x5cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x5cU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x5cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__92__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x5dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x5dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x5dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x5dU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x5dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__93__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x5eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x5eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x5eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x5eU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x5eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__94__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x5fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x5fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x5fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x5fU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x5fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__95__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x60U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x60U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x60U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x60U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x60U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__96__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x61U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x61U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x61U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x61U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x61U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__97__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x62U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x62U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x62U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x62U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x62U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__98__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x63U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x63U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x63U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x63U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x63U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__99__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x64U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x64U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x64U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x64U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x64U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__100__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x65U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x65U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x65U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x65U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x65U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__101__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x66U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x66U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x66U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x66U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x66U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__102__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x67U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x67U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x67U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x67U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x67U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__103__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x68U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x68U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x68U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x68U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x68U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__104__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x69U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x69U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x69U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x69U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x69U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__105__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x6aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x6aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x6aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x6aU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x6aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__106__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x6bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x6bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x6bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x6bU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x6bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__107__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x6cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x6cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x6cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x6cU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x6cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__108__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x6dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x6dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x6dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x6dU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x6dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__109__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x6eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x6eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x6eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x6eU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x6eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__110__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x6fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x6fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x6fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x6fU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x6fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__111__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x70U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x70U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x70U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x70U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x70U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__112__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x71U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x71U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x71U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x71U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x71U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__113__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x72U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x72U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x72U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x72U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x72U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__114__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x73U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x73U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x73U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x73U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x73U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__115__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x74U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x74U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x74U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x74U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x74U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__116__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x75U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x75U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x75U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x75U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x75U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__117__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x76U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x76U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x76U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x76U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x76U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__118__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x77U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x77U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x77U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x77U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x77U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__119__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x78U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x78U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x78U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x78U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x78U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__120__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x79U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x79U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x79U] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x79U] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x79U] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__121__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x7aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x7aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x7aU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x7aU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x7aU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__122__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x7bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x7bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x7bU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x7bU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x7bU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__123__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x7cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x7cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x7cU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x7cU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x7cU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__124__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x7dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x7dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x7dU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x7dU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x7dU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__125__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x7eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x7eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x7eU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x7eU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x7eU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__126__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5[0x7fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.Walloc_33bits_cout5;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3[0x7fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.Walloc_33bits_cout3;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1[0x7fU] 
        = vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.Walloc_33bits_cout1;
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_sout[0x7fU] 
        = (1U & VL_REDXOR_32((7U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src8))));
    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout[0x7fU] 
        = (1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src8) 
                   & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src8) 
                      >> 1U)) | (6U == (6U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src8)))) 
                 | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src8) 
                    & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__127__KET____DOT__Walloc.__PVT__src8) 
                       >> 2U))));
}
