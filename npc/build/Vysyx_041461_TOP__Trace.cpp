// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_041461_TOP__Syms.h"


void Vysyx_041461_TOP___024root__traceChgSub0(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceChgSub1(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceChgSub2(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceChgSub3(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceChgSub4(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceChgSub5(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceChgSub6(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceChgSub7(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceChgSub8(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceChgSub9(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceChgSub10(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceChgSub11(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceChgSub12(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceChgSub13(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);
void Vysyx_041461_TOP___024root__traceChgSub14(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_041461_TOP___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_041461_TOP___024root* const __restrict vlSelf = static_cast<Vysyx_041461_TOP___024root*>(voidSelf);
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_041461_TOP___024root__traceChgSub0((&vlSymsp->TOP), tracep);
        Vysyx_041461_TOP___024root__traceChgSub1((&vlSymsp->TOP), tracep);
        Vysyx_041461_TOP___024root__traceChgSub2((&vlSymsp->TOP), tracep);
        Vysyx_041461_TOP___024root__traceChgSub3((&vlSymsp->TOP), tracep);
        Vysyx_041461_TOP___024root__traceChgSub4((&vlSymsp->TOP), tracep);
        Vysyx_041461_TOP___024root__traceChgSub5((&vlSymsp->TOP), tracep);
        Vysyx_041461_TOP___024root__traceChgSub6((&vlSymsp->TOP), tracep);
        Vysyx_041461_TOP___024root__traceChgSub7((&vlSymsp->TOP), tracep);
        Vysyx_041461_TOP___024root__traceChgSub8((&vlSymsp->TOP), tracep);
        Vysyx_041461_TOP___024root__traceChgSub9((&vlSymsp->TOP), tracep);
        Vysyx_041461_TOP___024root__traceChgSub10((&vlSymsp->TOP), tracep);
        Vysyx_041461_TOP___024root__traceChgSub11((&vlSymsp->TOP), tracep);
        Vysyx_041461_TOP___024root__traceChgSub12((&vlSymsp->TOP), tracep);
        Vysyx_041461_TOP___024root__traceChgSub13((&vlSymsp->TOP), tracep);
        Vysyx_041461_TOP___024root__traceChgSub14((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_041461_TOP___024root__traceChgSub0(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp5759;
    VlWide<4>/*127:0*/ __Vtemp5764;
    VlWide<4>/*127:0*/ __Vtemp5765;
    VlWide<4>/*127:0*/ __Vtemp5766;
    VlWide<4>/*127:0*/ __Vtemp5768;
    VlWide<4>/*127:0*/ __Vtemp5769;
    VlWide<4>/*127:0*/ __Vtemp5771;
    VlWide<4>/*127:0*/ __Vtemp5776;
    VlWide<4>/*127:0*/ __Vtemp5777;
    VlWide<4>/*127:0*/ __Vtemp5778;
    VlWide<4>/*127:0*/ __Vtemp5780;
    VlWide<4>/*127:0*/ __Vtemp5781;
    VlWide<4>/*127:0*/ __Vtemp5783;
    VlWide<4>/*127:0*/ __Vtemp5788;
    VlWide<4>/*127:0*/ __Vtemp5789;
    VlWide<4>/*127:0*/ __Vtemp5790;
    VlWide<4>/*127:0*/ __Vtemp5792;
    VlWide<4>/*127:0*/ __Vtemp5793;
    VlWide<4>/*127:0*/ __Vtemp5795;
    VlWide<4>/*127:0*/ __Vtemp5800;
    VlWide<4>/*127:0*/ __Vtemp5801;
    VlWide<4>/*127:0*/ __Vtemp5802;
    VlWide<4>/*127:0*/ __Vtemp5804;
    VlWide<4>/*127:0*/ __Vtemp5805;
    VlWide<4>/*127:0*/ __Vtemp5807;
    VlWide<4>/*127:0*/ __Vtemp5812;
    VlWide<4>/*127:0*/ __Vtemp5813;
    VlWide<4>/*127:0*/ __Vtemp5814;
    VlWide<4>/*127:0*/ __Vtemp5816;
    VlWide<4>/*127:0*/ __Vtemp5817;
    VlWide<4>/*127:0*/ __Vtemp5819;
    VlWide<4>/*127:0*/ __Vtemp5824;
    VlWide<4>/*127:0*/ __Vtemp5825;
    VlWide<4>/*127:0*/ __Vtemp5826;
    VlWide<4>/*127:0*/ __Vtemp5828;
    VlWide<4>/*127:0*/ __Vtemp5829;
    VlWide<4>/*127:0*/ __Vtemp5831;
    VlWide<4>/*127:0*/ __Vtemp5836;
    VlWide<4>/*127:0*/ __Vtemp5837;
    VlWide<4>/*127:0*/ __Vtemp5838;
    VlWide<4>/*127:0*/ __Vtemp5840;
    VlWide<4>/*127:0*/ __Vtemp5841;
    VlWide<4>/*127:0*/ __Vtemp5843;
    VlWide<4>/*127:0*/ __Vtemp5848;
    VlWide<4>/*127:0*/ __Vtemp5849;
    VlWide<4>/*127:0*/ __Vtemp5850;
    VlWide<4>/*127:0*/ __Vtemp5852;
    VlWide<4>/*127:0*/ __Vtemp5853;
    VlWide<4>/*127:0*/ __Vtemp5855;
    VlWide<4>/*127:0*/ __Vtemp5860;
    VlWide<4>/*127:0*/ __Vtemp5861;
    VlWide<4>/*127:0*/ __Vtemp5862;
    VlWide<4>/*127:0*/ __Vtemp5864;
    VlWide<4>/*127:0*/ __Vtemp5865;
    VlWide<4>/*127:0*/ __Vtemp5867;
    VlWide<4>/*127:0*/ __Vtemp5872;
    VlWide<4>/*127:0*/ __Vtemp5873;
    VlWide<4>/*127:0*/ __Vtemp5874;
    VlWide<4>/*127:0*/ __Vtemp5876;
    VlWide<4>/*127:0*/ __Vtemp5877;
    VlWide<4>/*127:0*/ __Vtemp5879;
    VlWide<4>/*127:0*/ __Vtemp5884;
    VlWide<4>/*127:0*/ __Vtemp5885;
    VlWide<4>/*127:0*/ __Vtemp5886;
    VlWide<4>/*127:0*/ __Vtemp5888;
    VlWide<4>/*127:0*/ __Vtemp5889;
    VlWide<4>/*127:0*/ __Vtemp5891;
    VlWide<4>/*127:0*/ __Vtemp5896;
    VlWide<4>/*127:0*/ __Vtemp5897;
    VlWide<4>/*127:0*/ __Vtemp5898;
    VlWide<4>/*127:0*/ __Vtemp5900;
    VlWide<4>/*127:0*/ __Vtemp5901;
    VlWide<4>/*127:0*/ __Vtemp5903;
    VlWide<4>/*127:0*/ __Vtemp5908;
    VlWide<4>/*127:0*/ __Vtemp5909;
    VlWide<4>/*127:0*/ __Vtemp5910;
    VlWide<4>/*127:0*/ __Vtemp5912;
    VlWide<4>/*127:0*/ __Vtemp5913;
    VlWide<4>/*127:0*/ __Vtemp5915;
    VlWide<4>/*127:0*/ __Vtemp5920;
    VlWide<4>/*127:0*/ __Vtemp5921;
    VlWide<4>/*127:0*/ __Vtemp5922;
    VlWide<4>/*127:0*/ __Vtemp5924;
    VlWide<4>/*127:0*/ __Vtemp5925;
    VlWide<4>/*127:0*/ __Vtemp5927;
    VlWide<4>/*127:0*/ __Vtemp5932;
    VlWide<4>/*127:0*/ __Vtemp5933;
    VlWide<4>/*127:0*/ __Vtemp5934;
    VlWide<4>/*127:0*/ __Vtemp5936;
    VlWide<4>/*127:0*/ __Vtemp5937;
    VlWide<4>/*127:0*/ __Vtemp5939;
    VlWide<4>/*127:0*/ __Vtemp5944;
    VlWide<4>/*127:0*/ __Vtemp5945;
    VlWide<4>/*127:0*/ __Vtemp5946;
    VlWide<4>/*127:0*/ __Vtemp5948;
    VlWide<4>/*127:0*/ __Vtemp5949;
    VlWide<4>/*127:0*/ __Vtemp5951;
    VlWide<4>/*127:0*/ __Vtemp5956;
    VlWide<4>/*127:0*/ __Vtemp5957;
    VlWide<4>/*127:0*/ __Vtemp5958;
    VlWide<4>/*127:0*/ __Vtemp5960;
    VlWide<4>/*127:0*/ __Vtemp5961;
    VlWide<4>/*127:0*/ __Vtemp5963;
    VlWide<4>/*127:0*/ __Vtemp5968;
    VlWide<4>/*127:0*/ __Vtemp5969;
    VlWide<4>/*127:0*/ __Vtemp5970;
    VlWide<4>/*127:0*/ __Vtemp5972;
    VlWide<4>/*127:0*/ __Vtemp5973;
    VlWide<4>/*127:0*/ __Vtemp5975;
    VlWide<4>/*127:0*/ __Vtemp5980;
    VlWide<4>/*127:0*/ __Vtemp5981;
    VlWide<4>/*127:0*/ __Vtemp5982;
    VlWide<4>/*127:0*/ __Vtemp5984;
    VlWide<4>/*127:0*/ __Vtemp5985;
    VlWide<4>/*127:0*/ __Vtemp5987;
    VlWide<4>/*127:0*/ __Vtemp5992;
    VlWide<4>/*127:0*/ __Vtemp5993;
    VlWide<4>/*127:0*/ __Vtemp5994;
    VlWide<4>/*127:0*/ __Vtemp5996;
    VlWide<4>/*127:0*/ __Vtemp5997;
    VlWide<4>/*127:0*/ __Vtemp5999;
    VlWide<4>/*127:0*/ __Vtemp6004;
    VlWide<4>/*127:0*/ __Vtemp6005;
    VlWide<4>/*127:0*/ __Vtemp6006;
    VlWide<4>/*127:0*/ __Vtemp6008;
    VlWide<4>/*127:0*/ __Vtemp6009;
    VlWide<4>/*127:0*/ __Vtemp6011;
    VlWide<4>/*127:0*/ __Vtemp6016;
    VlWide<4>/*127:0*/ __Vtemp6017;
    VlWide<4>/*127:0*/ __Vtemp6018;
    VlWide<4>/*127:0*/ __Vtemp6020;
    VlWide<4>/*127:0*/ __Vtemp6021;
    VlWide<4>/*127:0*/ __Vtemp6023;
    VlWide<4>/*127:0*/ __Vtemp6028;
    VlWide<4>/*127:0*/ __Vtemp6029;
    VlWide<4>/*127:0*/ __Vtemp6030;
    VlWide<4>/*127:0*/ __Vtemp6032;
    VlWide<4>/*127:0*/ __Vtemp6033;
    VlWide<4>/*127:0*/ __Vtemp6035;
    VlWide<4>/*127:0*/ __Vtemp6040;
    VlWide<4>/*127:0*/ __Vtemp6041;
    VlWide<4>/*127:0*/ __Vtemp6042;
    VlWide<4>/*127:0*/ __Vtemp6044;
    VlWide<4>/*127:0*/ __Vtemp6045;
    VlWide<4>/*127:0*/ __Vtemp6047;
    VlWide<4>/*127:0*/ __Vtemp6052;
    VlWide<4>/*127:0*/ __Vtemp6053;
    VlWide<4>/*127:0*/ __Vtemp6054;
    VlWide<4>/*127:0*/ __Vtemp6056;
    VlWide<4>/*127:0*/ __Vtemp6057;
    VlWide<4>/*127:0*/ __Vtemp6059;
    VlWide<4>/*127:0*/ __Vtemp6064;
    VlWide<4>/*127:0*/ __Vtemp6065;
    VlWide<4>/*127:0*/ __Vtemp6066;
    VlWide<4>/*127:0*/ __Vtemp6068;
    VlWide<4>/*127:0*/ __Vtemp6069;
    VlWide<4>/*127:0*/ __Vtemp6071;
    VlWide<4>/*127:0*/ __Vtemp6076;
    VlWide<4>/*127:0*/ __Vtemp6077;
    VlWide<4>/*127:0*/ __Vtemp6078;
    VlWide<4>/*127:0*/ __Vtemp6080;
    VlWide<4>/*127:0*/ __Vtemp6081;
    VlWide<4>/*127:0*/ __Vtemp6083;
    VlWide<4>/*127:0*/ __Vtemp6088;
    VlWide<4>/*127:0*/ __Vtemp6089;
    VlWide<4>/*127:0*/ __Vtemp6090;
    VlWide<4>/*127:0*/ __Vtemp6092;
    VlWide<4>/*127:0*/ __Vtemp6093;
    VlWide<4>/*127:0*/ __Vtemp6095;
    VlWide<4>/*127:0*/ __Vtemp6100;
    VlWide<4>/*127:0*/ __Vtemp6101;
    VlWide<4>/*127:0*/ __Vtemp6102;
    VlWide<4>/*127:0*/ __Vtemp6104;
    VlWide<4>/*127:0*/ __Vtemp6105;
    VlWide<4>/*127:0*/ __Vtemp6107;
    VlWide<4>/*127:0*/ __Vtemp6112;
    VlWide<4>/*127:0*/ __Vtemp6113;
    VlWide<4>/*127:0*/ __Vtemp6114;
    VlWide<4>/*127:0*/ __Vtemp6116;
    VlWide<4>/*127:0*/ __Vtemp6117;
    VlWide<4>/*127:0*/ __Vtemp6119;
    VlWide<4>/*127:0*/ __Vtemp6124;
    VlWide<4>/*127:0*/ __Vtemp6125;
    VlWide<4>/*127:0*/ __Vtemp6126;
    VlWide<4>/*127:0*/ __Vtemp6128;
    VlWide<4>/*127:0*/ __Vtemp6129;
    VlWide<4>/*127:0*/ __Vtemp6131;
    VlWide<4>/*127:0*/ __Vtemp6136;
    VlWide<4>/*127:0*/ __Vtemp6137;
    VlWide<4>/*127:0*/ __Vtemp6138;
    VlWide<4>/*127:0*/ __Vtemp6140;
    VlWide<4>/*127:0*/ __Vtemp6141;
    VlWide<4>/*127:0*/ __Vtemp6143;
    VlWide<4>/*127:0*/ __Vtemp6148;
    VlWide<3>/*95:0*/ __Vtemp6149;
    VlWide<3>/*95:0*/ __Vtemp6150;
    VlWide<3>/*95:0*/ __Vtemp6153;
    VlWide<3>/*95:0*/ __Vtemp6154;
    VlWide<4>/*127:0*/ __Vtemp6155;
    VlWide<4>/*127:0*/ __Vtemp6156;
    VlWide<4>/*127:0*/ __Vtemp6157;
    VlWide<4>/*127:0*/ __Vtemp6158;
    VlWide<4>/*127:0*/ __Vtemp6159;
    VlWide<4>/*127:0*/ __Vtemp6160;
    VlWide<4>/*127:0*/ __Vtemp6161;
    VlWide<4>/*127:0*/ __Vtemp6162;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bresp),2);
            tracep->chgCData(oldp+1,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bresp),2);
            tracep->chgCData(oldp+2,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rresp),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+3,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awid),4);
            tracep->chgIData(oldp+4,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr),32);
            tracep->chgCData(oldp+5,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awlen),8);
            tracep->chgCData(oldp+6,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awsize),3);
            tracep->chgCData(oldp+7,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awburst),2);
            tracep->chgCData(oldp+8,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid),4);
            tracep->chgIData(oldp+9,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr),32);
            tracep->chgCData(oldp+10,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arlen),8);
            tracep->chgCData(oldp+11,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arsize),3);
            tracep->chgCData(oldp+12,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arburst),2);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [5U]))) {
            tracep->chgCData(oldp+13,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                        ? 1U : (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awid))),4);
            tracep->chgCData(oldp+14,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                        ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awlen))),8);
            tracep->chgCData(oldp+15,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                        ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awburst))),2);
            tracep->chgCData(oldp+16,(((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
                                        ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arlen)
                                        : 0U)),8);
            tracep->chgCData(oldp+17,(((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
                                        ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arburst)
                                        : 0U)),2);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgWData(oldp+18,(vlSelf->ysyx_041461_TOP__DOT__Q0),128);
            tracep->chgWData(oldp+22,(vlSelf->ysyx_041461_TOP__DOT__Q1),128);
            tracep->chgWData(oldp+26,(vlSelf->ysyx_041461_TOP__DOT__Q2),128);
            tracep->chgWData(oldp+30,(vlSelf->ysyx_041461_TOP__DOT__Q3),128);
            tracep->chgWData(oldp+34,(vlSelf->ysyx_041461_TOP__DOT__Q4),128);
            tracep->chgWData(oldp+38,(vlSelf->ysyx_041461_TOP__DOT__Q5),128);
            tracep->chgWData(oldp+42,(vlSelf->ysyx_041461_TOP__DOT__Q6),128);
            tracep->chgWData(oldp+46,(vlSelf->ysyx_041461_TOP__DOT__Q7),128);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+50,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate))
                                      ? ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wclint)) 
                                         & (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))
                                      : ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
                                         & (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))))));
            tracep->chgIData(oldp+51,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr),32);
            tracep->chgCData(oldp+52,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize),3);
            tracep->chgBit(oldp+53,(((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid))));
            tracep->chgQData(oldp+54,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata),64);
            tracep->chgCData(oldp+56,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb),8);
            tracep->chgBit(oldp+57,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wlast));
            tracep->chgBit(oldp+58,((7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+59,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                      ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                          ? (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                          : (((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
                                              & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)))
                                              ? (2U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
                                              : (2U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))))
                                      : ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                          ? (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                          : ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                             & (2U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))))));
            tracep->chgCData(oldp+60,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                        ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                            ? 0U : 
                                           (((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
                                             & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)))
                                             ? 1U : 0U))
                                        : ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                            ? 0U : 
                                           ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                             ? 1U : 0U)))),4);
            tracep->chgIData(oldp+61,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                        ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_araddr
                                            : (((2U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
                                                & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)))
                                                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr
                                                : vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_araddr))
                                        : ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                            ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_araddr
                                            : ((2U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                                ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr
                                                : 0U)))),32);
            tracep->chgCData(oldp+62,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                        ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                            ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                                ? 2U
                                                : 3U)
                                            : (((2U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
                                                & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)))
                                                ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize)
                                                : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                                    ? 2U
                                                    : 3U)))
                                        : ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                            ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                                ? 2U
                                                : 3U)
                                            : ((2U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                                ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize)
                                                : 0U)))),3);
            tracep->chgBit(oldp+63,(((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                     & ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                         : ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                            & (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))))));
            tracep->chgCData(oldp+64,((0x3fU & (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                        >> 3U)))),6);
            tracep->chgBit(oldp+65,(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen));
            tracep->chgWData(oldp+66,(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask),128);
            tracep->chgWData(oldp+70,(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata),128);
            tracep->chgBit(oldp+74,(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen));
            tracep->chgWData(oldp+75,(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask),128);
            tracep->chgWData(oldp+79,(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata),128);
            tracep->chgBit(oldp+83,(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen));
            tracep->chgWData(oldp+84,(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask),128);
            tracep->chgWData(oldp+88,(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata),128);
            tracep->chgBit(oldp+92,(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen));
            tracep->chgWData(oldp+93,(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask),128);
            tracep->chgWData(oldp+97,(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata),128);
            tracep->chgCData(oldp+101,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))),6);
            tracep->chgBit(oldp+102,(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen));
            tracep->chgWData(oldp+103,(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask),128);
            tracep->chgWData(oldp+107,(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata),128);
            tracep->chgBit(oldp+111,(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen));
            tracep->chgWData(oldp+112,(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask),128);
            tracep->chgWData(oldp+116,(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata),128);
            tracep->chgBit(oldp+120,(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen));
            tracep->chgWData(oldp+121,(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask),128);
            tracep->chgWData(oldp+125,(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata),128);
            tracep->chgBit(oldp+129,(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen));
            tracep->chgWData(oldp+130,(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask),128);
            tracep->chgWData(oldp+134,(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata),128);
            tracep->chgBit(oldp+138,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_trap));
            tracep->chgBit(oldp+139,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF2_trap));
            tracep->chgBit(oldp+140,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap));
            tracep->chgBit(oldp+141,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict));
            tracep->chgBit(oldp+142,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap));
            tracep->chgBit(oldp+143,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict));
            tracep->chgBit(oldp+144,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap));
            tracep->chgQData(oldp+145,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc),64);
            tracep->chgCData(oldp+147,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out),4);
            tracep->chgBit(oldp+148,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit1));
            tracep->chgBit(oldp+149,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit2));
            tracep->chgBit(oldp+150,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit3));
            tracep->chgBit(oldp+151,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit4));
            tracep->chgBit(oldp+152,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit5));
            tracep->chgBit(oldp+153,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit6));
            tracep->chgBit(oldp+154,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit7));
            tracep->chgBit(oldp+155,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_hit8));
            tracep->chgBit(oldp+156,((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))));
            tracep->chgIData(oldp+157,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_araddr),32);
            tracep->chgCData(oldp+158,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                         ? 2U : 3U)),3);
            tracep->chgBit(oldp+159,((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))));
            tracep->chgQData(oldp+160,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_pc_out),64);
            tracep->chgQData(oldp+162,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_AXI_rdata_out),64);
            tracep->chgBit(oldp+164,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit1_out));
            tracep->chgBit(oldp+165,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit2_out));
            tracep->chgBit(oldp+166,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit3_out));
            tracep->chgBit(oldp+167,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit4_out));
            tracep->chgBit(oldp+168,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit5_out));
            tracep->chgBit(oldp+169,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit6_out));
            tracep->chgBit(oldp+170,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit7_out));
            tracep->chgBit(oldp+171,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit8_out));
            tracep->chgBit(oldp+172,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_valid_out));
            tracep->chgCData(oldp+173,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_trap_out),4);
            tracep->chgIData(oldp+174,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2_inst),32);
            tracep->chgBit(oldp+175,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out));
            tracep->chgCData(oldp+176,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out),4);
            tracep->chgIData(oldp+177,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out),32);
            tracep->chgQData(oldp+178,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out),64);
            tracep->chgCData(oldp+180,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+181,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+182,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0x14U))),5);
            tracep->chgSData(oldp+183,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+184,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm),64);
            tracep->chgQData(oldp+186,((QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                           >> 0xfU))))),64);
            tracep->chgQData(oldp+188,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc),64);
            tracep->chgBit(oldp+190,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl));
            tracep->chgCData(oldp+191,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl),5);
            tracep->chgCData(oldp+192,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src),3);
            tracep->chgCData(oldp+193,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_MEM_ctrl),4);
            tracep->chgCData(oldp+194,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl),4);
            tracep->chgBit(oldp+195,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out));
            tracep->chgCData(oldp+196,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out),4);
            tracep->chgCData(oldp+197,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rd_out),5);
            tracep->chgCData(oldp+198,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out),5);
            tracep->chgCData(oldp+199,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out),5);
            tracep->chgSData(oldp+200,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out),12);
            tracep->chgQData(oldp+201,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_imm_out),64);
            tracep->chgQData(oldp+203,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_zimm_out),64);
            tracep->chgQData(oldp+205,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_pc_out),64);
            tracep->chgCData(oldp+207,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out),5);
            tracep->chgCData(oldp+208,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out),3);
            tracep->chgCData(oldp+209,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_MEM_ctrl_out),4);
            tracep->chgCData(oldp+210,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out),4);
            tracep->chgIData(oldp+211,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_inst_out),32);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out),64);
            tracep->chgBit(oldp+214,((1U & ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state))
                                             ? (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                                  & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap))) 
                                                 & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict)))
                                                 ? 
                                                ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__multiplication)) 
                                                 & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__division)))
                                                 : 
                                                ((~ 
                                                  ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                                    & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap))) 
                                                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict))) 
                                                 & (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                                     & (0U 
                                                        != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                                    & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap)))))
                                             : ((3U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state)) 
                                                & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap)))))));
            tracep->chgBit(oldp+215,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ok));
            tracep->chgBit(oldp+216,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out));
            tracep->chgCData(oldp+217,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out),4);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out),64);
            tracep->chgCData(oldp+220,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out),5);
            tracep->chgCData(oldp+221,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs1_out),5);
            tracep->chgCData(oldp+222,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out),5);
            tracep->chgSData(oldp+223,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_csr_out),12);
            tracep->chgQData(oldp+224,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_imm_out),64);
            tracep->chgQData(oldp+226,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_zimm_out),64);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_pc_out),64);
            tracep->chgCData(oldp+230,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out),4);
            tracep->chgCData(oldp+231,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out),4);
            tracep->chgIData(oldp+232,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_inst_out),32);
            tracep->chgBit(oldp+233,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
                                       ? (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                             & (0U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                                            & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap))) 
                                           & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict)))
                                           ? (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                           : ((~ ((
                                                   ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                                                   & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap))) 
                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict))) 
                                              & (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                                  & (0U 
                                                     != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                                                 & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap)))))
                                       : ((8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
                                          & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap))))));
            tracep->chgQData(oldp+234,(((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                         ? 0ULL : (
                                                   (4U 
                                                    & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                                      ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata
                                                      : (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata)))
                                                      : (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata))))
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata 
                                                                                >> 0xfU)))))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata 
                                                                                >> 7U)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata)))))
                                                      : 0ULL))))),64);
            tracep->chgCData(oldp+236,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out),4);
            tracep->chgBit(oldp+237,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ok));
            tracep->chgBit(oldp+238,((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+239,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid));
            tracep->chgBit(oldp+240,((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgIData(oldp+241,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr),32);
            tracep->chgCData(oldp+242,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize),3);
            tracep->chgBit(oldp+243,((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+244,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out));
            tracep->chgCData(oldp+245,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out),4);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out),64);
            tracep->chgQData(oldp+248,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_MEM_out),64);
            tracep->chgCData(oldp+250,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out),5);
            tracep->chgCData(oldp+251,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out),5);
            tracep->chgSData(oldp+252,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out),12);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_imm_out),64);
            tracep->chgQData(oldp+255,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out),64);
            tracep->chgQData(oldp+257,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out),64);
            tracep->chgCData(oldp+259,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out),4);
            tracep->chgIData(oldp+260,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_inst_out),32);
            tracep->chgQData(oldp+261,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec),64);
            tracep->chgQData(oldp+263,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc),64);
            tracep->chgQData(oldp+265,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_CAUSE),63);
            tracep->chgCData(oldp+267,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl),2);
            tracep->chgQData(oldp+268,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus),64);
            tracep->chgQData(oldp+270,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie),64);
            tracep->chgQData(oldp+272,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip),64);
            tracep->chgQData(oldp+274,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data),64);
            tracep->chgQData(oldp+276,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data),64);
            tracep->chgQData(oldp+278,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data),64);
            tracep->chgQData(oldp+280,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
                                       [vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out]),64);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_csr_data),64);
            tracep->chgQData(oldp+284,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data),64);
            tracep->chgBit(oldp+286,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime 
                                      >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp)));
            tracep->chgBit(oldp+287,((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))));
            tracep->chgBit(oldp+288,((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))));
            tracep->chgBit(oldp+289,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bvalid));
            tracep->chgCData(oldp+290,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bid),4);
            tracep->chgBit(oldp+291,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rvalid));
            tracep->chgCData(oldp+292,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rid),4);
            tracep->chgQData(oldp+293,(((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? (((0x200bff8U 
                                              <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                             & (0x200bfffU 
                                                >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))
                                             ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime
                                             : (((0x2004000U 
                                                  <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                                 & (0x2004007U 
                                                    >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))
                                                 ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp
                                                 : 0ULL))
                                         : 0ULL)),64);
            tracep->chgBit(oldp+295,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rlast));
            tracep->chgCData(oldp+296,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bresp),2);
            tracep->chgBit(oldp+297,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate))
                                       ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wclint) 
                                          & (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))
                                       : ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
                                          & (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))))));
            tracep->chgBit(oldp+298,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_wvalid));
            tracep->chgBit(oldp+299,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                      & ((((2U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                                           & (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) 
                                          & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)) 
                                         & (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))))));
            tracep->chgCData(oldp+300,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? ((((2U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                                              & (2U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) 
                                             & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint))
                                             ? 1U : 0U)
                                         : 0U)),4);
            tracep->chgIData(oldp+301,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? ((((2U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                                              & (2U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) 
                                             & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint))
                                             ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr
                                             : 0U) : 0U)),32);
            tracep->chgCData(oldp+302,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? ((((2U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                                              & (2U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) 
                                             & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint))
                                             ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize)
                                             : 0U) : 0U)),3);
            tracep->chgBit(oldp+303,(((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                      & ((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                         & (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))))));
            tracep->chgBit(oldp+304,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached) 
                                      & (8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
            tracep->chgBit(oldp+305,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_skip_difftets_out));
            tracep->chgCData(oldp+306,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state),3);
            tracep->chgQData(oldp+307,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata),64);
            tracep->chgBit(oldp+309,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit));
            tracep->chgCData(oldp+310,((7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc))),3);
            tracep->chgIData(oldp+311,((0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                             >> 9U)))),23);
            tracep->chgBit(oldp+312,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached));
            tracep->chgCData(oldp+313,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line),3);
            tracep->chgBit(oldp+314,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie 
                                                    >> 7U)))));
            tracep->chgBit(oldp+315,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip 
                                                    >> 7U)))));
            tracep->chgBit(oldp+316,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgIData(oldp+317,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__r),32);
            tracep->chgIData(oldp+318,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__k),32);
            tracep->chgBit(oldp+319,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__state));
            tracep->chgWData(oldp+320,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata),128);
            tracep->chgWData(oldp+324,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata_next),128);
            tracep->chgWData(oldp+328,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata),128);
            tracep->chgWData(oldp+332,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata_next),128);
            tracep->chgWData(oldp+336,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata),128);
            tracep->chgWData(oldp+340,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata_next),128);
            tracep->chgWData(oldp+344,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata),128);
            tracep->chgWData(oldp+348,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata_next),128);
            tracep->chgCData(oldp+352,((0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)),7);
            tracep->chgCData(oldp+353,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+354,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x1aU)),6);
            tracep->chgCData(oldp+355,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+356,((0x3fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0x14U))),6);
            tracep->chgBit(oldp+357,((3U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+358,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID__DOT__valid_csr));
            tracep->chgCData(oldp+359,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state),2);
            tracep->chgIData(oldp+360,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle),32);
            tracep->chgQData(oldp+361,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1),64);
            tracep->chgQData(oldp+363,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2),64);
            tracep->chgBit(oldp+365,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__multiplication));
            tracep->chgBit(oldp+366,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__division));
            tracep->chgBit(oldp+367,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state)) 
                                      & (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                           & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap))) 
                                          & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict))) 
                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__multiplication)))));
            tracep->chgCData(oldp+368,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed),2);
            tracep->chgBit(oldp+369,((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__state))));
            tracep->chgQData(oldp+370,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_hi),64);
            tracep->chgQData(oldp+372,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_lo),64);
            tracep->chgBit(oldp+374,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_valid_in));
            tracep->chgBit(oldp+375,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed));
            tracep->chgBit(oldp+376,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_divw));
            tracep->chgBit(oldp+377,((((0x21U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__state)) 
                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divw_buffer)) 
                                      | (0x41U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__state)))));
            tracep->chgQData(oldp+378,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_positive)
                                         ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_out
                                         : (1ULL + 
                                            (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_out)))),64);
            tracep->chgQData(oldp+380,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_positive)
                                         ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_out
                                         : (1ULL + 
                                            (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_out)))),64);
            tracep->chgQData(oldp+382,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out),64);
            tracep->chgQData(oldp+384,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_remainder_out),64);
            tracep->chgWData(oldp+386,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand),128);
            tracep->chgWData(oldp+390,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier),66);
            tracep->chgQData(oldp+393,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c),33);
            tracep->chgWData(oldp+395,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src1),128);
            tracep->chgWData(oldp+399,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src2),128);
            tracep->chgIData(oldp+403,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__r),32);
            tracep->chgCData(oldp+404,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__state),3);
            tracep->chgCData(oldp+405,((6U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              << 1U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5759, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 1U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative) {
                __Vtemp5764[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U]);
                __Vtemp5764[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U]);
                __Vtemp5764[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U]);
                __Vtemp5764[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U]);
            } else {
                __Vtemp5764[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                                        ? (~ __Vtemp5759[0U])
                                        : 0U));
                __Vtemp5764[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                                        ? (~ __Vtemp5759[1U])
                                        : 0U));
                __Vtemp5764[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                                        ? (~ __Vtemp5759[2U])
                                        : 0U));
                __Vtemp5764[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                                        ? (~ __Vtemp5759[3U])
                                        : 0U));
            }
            tracep->chgWData(oldp+406,(__Vtemp5764),128);
            tracep->chgBit(oldp+410,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative) 
                                      | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)) 
                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)))));
            tracep->chgBit(oldp+411,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+412,((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U])));
            tracep->chgBit(oldp+413,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative));
            tracep->chgBit(oldp+414,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative));
            tracep->chgBit(oldp+415,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive));
            tracep->chgCData(oldp+416,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 1U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5765, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
            tracep->chgWData(oldp+417,(__Vtemp5765),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5766, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5768, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5769, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5771, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5776[0U] = (~ __Vtemp5766[0U]);
                __Vtemp5776[1U] = (~ __Vtemp5766[1U]);
                __Vtemp5776[2U] = (~ __Vtemp5766[2U]);
                __Vtemp5776[3U] = (~ __Vtemp5766[3U]);
            } else {
                __Vtemp5776[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5768[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5769[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5771[0U]
                                            : 0U)));
                __Vtemp5776[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5768[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5769[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5771[1U]
                                            : 0U)));
                __Vtemp5776[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5768[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5769[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5771[2U]
                                            : 0U)));
                __Vtemp5776[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5768[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5769[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5771[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+421,(__Vtemp5776),128);
            tracep->chgBit(oldp+425,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__2__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+426,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+427,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+428,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+429,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+430,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+431,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+432,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 3U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5777, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
            tracep->chgWData(oldp+433,(__Vtemp5777),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5778, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5780, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5781, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5783, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5788[0U] = (~ __Vtemp5778[0U]);
                __Vtemp5788[1U] = (~ __Vtemp5778[1U]);
                __Vtemp5788[2U] = (~ __Vtemp5778[2U]);
                __Vtemp5788[3U] = (~ __Vtemp5778[3U]);
            } else {
                __Vtemp5788[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5780[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5781[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5783[0U]
                                            : 0U)));
                __Vtemp5788[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5780[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5781[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5783[1U]
                                            : 0U)));
                __Vtemp5788[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5780[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5781[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5783[2U]
                                            : 0U)));
                __Vtemp5788[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5780[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5781[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5783[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+437,(__Vtemp5788),128);
            tracep->chgBit(oldp+441,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__4__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+442,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+443,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+444,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+445,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+446,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+447,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+448,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 5U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5789, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
            tracep->chgWData(oldp+449,(__Vtemp5789),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5790, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5792, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5793, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5795, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5800[0U] = (~ __Vtemp5790[0U]);
                __Vtemp5800[1U] = (~ __Vtemp5790[1U]);
                __Vtemp5800[2U] = (~ __Vtemp5790[2U]);
                __Vtemp5800[3U] = (~ __Vtemp5790[3U]);
            } else {
                __Vtemp5800[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5792[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5793[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5795[0U]
                                            : 0U)));
                __Vtemp5800[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5792[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5793[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5795[1U]
                                            : 0U)));
                __Vtemp5800[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5792[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5793[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5795[2U]
                                            : 0U)));
                __Vtemp5800[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5792[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5793[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5795[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+453,(__Vtemp5800),128);
            tracep->chgBit(oldp+457,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__6__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+458,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+459,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+460,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+461,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+462,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+463,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+464,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 7U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5801, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
            tracep->chgWData(oldp+465,(__Vtemp5801),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5802, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5804, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5805, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5807, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5812[0U] = (~ __Vtemp5802[0U]);
                __Vtemp5812[1U] = (~ __Vtemp5802[1U]);
                __Vtemp5812[2U] = (~ __Vtemp5802[2U]);
                __Vtemp5812[3U] = (~ __Vtemp5802[3U]);
            } else {
                __Vtemp5812[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5804[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5805[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5807[0U]
                                            : 0U)));
                __Vtemp5812[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5804[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5805[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5807[1U]
                                            : 0U)));
                __Vtemp5812[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5804[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5805[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5807[2U]
                                            : 0U)));
                __Vtemp5812[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5804[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5805[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5807[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+469,(__Vtemp5812),128);
            tracep->chgBit(oldp+473,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__8__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+474,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 9U))));
            tracep->chgBit(oldp+475,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+476,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+477,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+478,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+479,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+480,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 9U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5813, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
            tracep->chgWData(oldp+481,(__Vtemp5813),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5814, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5816, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5817, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5819, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5824[0U] = (~ __Vtemp5814[0U]);
                __Vtemp5824[1U] = (~ __Vtemp5814[1U]);
                __Vtemp5824[2U] = (~ __Vtemp5814[2U]);
                __Vtemp5824[3U] = (~ __Vtemp5814[3U]);
            } else {
                __Vtemp5824[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5816[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5817[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5819[0U]
                                            : 0U)));
                __Vtemp5824[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5816[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5817[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5819[1U]
                                            : 0U)));
                __Vtemp5824[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5816[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5817[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5819[2U]
                                            : 0U)));
                __Vtemp5824[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5816[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5817[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5819[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+485,(__Vtemp5824),128);
            tracep->chgBit(oldp+489,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__10__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+490,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+491,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+492,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+493,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+494,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+495,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+496,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0xbU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5825, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
            tracep->chgWData(oldp+497,(__Vtemp5825),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5826, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5828, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5829, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5831, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5836[0U] = (~ __Vtemp5826[0U]);
                __Vtemp5836[1U] = (~ __Vtemp5826[1U]);
                __Vtemp5836[2U] = (~ __Vtemp5826[2U]);
                __Vtemp5836[3U] = (~ __Vtemp5826[3U]);
            } else {
                __Vtemp5836[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5828[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5829[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5831[0U]
                                            : 0U)));
                __Vtemp5836[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5828[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5829[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5831[1U]
                                            : 0U)));
                __Vtemp5836[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5828[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5829[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5831[2U]
                                            : 0U)));
                __Vtemp5836[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5828[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5829[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5831[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+501,(__Vtemp5836),128);
            tracep->chgBit(oldp+505,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__12__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+506,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+507,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+508,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+509,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+510,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+511,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+512,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0xdU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5837, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
            tracep->chgWData(oldp+513,(__Vtemp5837),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5838, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5840, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5841, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5843, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5848[0U] = (~ __Vtemp5838[0U]);
                __Vtemp5848[1U] = (~ __Vtemp5838[1U]);
                __Vtemp5848[2U] = (~ __Vtemp5838[2U]);
                __Vtemp5848[3U] = (~ __Vtemp5838[3U]);
            } else {
                __Vtemp5848[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5840[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5841[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5843[0U]
                                            : 0U)));
                __Vtemp5848[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5840[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5841[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5843[1U]
                                            : 0U)));
                __Vtemp5848[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5840[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5841[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5843[2U]
                                            : 0U)));
                __Vtemp5848[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5840[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5841[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5843[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+517,(__Vtemp5848),128);
            tracep->chgBit(oldp+521,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__14__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+522,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+523,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+524,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+525,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+526,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+527,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+528,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0xfU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5849, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
            tracep->chgWData(oldp+529,(__Vtemp5849),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5850, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5852, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5853, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5855, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5860[0U] = (~ __Vtemp5850[0U]);
                __Vtemp5860[1U] = (~ __Vtemp5850[1U]);
                __Vtemp5860[2U] = (~ __Vtemp5850[2U]);
                __Vtemp5860[3U] = (~ __Vtemp5850[3U]);
            } else {
                __Vtemp5860[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5852[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5853[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5855[0U]
                                            : 0U)));
                __Vtemp5860[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5852[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5853[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5855[1U]
                                            : 0U)));
                __Vtemp5860[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5852[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5853[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5855[2U]
                                            : 0U)));
                __Vtemp5860[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5852[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5853[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5855[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+533,(__Vtemp5860),128);
            tracep->chgBit(oldp+537,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__16__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+538,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+539,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+540,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+541,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+542,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+543,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+544,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x11U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5861, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
            tracep->chgWData(oldp+545,(__Vtemp5861),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5862, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5864, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5865, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5867, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5872[0U] = (~ __Vtemp5862[0U]);
                __Vtemp5872[1U] = (~ __Vtemp5862[1U]);
                __Vtemp5872[2U] = (~ __Vtemp5862[2U]);
                __Vtemp5872[3U] = (~ __Vtemp5862[3U]);
            } else {
                __Vtemp5872[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5864[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5865[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5867[0U]
                                            : 0U)));
                __Vtemp5872[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5864[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5865[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5867[1U]
                                            : 0U)));
                __Vtemp5872[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5864[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5865[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5867[2U]
                                            : 0U)));
                __Vtemp5872[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5864[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5865[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5867[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+549,(__Vtemp5872),128);
            tracep->chgBit(oldp+553,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__18__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+554,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+555,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+556,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+557,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+558,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+559,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+560,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x13U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5873, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
            tracep->chgWData(oldp+561,(__Vtemp5873),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5874, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5876, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5877, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5879, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5884[0U] = (~ __Vtemp5874[0U]);
                __Vtemp5884[1U] = (~ __Vtemp5874[1U]);
                __Vtemp5884[2U] = (~ __Vtemp5874[2U]);
                __Vtemp5884[3U] = (~ __Vtemp5874[3U]);
            } else {
                __Vtemp5884[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5876[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5877[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5879[0U]
                                            : 0U)));
                __Vtemp5884[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5876[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5877[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5879[1U]
                                            : 0U)));
                __Vtemp5884[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5876[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5877[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5879[2U]
                                            : 0U)));
                __Vtemp5884[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5876[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5877[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5879[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+565,(__Vtemp5884),128);
            tracep->chgBit(oldp+569,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__20__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+570,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+571,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+572,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+573,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+574,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+575,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+576,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x15U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5885, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
            tracep->chgWData(oldp+577,(__Vtemp5885),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5886, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5888, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5889, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5891, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5896[0U] = (~ __Vtemp5886[0U]);
                __Vtemp5896[1U] = (~ __Vtemp5886[1U]);
                __Vtemp5896[2U] = (~ __Vtemp5886[2U]);
                __Vtemp5896[3U] = (~ __Vtemp5886[3U]);
            } else {
                __Vtemp5896[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5888[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5889[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5891[0U]
                                            : 0U)));
                __Vtemp5896[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5888[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5889[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5891[1U]
                                            : 0U)));
                __Vtemp5896[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5888[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5889[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5891[2U]
                                            : 0U)));
                __Vtemp5896[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5888[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5889[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5891[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+581,(__Vtemp5896),128);
            tracep->chgBit(oldp+585,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__22__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+586,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+587,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+588,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+589,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+590,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+591,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+592,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x17U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5897, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
            tracep->chgWData(oldp+593,(__Vtemp5897),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5898, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5900, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5901, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5903, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5908[0U] = (~ __Vtemp5898[0U]);
                __Vtemp5908[1U] = (~ __Vtemp5898[1U]);
                __Vtemp5908[2U] = (~ __Vtemp5898[2U]);
                __Vtemp5908[3U] = (~ __Vtemp5898[3U]);
            } else {
                __Vtemp5908[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5900[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5901[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5903[0U]
                                            : 0U)));
                __Vtemp5908[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5900[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5901[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5903[1U]
                                            : 0U)));
                __Vtemp5908[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5900[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5901[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5903[2U]
                                            : 0U)));
                __Vtemp5908[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5900[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5901[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5903[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+597,(__Vtemp5908),128);
            tracep->chgBit(oldp+601,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__24__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+602,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+603,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+604,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+605,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+606,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+607,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+608,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x19U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5909, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
            tracep->chgWData(oldp+609,(__Vtemp5909),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5910, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5912, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5913, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5915, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5920[0U] = (~ __Vtemp5910[0U]);
                __Vtemp5920[1U] = (~ __Vtemp5910[1U]);
                __Vtemp5920[2U] = (~ __Vtemp5910[2U]);
                __Vtemp5920[3U] = (~ __Vtemp5910[3U]);
            } else {
                __Vtemp5920[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5912[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5913[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5915[0U]
                                            : 0U)));
                __Vtemp5920[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5912[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5913[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5915[1U]
                                            : 0U)));
                __Vtemp5920[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5912[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5913[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5915[2U]
                                            : 0U)));
                __Vtemp5920[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5912[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5913[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5915[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+613,(__Vtemp5920),128);
            tracep->chgBit(oldp+617,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__26__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+618,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+619,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+620,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+621,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+622,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+623,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+624,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x1bU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5921, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
            tracep->chgWData(oldp+625,(__Vtemp5921),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5922, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5924, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5925, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5927, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5932[0U] = (~ __Vtemp5922[0U]);
                __Vtemp5932[1U] = (~ __Vtemp5922[1U]);
                __Vtemp5932[2U] = (~ __Vtemp5922[2U]);
                __Vtemp5932[3U] = (~ __Vtemp5922[3U]);
            } else {
                __Vtemp5932[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5924[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5925[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5927[0U]
                                            : 0U)));
                __Vtemp5932[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5924[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5925[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5927[1U]
                                            : 0U)));
                __Vtemp5932[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5924[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5925[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5927[2U]
                                            : 0U)));
                __Vtemp5932[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5924[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5925[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5927[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+629,(__Vtemp5932),128);
            tracep->chgBit(oldp+633,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__28__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+634,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+635,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+636,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+637,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+638,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+639,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+640,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                        >> 0x1dU)),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5933, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
            tracep->chgWData(oldp+641,(__Vtemp5933),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5934, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5936, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5937, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5939, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5944[0U] = (~ __Vtemp5934[0U]);
                __Vtemp5944[1U] = (~ __Vtemp5934[1U]);
                __Vtemp5944[2U] = (~ __Vtemp5934[2U]);
                __Vtemp5944[3U] = (~ __Vtemp5934[3U]);
            } else {
                __Vtemp5944[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5936[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5937[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5939[0U]
                                            : 0U)));
                __Vtemp5944[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5936[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5937[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5939[1U]
                                            : 0U)));
                __Vtemp5944[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5936[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5937[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5939[2U]
                                            : 0U)));
                __Vtemp5944[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5936[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5937[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5939[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+645,(__Vtemp5944),128);
            tracep->chgBit(oldp+649,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__30__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+650,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+651,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+652,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+653,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+654,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+655,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+656,((7U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                 >> 0x1fU)))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5945, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
            tracep->chgWData(oldp+657,(__Vtemp5945),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5946, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5948, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5949, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5951, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5956[0U] = (~ __Vtemp5946[0U]);
                __Vtemp5956[1U] = (~ __Vtemp5946[1U]);
                __Vtemp5956[2U] = (~ __Vtemp5946[2U]);
                __Vtemp5956[3U] = (~ __Vtemp5946[3U]);
            } else {
                __Vtemp5956[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5948[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5949[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5951[0U]
                                            : 0U)));
                __Vtemp5956[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5948[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5949[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5951[1U]
                                            : 0U)));
                __Vtemp5956[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5948[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5949[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5951[2U]
                                            : 0U)));
                __Vtemp5956[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5948[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5949[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5951[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+661,(__Vtemp5956),128);
            tracep->chgBit(oldp+665,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__32__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+666,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+667,((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U])));
            tracep->chgBit(oldp+668,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+669,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+670,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+671,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+672,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 1U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5957, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
            tracep->chgWData(oldp+673,(__Vtemp5957),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5958, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5960, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5961, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5963, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5968[0U] = (~ __Vtemp5958[0U]);
                __Vtemp5968[1U] = (~ __Vtemp5958[1U]);
                __Vtemp5968[2U] = (~ __Vtemp5958[2U]);
                __Vtemp5968[3U] = (~ __Vtemp5958[3U]);
            } else {
                __Vtemp5968[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5960[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5961[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5963[0U]
                                            : 0U)));
                __Vtemp5968[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5960[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5961[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5963[1U]
                                            : 0U)));
                __Vtemp5968[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5960[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5961[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5963[2U]
                                            : 0U)));
                __Vtemp5968[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5960[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5961[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5963[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+677,(__Vtemp5968),128);
            tracep->chgBit(oldp+681,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__34__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+682,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+683,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+684,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+685,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+686,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+687,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+688,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 3U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5969, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
            tracep->chgWData(oldp+689,(__Vtemp5969),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5970, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5972, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5973, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5975, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5980[0U] = (~ __Vtemp5970[0U]);
                __Vtemp5980[1U] = (~ __Vtemp5970[1U]);
                __Vtemp5980[2U] = (~ __Vtemp5970[2U]);
                __Vtemp5980[3U] = (~ __Vtemp5970[3U]);
            } else {
                __Vtemp5980[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5972[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5973[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5975[0U]
                                            : 0U)));
                __Vtemp5980[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5972[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5973[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5975[1U]
                                            : 0U)));
                __Vtemp5980[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5972[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5973[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5975[2U]
                                            : 0U)));
                __Vtemp5980[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5972[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5973[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5975[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+693,(__Vtemp5980),128);
            tracep->chgBit(oldp+697,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__36__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+698,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+699,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+700,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+701,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+702,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+703,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+704,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 5U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5981, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
            tracep->chgWData(oldp+705,(__Vtemp5981),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5982, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5984, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5985, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5987, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5992[0U] = (~ __Vtemp5982[0U]);
                __Vtemp5992[1U] = (~ __Vtemp5982[1U]);
                __Vtemp5992[2U] = (~ __Vtemp5982[2U]);
                __Vtemp5992[3U] = (~ __Vtemp5982[3U]);
            } else {
                __Vtemp5992[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5984[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5985[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5987[0U]
                                            : 0U)));
                __Vtemp5992[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5984[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5985[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5987[1U]
                                            : 0U)));
                __Vtemp5992[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5984[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5985[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5987[2U]
                                            : 0U)));
                __Vtemp5992[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5984[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5985[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5987[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+709,(__Vtemp5992),128);
            tracep->chgBit(oldp+713,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__38__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+714,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 7U))));
            tracep->chgBit(oldp+715,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+716,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+717,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+718,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+719,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+720,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 7U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5993, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
            tracep->chgWData(oldp+721,(__Vtemp5993),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5994, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5996, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5997, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5999, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6004[0U] = (~ __Vtemp5994[0U]);
                __Vtemp6004[1U] = (~ __Vtemp5994[1U]);
                __Vtemp6004[2U] = (~ __Vtemp5994[2U]);
                __Vtemp6004[3U] = (~ __Vtemp5994[3U]);
            } else {
                __Vtemp6004[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5996[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5997[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5999[0U]
                                            : 0U)));
                __Vtemp6004[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5996[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5997[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5999[1U]
                                            : 0U)));
                __Vtemp6004[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5996[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5997[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5999[2U]
                                            : 0U)));
                __Vtemp6004[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5996[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5997[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5999[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+725,(__Vtemp6004),128);
            tracep->chgBit(oldp+729,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__40__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+730,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+731,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+732,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+733,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+734,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+735,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+736,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 9U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6005, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
            tracep->chgWData(oldp+737,(__Vtemp6005),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6006, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6008, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6009, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6011, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6016[0U] = (~ __Vtemp6006[0U]);
                __Vtemp6016[1U] = (~ __Vtemp6006[1U]);
                __Vtemp6016[2U] = (~ __Vtemp6006[2U]);
                __Vtemp6016[3U] = (~ __Vtemp6006[3U]);
            } else {
                __Vtemp6016[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6008[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6009[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6011[0U]
                                            : 0U)));
                __Vtemp6016[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6008[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6009[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6011[1U]
                                            : 0U)));
                __Vtemp6016[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6008[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6009[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6011[2U]
                                            : 0U)));
                __Vtemp6016[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6008[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6009[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6011[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+741,(__Vtemp6016),128);
            tracep->chgBit(oldp+745,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__42__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+746,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+747,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+748,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+749,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+750,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+751,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+752,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0xbU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6017, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
            tracep->chgWData(oldp+753,(__Vtemp6017),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6018, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6020, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6021, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6023, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6028[0U] = (~ __Vtemp6018[0U]);
                __Vtemp6028[1U] = (~ __Vtemp6018[1U]);
                __Vtemp6028[2U] = (~ __Vtemp6018[2U]);
                __Vtemp6028[3U] = (~ __Vtemp6018[3U]);
            } else {
                __Vtemp6028[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6020[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6021[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6023[0U]
                                            : 0U)));
                __Vtemp6028[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6020[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6021[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6023[1U]
                                            : 0U)));
                __Vtemp6028[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6020[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6021[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6023[2U]
                                            : 0U)));
                __Vtemp6028[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6020[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6021[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6023[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+757,(__Vtemp6028),128);
            tracep->chgBit(oldp+761,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__44__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+762,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+763,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+764,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+765,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+766,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+767,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+768,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0xdU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6029, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
            tracep->chgWData(oldp+769,(__Vtemp6029),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6030, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6032, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6033, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6035, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6040[0U] = (~ __Vtemp6030[0U]);
                __Vtemp6040[1U] = (~ __Vtemp6030[1U]);
                __Vtemp6040[2U] = (~ __Vtemp6030[2U]);
                __Vtemp6040[3U] = (~ __Vtemp6030[3U]);
            } else {
                __Vtemp6040[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6032[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6033[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6035[0U]
                                            : 0U)));
                __Vtemp6040[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6032[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6033[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6035[1U]
                                            : 0U)));
                __Vtemp6040[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6032[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6033[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6035[2U]
                                            : 0U)));
                __Vtemp6040[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6032[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6033[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6035[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+773,(__Vtemp6040),128);
            tracep->chgBit(oldp+777,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__46__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+778,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+779,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+780,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+781,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+782,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+783,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+784,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0xfU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6041, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
            tracep->chgWData(oldp+785,(__Vtemp6041),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6042, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6044, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6045, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6047, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6052[0U] = (~ __Vtemp6042[0U]);
                __Vtemp6052[1U] = (~ __Vtemp6042[1U]);
                __Vtemp6052[2U] = (~ __Vtemp6042[2U]);
                __Vtemp6052[3U] = (~ __Vtemp6042[3U]);
            } else {
                __Vtemp6052[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6044[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6045[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6047[0U]
                                            : 0U)));
                __Vtemp6052[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6044[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6045[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6047[1U]
                                            : 0U)));
                __Vtemp6052[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6044[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6045[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6047[2U]
                                            : 0U)));
                __Vtemp6052[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6044[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6045[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6047[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+789,(__Vtemp6052),128);
            tracep->chgBit(oldp+793,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__48__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+794,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+795,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+796,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+797,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+798,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+799,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+800,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x11U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6053, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
            tracep->chgWData(oldp+801,(__Vtemp6053),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6054, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6056, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6057, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6059, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6064[0U] = (~ __Vtemp6054[0U]);
                __Vtemp6064[1U] = (~ __Vtemp6054[1U]);
                __Vtemp6064[2U] = (~ __Vtemp6054[2U]);
                __Vtemp6064[3U] = (~ __Vtemp6054[3U]);
            } else {
                __Vtemp6064[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6056[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6057[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6059[0U]
                                            : 0U)));
                __Vtemp6064[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6056[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6057[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6059[1U]
                                            : 0U)));
                __Vtemp6064[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6056[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6057[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6059[2U]
                                            : 0U)));
                __Vtemp6064[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6056[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6057[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6059[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+805,(__Vtemp6064),128);
            tracep->chgBit(oldp+809,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__50__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+810,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+811,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+812,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+813,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+814,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+815,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+816,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x13U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6065, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
            tracep->chgWData(oldp+817,(__Vtemp6065),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6066, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6068, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6069, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6071, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6076[0U] = (~ __Vtemp6066[0U]);
                __Vtemp6076[1U] = (~ __Vtemp6066[1U]);
                __Vtemp6076[2U] = (~ __Vtemp6066[2U]);
                __Vtemp6076[3U] = (~ __Vtemp6066[3U]);
            } else {
                __Vtemp6076[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6068[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6069[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6071[0U]
                                            : 0U)));
                __Vtemp6076[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6068[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6069[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6071[1U]
                                            : 0U)));
                __Vtemp6076[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6068[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6069[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6071[2U]
                                            : 0U)));
                __Vtemp6076[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6068[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6069[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6071[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+821,(__Vtemp6076),128);
            tracep->chgBit(oldp+825,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__52__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+826,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+827,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+828,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+829,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+830,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+831,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+832,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x15U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6077, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
            tracep->chgWData(oldp+833,(__Vtemp6077),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6078, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6080, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6081, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6083, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6088[0U] = (~ __Vtemp6078[0U]);
                __Vtemp6088[1U] = (~ __Vtemp6078[1U]);
                __Vtemp6088[2U] = (~ __Vtemp6078[2U]);
                __Vtemp6088[3U] = (~ __Vtemp6078[3U]);
            } else {
                __Vtemp6088[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6080[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6081[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6083[0U]
                                            : 0U)));
                __Vtemp6088[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6080[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6081[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6083[1U]
                                            : 0U)));
                __Vtemp6088[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6080[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6081[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6083[2U]
                                            : 0U)));
                __Vtemp6088[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6080[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6081[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6083[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+837,(__Vtemp6088),128);
            tracep->chgBit(oldp+841,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__54__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+842,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+843,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+844,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+845,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+846,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+847,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+848,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x17U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6089, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
            tracep->chgWData(oldp+849,(__Vtemp6089),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6090, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6092, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6093, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6095, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6100[0U] = (~ __Vtemp6090[0U]);
                __Vtemp6100[1U] = (~ __Vtemp6090[1U]);
                __Vtemp6100[2U] = (~ __Vtemp6090[2U]);
                __Vtemp6100[3U] = (~ __Vtemp6090[3U]);
            } else {
                __Vtemp6100[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6092[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6093[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6095[0U]
                                            : 0U)));
                __Vtemp6100[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6092[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6093[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6095[1U]
                                            : 0U)));
                __Vtemp6100[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6092[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6093[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6095[2U]
                                            : 0U)));
                __Vtemp6100[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6092[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6093[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6095[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+853,(__Vtemp6100),128);
            tracep->chgBit(oldp+857,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__56__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+858,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+859,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+860,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+861,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+862,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+863,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+864,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x19U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6101, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
            tracep->chgWData(oldp+865,(__Vtemp6101),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6102, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6104, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6105, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6107, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6112[0U] = (~ __Vtemp6102[0U]);
                __Vtemp6112[1U] = (~ __Vtemp6102[1U]);
                __Vtemp6112[2U] = (~ __Vtemp6102[2U]);
                __Vtemp6112[3U] = (~ __Vtemp6102[3U]);
            } else {
                __Vtemp6112[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6104[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6105[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6107[0U]
                                            : 0U)));
                __Vtemp6112[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6104[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6105[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6107[1U]
                                            : 0U)));
                __Vtemp6112[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6104[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6105[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6107[2U]
                                            : 0U)));
                __Vtemp6112[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6104[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6105[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6107[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+869,(__Vtemp6112),128);
            tracep->chgBit(oldp+873,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__58__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+874,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+875,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+876,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+877,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+878,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+879,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+880,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x1bU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6113, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
            tracep->chgWData(oldp+881,(__Vtemp6113),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6114, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6116, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6117, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6119, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6124[0U] = (~ __Vtemp6114[0U]);
                __Vtemp6124[1U] = (~ __Vtemp6114[1U]);
                __Vtemp6124[2U] = (~ __Vtemp6114[2U]);
                __Vtemp6124[3U] = (~ __Vtemp6114[3U]);
            } else {
                __Vtemp6124[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6116[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6117[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6119[0U]
                                            : 0U)));
                __Vtemp6124[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6116[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6117[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6119[1U]
                                            : 0U)));
                __Vtemp6124[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6116[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6117[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6119[2U]
                                            : 0U)));
                __Vtemp6124[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6116[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6117[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6119[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+885,(__Vtemp6124),128);
            tracep->chgBit(oldp+889,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__60__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+890,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+891,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+892,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+893,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+894,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+895,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+896,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                        >> 0x1dU)),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6125, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
            tracep->chgWData(oldp+897,(__Vtemp6125),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6126, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6128, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6129, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6131, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6136[0U] = (~ __Vtemp6126[0U]);
                __Vtemp6136[1U] = (~ __Vtemp6126[1U]);
                __Vtemp6136[2U] = (~ __Vtemp6126[2U]);
                __Vtemp6136[3U] = (~ __Vtemp6126[3U]);
            } else {
                __Vtemp6136[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6128[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6129[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6131[0U]
                                            : 0U)));
                __Vtemp6136[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6128[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6129[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6131[1U]
                                            : 0U)));
                __Vtemp6136[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6128[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6129[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6131[2U]
                                            : 0U)));
                __Vtemp6136[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6128[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6129[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6131[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+901,(__Vtemp6136),128);
            tracep->chgBit(oldp+905,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__62__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+906,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+907,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+908,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+909,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+910,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+911,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+912,((7U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                 >> 0x1fU)))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6137, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
            tracep->chgWData(oldp+913,(__Vtemp6137),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6138, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6140, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6141, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6143, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6148[0U] = (~ __Vtemp6138[0U]);
                __Vtemp6148[1U] = (~ __Vtemp6138[1U]);
                __Vtemp6148[2U] = (~ __Vtemp6138[2U]);
                __Vtemp6148[3U] = (~ __Vtemp6138[3U]);
            } else {
                __Vtemp6148[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6140[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6141[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6143[0U]
                                            : 0U)));
                __Vtemp6148[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6140[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6141[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6143[1U]
                                            : 0U)));
                __Vtemp6148[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6140[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6141[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6143[2U]
                                            : 0U)));
                __Vtemp6148[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6140[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6141[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6143[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+917,(__Vtemp6148),128);
            tracep->chgBit(oldp+921,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__64__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+922,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+923,((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U])));
            tracep->chgBit(oldp+924,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+925,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+926,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+927,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgBit(oldp+928,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__signed_buffer));
            tracep->chgBit(oldp+929,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divw_buffer));
            tracep->chgQData(oldp+930,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend_buffer),64);
            tracep->chgQData(oldp+932,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer),64);
            tracep->chgWData(oldp+934,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend),128);
            VL_EXTEND_WQ(65,64, __Vtemp6149, (1ULL 
                                              + (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer)));
            VL_EXTEND_WQ(65,64, __Vtemp6150, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer);
            VL_EXTEND_WQ(65,64, __Vtemp6153, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__signed_buffer) {
                __Vtemp6154[0U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer 
                                                  >> 0x3fU)))
                                    ? __Vtemp6149[0U]
                                    : __Vtemp6150[0U]);
                __Vtemp6154[1U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer 
                                                  >> 0x3fU)))
                                    ? __Vtemp6149[1U]
                                    : __Vtemp6150[1U]);
                __Vtemp6154[2U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer 
                                                  >> 0x3fU)))
                                    ? __Vtemp6149[2U]
                                    : __Vtemp6150[2U]);
            } else {
                __Vtemp6154[0U] = __Vtemp6153[0U];
                __Vtemp6154[1U] = __Vtemp6153[1U];
                __Vtemp6154[2U] = __Vtemp6153[2U];
            }
            tracep->chgWData(oldp+938,(__Vtemp6154),65);
            tracep->chgQData(oldp+941,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient),64);
            tracep->chgWData(oldp+943,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out),65);
            tracep->chgQData(oldp+946,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend_w),64);
            tracep->chgQData(oldp+948,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__signed_buffer)
                                         ? ((1U & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer 
                                                           >> 0x1fU)))
                                             ? (QData)((IData)(
                                                               ((IData)(1U) 
                                                                + 
                                                                (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer)))))
                                             : (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer)))
                                         : (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__divisor_buffer)))),33);
            tracep->chgIData(oldp+950,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_w),32);
            tracep->chgQData(oldp+951,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__subw_out),33);
            tracep->chgQData(oldp+953,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_out),64);
            tracep->chgQData(oldp+955,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_out),64);
            tracep->chgBit(oldp+957,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_positive));
            tracep->chgBit(oldp+958,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_positive));
            tracep->chgCData(oldp+959,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__state),7);
            tracep->chgBit(oldp+960,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load));
            tracep->chgBit(oldp+961,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store));
            tracep->chgBit(oldp+962,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached));
            tracep->chgCData(oldp+963,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state),4);
            tracep->chgQData(oldp+964,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata),64);
            tracep->chgBit(oldp+966,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1));
            tracep->chgBit(oldp+967,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2));
            tracep->chgBit(oldp+968,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3));
            tracep->chgBit(oldp+969,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4));
            tracep->chgBit(oldp+970,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5));
            tracep->chgBit(oldp+971,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6));
            tracep->chgBit(oldp+972,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7));
            tracep->chgBit(oldp+973,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8));
            tracep->chgBit(oldp+974,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit));
            tracep->chgCData(oldp+975,((7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))),3);
            tracep->chgIData(oldp+976,((0x7fffffU & (IData)(
                                                            (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                             >> 9U)))),23);
            tracep->chgCData(oldp+977,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line),3);
            tracep->chgBit(oldp+978,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align));
            tracep->chgBit(oldp+979,((0x3fU == (0x3fU 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                           >> 0x1aU))))));
            tracep->chgIData(oldp+980,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__r),32);
            tracep->chgIData(oldp+981,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__k),32);
            tracep->chgQData(oldp+982,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask),64);
            tracep->chgQData(oldp+984,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata),64);
            tracep->chgQData(oldp+986,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata),64);
            tracep->chgQData(oldp+988,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata),64);
            tracep->chgQData(oldp+990,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0]),64);
            tracep->chgQData(oldp+992,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[1]),64);
            tracep->chgQData(oldp+994,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[2]),64);
            tracep->chgQData(oldp+996,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[3]),64);
            tracep->chgQData(oldp+998,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[4]),64);
            tracep->chgQData(oldp+1000,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[5]),64);
            tracep->chgQData(oldp+1002,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[6]),64);
            tracep->chgQData(oldp+1004,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[7]),64);
            tracep->chgQData(oldp+1006,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[8]),64);
            tracep->chgQData(oldp+1008,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[9]),64);
            tracep->chgQData(oldp+1010,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[10]),64);
            tracep->chgQData(oldp+1012,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[11]),64);
            tracep->chgQData(oldp+1014,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[12]),64);
            tracep->chgQData(oldp+1016,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[13]),64);
            tracep->chgQData(oldp+1018,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[14]),64);
            tracep->chgQData(oldp+1020,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[15]),64);
            tracep->chgQData(oldp+1022,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[16]),64);
            tracep->chgQData(oldp+1024,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[17]),64);
            tracep->chgQData(oldp+1026,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[18]),64);
            tracep->chgQData(oldp+1028,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[19]),64);
            tracep->chgQData(oldp+1030,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[20]),64);
            tracep->chgQData(oldp+1032,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[21]),64);
            tracep->chgQData(oldp+1034,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[22]),64);
            tracep->chgQData(oldp+1036,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[23]),64);
            tracep->chgQData(oldp+1038,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[24]),64);
            tracep->chgQData(oldp+1040,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[25]),64);
            tracep->chgQData(oldp+1042,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[26]),64);
            tracep->chgQData(oldp+1044,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[27]),64);
            tracep->chgQData(oldp+1046,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[28]),64);
            tracep->chgQData(oldp+1048,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[29]),64);
            tracep->chgQData(oldp+1050,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[30]),64);
            tracep->chgQData(oldp+1052,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[31]),64);
            tracep->chgQData(oldp+1054,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0]),64);
            tracep->chgQData(oldp+1056,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[1]),64);
            tracep->chgQData(oldp+1058,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[2]),64);
            tracep->chgQData(oldp+1060,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[3]),64);
            tracep->chgQData(oldp+1062,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[4]),64);
            tracep->chgQData(oldp+1064,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[5]),64);
            tracep->chgQData(oldp+1066,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[6]),64);
            tracep->chgQData(oldp+1068,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[7]),64);
            tracep->chgQData(oldp+1070,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[8]),64);
            tracep->chgQData(oldp+1072,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[9]),64);
            tracep->chgQData(oldp+1074,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[10]),64);
            tracep->chgQData(oldp+1076,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[11]),64);
            tracep->chgQData(oldp+1078,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[12]),64);
            tracep->chgQData(oldp+1080,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[13]),64);
            tracep->chgQData(oldp+1082,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[14]),64);
            tracep->chgQData(oldp+1084,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[15]),64);
            tracep->chgQData(oldp+1086,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[16]),64);
            tracep->chgQData(oldp+1088,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[17]),64);
            tracep->chgQData(oldp+1090,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[18]),64);
            tracep->chgQData(oldp+1092,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[19]),64);
            tracep->chgQData(oldp+1094,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[20]),64);
            tracep->chgQData(oldp+1096,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[21]),64);
            tracep->chgQData(oldp+1098,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[22]),64);
            tracep->chgQData(oldp+1100,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[23]),64);
            tracep->chgQData(oldp+1102,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[24]),64);
            tracep->chgQData(oldp+1104,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[25]),64);
            tracep->chgQData(oldp+1106,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[26]),64);
            tracep->chgQData(oldp+1108,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[27]),64);
            tracep->chgQData(oldp+1110,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[28]),64);
            tracep->chgQData(oldp+1112,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[29]),64);
            tracep->chgQData(oldp+1114,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[30]),64);
            tracep->chgQData(oldp+1116,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[31]),64);
            tracep->chgQData(oldp+1118,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__t),64);
            tracep->chgQData(oldp+1120,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c),64);
            tracep->chgQData(oldp+1122,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid),64);
            tracep->chgQData(oldp+1124,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__misa),64);
            tracep->chgQData(oldp+1126,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mscratch),64);
            tracep->chgQData(oldp+1128,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause),64);
            tracep->chgQData(oldp+1130,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcycle),64);
            tracep->chgQData(oldp+1132,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__minstret),64);
            tracep->chgQData(oldp+1134,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtval),64);
            tracep->chgIData(oldp+1136,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__j),32);
            tracep->chgBit(oldp+1137,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write));
            tracep->chgBit(oldp+1138,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs1_read));
            tracep->chgBit(oldp+1139,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs2_read));
            tracep->chgBit(oldp+1140,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_csr_read));
            tracep->chgBit(oldp+1141,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write));
            tracep->chgBit(oldp+1142,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                       & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out)) 
                                           | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                                          | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))))));
            tracep->chgBit(oldp+1143,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                       & (8U == (0xcU 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))))));
            tracep->chgBit(oldp+1144,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write));
            tracep->chgBit(oldp+1145,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
                                       & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)) 
                                           | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                                          | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))))));
            tracep->chgQData(oldp+1146,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime),64);
            tracep->chgQData(oldp+1148,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next),64);
            tracep->chgQData(oldp+1150,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp),64);
            tracep->chgQData(oldp+1152,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next),64);
            tracep->chgCData(oldp+1154,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state),2);
            tracep->chgBit(oldp+1155,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit));
            tracep->chgBit(oldp+1156,(((0x2004000U 
                                        <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr) 
                                       & (0x2004007U 
                                          >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr))));
            tracep->chgBit(oldp+1157,(((0x200bff8U 
                                        <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                       & (0x200bfffU 
                                          >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))));
            tracep->chgBit(oldp+1158,(((0x2004000U 
                                        <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                       & (0x2004007U 
                                          >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))));
            tracep->chgBit(oldp+1159,((((0x200bff8U 
                                         <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr_next) 
                                        & (0x200bfffU 
                                           >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr_next)) 
                                       | ((0x2004000U 
                                           <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr_next) 
                                          & (0x2004007U 
                                             >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr_next)))));
            tracep->chgBit(oldp+1160,((((0x200bff8U 
                                         <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next) 
                                        & (0x200bfffU 
                                           >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next)) 
                                       | ((0x2004000U 
                                           <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next) 
                                          & (0x2004007U 
                                             >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next)))));
            tracep->chgCData(oldp+1161,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid),4);
            tracep->chgCData(oldp+1162,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? 1U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid))),4);
            tracep->chgIData(oldp+1163,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr),32);
            tracep->chgIData(oldp+1164,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr_next),32);
            tracep->chgCData(oldp+1165,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen),8);
            tracep->chgCData(oldp+1166,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen))),8);
            tracep->chgCData(oldp+1167,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize),3);
            tracep->chgCData(oldp+1168,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize)
                                          : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize))),3);
            tracep->chgCData(oldp+1169,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst),2);
            tracep->chgCData(oldp+1170,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst))),2);
            tracep->chgCData(oldp+1171,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid),4);
            tracep->chgCData(oldp+1172,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                              ? (((
                                                   (2U 
                                                    != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                                                   & (2U 
                                                      == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) 
                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint))
                                                  ? 1U
                                                  : 0U)
                                              : 0U)
                                          : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid))),4);
            tracep->chgIData(oldp+1173,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr),32);
            tracep->chgIData(oldp+1174,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next),32);
            tracep->chgCData(oldp+1175,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen),8);
            tracep->chgCData(oldp+1176,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen))),8);
            tracep->chgCData(oldp+1177,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize),3);
            tracep->chgCData(oldp+1178,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                              ? (((
                                                   (2U 
                                                    != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                                                   & (2U 
                                                      == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))) 
                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint))
                                                  ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize)
                                                  : 0U)
                                              : 0U)
                                          : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize))),3);
            tracep->chgCData(oldp+1179,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst),2);
            tracep->chgCData(oldp+1180,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst))),2);
            tracep->chgCData(oldp+1181,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate),2);
            tracep->chgCData(oldp+1182,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate),2);
            tracep->chgBit(oldp+1183,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint));
            tracep->chgBit(oldp+1184,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wclint));
            tracep->chgBit(oldp+1185,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen)))));
            __Vtemp6155[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[0U]);
            __Vtemp6155[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[1U]);
            __Vtemp6155[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[2U]);
            __Vtemp6155[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[3U]);
            tracep->chgWData(oldp+1186,(__Vtemp6155),128);
            tracep->chgBit(oldp+1190,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen)))));
            __Vtemp6156[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[0U]);
            __Vtemp6156[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[1U]);
            __Vtemp6156[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[2U]);
            __Vtemp6156[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[3U]);
            tracep->chgWData(oldp+1191,(__Vtemp6156),128);
            tracep->chgBit(oldp+1195,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen)))));
            __Vtemp6157[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[0U]);
            __Vtemp6157[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[1U]);
            __Vtemp6157[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[2U]);
            __Vtemp6157[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[3U]);
            tracep->chgWData(oldp+1196,(__Vtemp6157),128);
            tracep->chgBit(oldp+1200,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen)))));
            __Vtemp6158[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[0U]);
            __Vtemp6158[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[1U]);
            __Vtemp6158[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[2U]);
            __Vtemp6158[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[3U]);
            tracep->chgWData(oldp+1201,(__Vtemp6158),128);
            tracep->chgBit(oldp+1205,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen)))));
            __Vtemp6159[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[0U]);
            __Vtemp6159[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[1U]);
            __Vtemp6159[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[2U]);
            __Vtemp6159[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[3U]);
            tracep->chgWData(oldp+1206,(__Vtemp6159),128);
            tracep->chgBit(oldp+1210,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen)))));
            __Vtemp6160[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[0U]);
            __Vtemp6160[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[1U]);
            __Vtemp6160[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[2U]);
            __Vtemp6160[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[3U]);
            tracep->chgWData(oldp+1211,(__Vtemp6160),128);
            tracep->chgBit(oldp+1215,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen)))));
            __Vtemp6161[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[0U]);
            __Vtemp6161[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[1U]);
            __Vtemp6161[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[2U]);
            __Vtemp6161[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[3U]);
            tracep->chgWData(oldp+1216,(__Vtemp6161),128);
            tracep->chgBit(oldp+1220,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen)))));
            __Vtemp6162[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[0U]);
            __Vtemp6162[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[1U]);
            __Vtemp6162[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[2U]);
            __Vtemp6162[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[3U]);
            tracep->chgWData(oldp+1221,(__Vtemp6162),128);
            tracep->chgQData(oldp+1225,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [0U]),33);
            tracep->chgSData(oldp+1227,((0x7ffU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c))),11);
            tracep->chgCData(oldp+1228,((0x7fU & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                          >> 0xbU)))),7);
            tracep->chgCData(oldp+1229,((0x1fU & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                          >> 0x12U)))),5);
            tracep->chgCData(oldp+1230,((7U & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                       >> 0x17U)))),3);
            tracep->chgCData(oldp+1231,((3U & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                       >> 0x1aU)))),2);
            tracep->chgCData(oldp+1232,((3U & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                       >> 0x1cU)))),2);
            tracep->chgBit(oldp+1233,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                     >> 0x1eU)))));
            tracep->chgSData(oldp+1234,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1235,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1236,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1237,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1238,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1239,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1240,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1241,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1242,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8))))));
            tracep->chgSData(oldp+1243,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout1),11);
            tracep->chgIData(oldp+1244,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2),22);
            tracep->chgCData(oldp+1245,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout2),8);
            tracep->chgSData(oldp+1246,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3),15);
            tracep->chgCData(oldp+1247,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout3),5);
            tracep->chgSData(oldp+1248,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4),10);
            tracep->chgCData(oldp+1249,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout4),4);
            tracep->chgCData(oldp+1250,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5),7);
            tracep->chgCData(oldp+1251,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout5),3);
            tracep->chgCData(oldp+1252,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6),6);
            tracep->chgCData(oldp+1253,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout6),2);
            tracep->chgCData(oldp+1254,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7),4);
            tracep->chgCData(oldp+1255,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout7),2);
            tracep->chgCData(oldp+1256,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8),3);
            tracep->chgBit(oldp+1257,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7))));
            tracep->chgBit(oldp+1258,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1259,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1260,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7))))));
            tracep->chgBit(oldp+1261,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8))));
            tracep->chgBit(oldp+1262,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1263,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1264,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U]))));
            tracep->chgBit(oldp+1265,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1266,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1267,((1U & ((((IData)(
                                                       vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U]) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 1U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 1U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 2U)))) 
                                             | ((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U]) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+1268,((1U & (((IData)(
                                                      vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [0U]) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 1U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 2U))))));
            tracep->chgBit(oldp+1269,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1270,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1271,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1272,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+1273,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U] 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 4U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 5U))))));
            tracep->chgBit(oldp+1274,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1275,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1276,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1277,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+1278,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U] 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 7U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 8U))))));
            tracep->chgBit(oldp+1279,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1280,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1281,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1282,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+1283,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U] 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0xaU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+1284,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1285,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1286,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1287,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xdU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0xdU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0xeU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0xcU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+1288,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U] 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0xdU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+1289,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1290,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1291,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1292,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0x10U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0x10U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x11U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0xfU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+1293,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U] 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0x10U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+1294,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1295,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1296,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1297,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0x13U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0x13U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x14U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0x12U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+1298,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U] 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0x13U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+1299,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1300,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1301,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1302,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0x16U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0x16U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x17U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0x15U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+1303,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U] 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0x16U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+1304,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1305,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1306,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1307,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0x19U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0x19U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1aU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0x18U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+1308,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U] 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0x19U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+1309,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1310,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1311,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1312,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0x1cU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0x1cU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x1dU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0x1bU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+1313,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U] 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0x1cU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+1314,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1315,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1316,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1317,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0x1fU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [0U] 
                                                          >> 0x1fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [0U] 
                                                            >> 0x20U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0x1eU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [0U] 
                                                           >> 0x20U)))))));
            tracep->chgBit(oldp+1318,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [0U] 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [0U] 
                                                         >> 0x1fU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [0U] 
                                                        >> 0x20U))))));
            tracep->chgBit(oldp+1319,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)));
            tracep->chgBit(oldp+1320,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+1321,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+1322,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1323,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1324,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+1325,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+1326,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+1327,((1U & (((0x18U 
                                               == (0x18U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))))));
            tracep->chgBit(oldp+1328,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1329,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+1330,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+1331,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+1332,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))))));
            tracep->chgBit(oldp+1333,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1334,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+1335,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1336,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1337,((1U & (((0x600U 
                                               == (0x600U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))))));
            tracep->chgBit(oldp+1338,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1339,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1340,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1341,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1342,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))))));
            tracep->chgBit(oldp+1343,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1344,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1345,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1346,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1347,((1U & (((0x18000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)) 
                                              | (0x30000U 
                                                 == 
                                                 (0x30000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))))));
            tracep->chgBit(oldp+1348,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1349,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1350,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1351,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1352,((1U & (((0xc0000U 
                                               == (0xc0000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)) 
                                              | (0x180000U 
                                                 == 
                                                 (0x180000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))))));
            tracep->chgBit(oldp+1353,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1354,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))));
            tracep->chgBit(oldp+1355,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+1356,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+1357,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1358,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1359,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+1360,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+1361,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+1362,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3)))))));
            tracep->chgBit(oldp+1363,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1364,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+1365,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+1366,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+1367,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3)))))));
            tracep->chgBit(oldp+1368,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1369,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+1370,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1371,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1372,((1U & (((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3)))))));
            tracep->chgBit(oldp+1373,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1374,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1375,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1376,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1377,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3)))))));
            tracep->chgBit(oldp+1378,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1379,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4))));
            tracep->chgBit(oldp+1380,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+1381,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+1382,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1383,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4))))));
            tracep->chgBit(oldp+1384,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+1385,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+1386,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+1387,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4)))))));
            tracep->chgBit(oldp+1388,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4))))));
            tracep->chgBit(oldp+1389,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+1390,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+1391,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+1392,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4)))))));
            tracep->chgBit(oldp+1393,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4))))));
            tracep->chgBit(oldp+1394,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5))));
            tracep->chgBit(oldp+1395,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+1396,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+1397,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1398,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5))))));
            tracep->chgBit(oldp+1399,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+1400,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+1401,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+1402,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5)))))));
            tracep->chgBit(oldp+1403,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5))))));
            tracep->chgBit(oldp+1404,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6))));
            tracep->chgBit(oldp+1405,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+1406,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+1407,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1408,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6))))));
            tracep->chgBit(oldp+1409,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+1410,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+1411,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+1412,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6)))))));
            tracep->chgBit(oldp+1413,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6))))));
            tracep->chgQData(oldp+1414,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [1U]),33);
            tracep->chgSData(oldp+1416,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [0U]),11);
            tracep->chgCData(oldp+1417,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [0U]),7);
            tracep->chgCData(oldp+1418,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [0U]),5);
            tracep->chgCData(oldp+1419,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [0U]),3);
            tracep->chgCData(oldp+1420,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [0U]),2);
            tracep->chgCData(oldp+1421,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [0U]),2);
            tracep->chgBit(oldp+1422,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [0U]));
            tracep->chgSData(oldp+1423,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1424,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1425,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1426,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1427,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1428,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1429,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1430,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1431,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+1432,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+1433,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+1434,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+1435,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+1436,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+1437,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+1438,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+1439,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+1440,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+1441,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+1442,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+1443,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+1444,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+1445,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+1446,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+1447,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1448,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1449,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+1450,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+1451,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1452,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1453,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [1U]))));
            tracep->chgBit(oldp+1454,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1455,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1456,((1U & ((((IData)(
                                                       vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [1U]) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 1U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 1U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [1U] 
                                                            >> 2U)))) 
                                             | ((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U]) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [1U] 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+1457,((1U & (((IData)(
                                                      vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [1U]) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 1U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 2U))))));
            tracep->chgBit(oldp+1458,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1459,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1460,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1461,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [1U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [1U] 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+1462,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [1U] 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 4U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 5U))))));
            tracep->chgBit(oldp+1463,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1464,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1465,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1466,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [1U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [1U] 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+1467,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [1U] 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 7U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 8U))))));
            tracep->chgBit(oldp+1468,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1469,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1470,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1471,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [1U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [1U] 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+1472,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [1U] 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0xaU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+1473,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1474,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1475,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1476,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0xdU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0xdU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [1U] 
                                                            >> 0xeU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0xcU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [1U] 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+1477,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [1U] 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0xdU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+1478,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1479,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1480,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1481,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0x10U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0x10U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [1U] 
                                                            >> 0x11U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0xfU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [1U] 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+1482,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [1U] 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0x10U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+1483,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1484,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1485,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1486,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0x13U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0x13U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [1U] 
                                                            >> 0x14U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0x12U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [1U] 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+1487,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [1U] 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0x13U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+1488,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1489,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1490,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1491,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0x16U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0x16U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [1U] 
                                                            >> 0x17U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0x15U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [1U] 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+1492,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [1U] 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0x16U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+1493,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1494,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1495,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1496,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0x19U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0x19U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [1U] 
                                                            >> 0x1aU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0x18U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [1U] 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+1497,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [1U] 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0x19U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+1498,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1499,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1500,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1501,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0x1cU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0x1cU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [1U] 
                                                            >> 0x1dU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0x1bU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [1U] 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+1502,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [1U] 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0x1cU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+1503,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1504,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1505,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1506,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0x1fU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [1U] 
                                                          >> 0x1fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [1U] 
                                                            >> 0x20U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0x1eU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [1U] 
                                                           >> 0x20U)))))));
            tracep->chgBit(oldp+1507,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [1U] 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [1U] 
                                                         >> 0x1fU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [1U] 
                                                        >> 0x20U))))));
            tracep->chgBit(oldp+1508,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+1509,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+1510,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+1511,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1512,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1513,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+1514,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+1515,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+1516,((1U & (((0x18U 
                                               == (0x18U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1517,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1518,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+1519,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+1520,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+1521,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1522,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1523,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+1524,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1525,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1526,((1U & (((0x600U 
                                               == (0x600U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1527,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1528,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1529,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1530,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1531,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1532,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1533,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1534,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1535,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1536,((1U & (((0x18000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x30000U 
                                                 == 
                                                 (0x30000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1537,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1538,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1539,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1540,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1541,((1U & (((0xc0000U 
                                               == (0xc0000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x180000U 
                                                 == 
                                                 (0x180000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1542,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1543,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+1544,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+1545,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+1546,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1547,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1548,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+1549,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+1550,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+1551,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+1552,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1553,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+1554,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+1555,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+1556,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+1557,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1558,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+1559,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1560,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1561,((1U & (((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+1562,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1563,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1564,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1565,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1566,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+1567,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1568,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+1569,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+1570,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+1571,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1572,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1573,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+1574,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+1575,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+1576,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4)))))));
            tracep->chgBit(oldp+1577,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1578,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+1579,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+1580,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+1581,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4)))))));
            tracep->chgBit(oldp+1582,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1583,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+1584,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+1585,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+1586,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1587,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1588,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+1589,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+1590,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+1591,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5)))))));
            tracep->chgBit(oldp+1592,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1593,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+1594,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+1595,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+1596,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1597,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+1598,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+1599,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+1600,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+1601,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6)))))));
            tracep->chgBit(oldp+1602,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+1603,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [2U]),33);
            tracep->chgSData(oldp+1605,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [1U]),11);
            tracep->chgCData(oldp+1606,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [1U]),7);
            tracep->chgCData(oldp+1607,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [1U]),5);
            tracep->chgCData(oldp+1608,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [1U]),3);
            tracep->chgCData(oldp+1609,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [1U]),2);
            tracep->chgCData(oldp+1610,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [1U]),2);
            tracep->chgBit(oldp+1611,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [1U]));
            tracep->chgSData(oldp+1612,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1613,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1614,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1615,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1616,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1617,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1618,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1619,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1620,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+1621,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+1622,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+1623,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+1624,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+1625,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+1626,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+1627,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+1628,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+1629,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+1630,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+1631,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+1632,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+1633,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+1634,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+1635,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+1636,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1637,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1638,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+1639,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+1640,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1641,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1642,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [2U]))));
            tracep->chgBit(oldp+1643,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1644,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1645,((1U & ((((IData)(
                                                       vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [2U]) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 1U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 1U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [2U] 
                                                            >> 2U)))) 
                                             | ((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U]) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [2U] 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+1646,((1U & (((IData)(
                                                      vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [2U]) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 1U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 2U))))));
            tracep->chgBit(oldp+1647,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1648,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1649,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1650,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [2U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [2U] 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+1651,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [2U] 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 4U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 5U))))));
            tracep->chgBit(oldp+1652,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1653,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1654,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1655,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [2U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [2U] 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+1656,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [2U] 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 7U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 8U))))));
            tracep->chgBit(oldp+1657,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1658,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1659,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1660,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [2U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [2U] 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+1661,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [2U] 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0xaU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+1662,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1663,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1664,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1665,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0xdU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0xdU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [2U] 
                                                            >> 0xeU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0xcU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [2U] 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+1666,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [2U] 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0xdU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+1667,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1668,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1669,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1670,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0x10U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0x10U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [2U] 
                                                            >> 0x11U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0xfU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [2U] 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+1671,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [2U] 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0x10U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+1672,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1673,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1674,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1675,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0x13U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0x13U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [2U] 
                                                            >> 0x14U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0x12U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [2U] 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+1676,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [2U] 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0x13U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+1677,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1678,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1679,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1680,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0x16U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0x16U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [2U] 
                                                            >> 0x17U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0x15U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [2U] 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+1681,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [2U] 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0x16U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+1682,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1683,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1684,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1685,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0x19U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0x19U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [2U] 
                                                            >> 0x1aU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0x18U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [2U] 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+1686,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [2U] 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0x19U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+1687,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1688,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1689,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1690,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0x1cU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0x1cU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [2U] 
                                                            >> 0x1dU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0x1bU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [2U] 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+1691,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [2U] 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0x1cU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+1692,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1693,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1694,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1695,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0x1fU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [2U] 
                                                          >> 0x1fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [2U] 
                                                            >> 0x20U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0x1eU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [2U] 
                                                           >> 0x20U)))))));
            tracep->chgBit(oldp+1696,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [2U] 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [2U] 
                                                         >> 0x1fU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [2U] 
                                                        >> 0x20U))))));
            tracep->chgBit(oldp+1697,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+1698,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+1699,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+1700,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1701,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1702,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+1703,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+1704,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+1705,((1U & (((0x18U 
                                               == (0x18U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1706,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1707,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+1708,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+1709,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+1710,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1711,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1712,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+1713,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1714,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1715,((1U & (((0x600U 
                                               == (0x600U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1716,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1717,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1718,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1719,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1720,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1721,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1722,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1723,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1724,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1725,((1U & (((0x18000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x30000U 
                                                 == 
                                                 (0x30000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1726,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1727,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1728,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1729,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1730,((1U & (((0xc0000U 
                                               == (0xc0000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x180000U 
                                                 == 
                                                 (0x180000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1731,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1732,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+1733,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+1734,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+1735,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1736,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1737,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+1738,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+1739,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+1740,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+1741,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1742,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+1743,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+1744,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+1745,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+1746,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1747,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+1748,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1749,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1750,((1U & (((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+1751,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1752,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1753,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1754,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1755,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+1756,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1757,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+1758,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+1759,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+1760,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1761,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1762,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+1763,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+1764,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+1765,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4)))))));
            tracep->chgBit(oldp+1766,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1767,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+1768,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+1769,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+1770,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4)))))));
            tracep->chgBit(oldp+1771,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1772,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+1773,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+1774,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+1775,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1776,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1777,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+1778,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+1779,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+1780,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5)))))));
            tracep->chgBit(oldp+1781,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1782,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+1783,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+1784,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+1785,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1786,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+1787,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+1788,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+1789,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+1790,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6)))))));
            tracep->chgBit(oldp+1791,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+1792,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [3U]),33);
            tracep->chgSData(oldp+1794,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [2U]),11);
            tracep->chgCData(oldp+1795,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [2U]),7);
            tracep->chgCData(oldp+1796,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [2U]),5);
            tracep->chgCData(oldp+1797,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [2U]),3);
            tracep->chgCData(oldp+1798,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [2U]),2);
            tracep->chgCData(oldp+1799,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [2U]),2);
            tracep->chgBit(oldp+1800,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [2U]));
            tracep->chgSData(oldp+1801,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1802,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1803,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1804,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1805,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1806,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1807,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1808,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1809,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+1810,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+1811,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+1812,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+1813,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+1814,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+1815,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+1816,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+1817,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+1818,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+1819,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+1820,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+1821,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+1822,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+1823,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+1824,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+1825,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1826,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1827,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+1828,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+1829,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1830,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1831,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [3U]))));
            tracep->chgBit(oldp+1832,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1833,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1834,((1U & ((((IData)(
                                                       vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [3U]) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 1U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 1U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [3U] 
                                                            >> 2U)))) 
                                             | ((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U]) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [3U] 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+1835,((1U & (((IData)(
                                                      vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [3U]) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 1U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 2U))))));
            tracep->chgBit(oldp+1836,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1837,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1838,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1839,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [3U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [3U] 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+1840,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [3U] 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 4U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 5U))))));
            tracep->chgBit(oldp+1841,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1842,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1843,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1844,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [3U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [3U] 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+1845,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [3U] 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 7U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 8U))))));
            tracep->chgBit(oldp+1846,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1847,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1848,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1849,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [3U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [3U] 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+1850,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [3U] 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0xaU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+1851,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1852,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1853,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1854,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0xdU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0xdU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [3U] 
                                                            >> 0xeU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0xcU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [3U] 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+1855,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [3U] 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0xdU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+1856,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1857,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1858,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1859,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0x10U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0x10U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [3U] 
                                                            >> 0x11U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0xfU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [3U] 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+1860,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [3U] 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0x10U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+1861,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1862,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1863,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1864,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0x13U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0x13U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [3U] 
                                                            >> 0x14U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0x12U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [3U] 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+1865,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [3U] 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0x13U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+1866,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1867,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1868,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1869,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0x16U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0x16U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [3U] 
                                                            >> 0x17U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0x15U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [3U] 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+1870,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [3U] 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0x16U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+1871,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1872,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1873,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1874,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0x19U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0x19U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [3U] 
                                                            >> 0x1aU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0x18U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [3U] 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+1875,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [3U] 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0x19U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+1876,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1877,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1878,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1879,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0x1cU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0x1cU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [3U] 
                                                            >> 0x1dU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0x1bU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [3U] 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+1880,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [3U] 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0x1cU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+1881,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1882,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1883,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1884,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0x1fU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [3U] 
                                                          >> 0x1fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [3U] 
                                                            >> 0x20U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0x1eU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [3U] 
                                                           >> 0x20U)))))));
            tracep->chgBit(oldp+1885,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [3U] 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [3U] 
                                                         >> 0x1fU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [3U] 
                                                        >> 0x20U))))));
            tracep->chgBit(oldp+1886,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+1887,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+1888,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+1889,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1890,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1891,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+1892,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+1893,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+1894,((1U & (((0x18U 
                                               == (0x18U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1895,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1896,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+1897,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+1898,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+1899,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1900,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1901,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+1902,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1903,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1904,((1U & (((0x600U 
                                               == (0x600U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1905,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1906,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1907,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1908,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1909,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1910,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1911,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1912,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1913,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1914,((1U & (((0x18000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x30000U 
                                                 == 
                                                 (0x30000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1915,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1916,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1917,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1918,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1919,((1U & (((0xc0000U 
                                               == (0xc0000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x180000U 
                                                 == 
                                                 (0x180000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+1920,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1921,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+1922,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+1923,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+1924,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1925,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1926,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+1927,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+1928,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+1929,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+1930,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1931,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+1932,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+1933,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+1934,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+1935,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1936,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+1937,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1938,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1939,((1U & (((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+1940,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1941,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1942,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1943,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1944,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+1945,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1946,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+1947,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+1948,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+1949,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1950,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1951,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+1952,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+1953,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+1954,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4)))))));
            tracep->chgBit(oldp+1955,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1956,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+1957,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+1958,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+1959,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4)))))));
            tracep->chgBit(oldp+1960,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1961,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+1962,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+1963,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+1964,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1965,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1966,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+1967,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+1968,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+1969,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5)))))));
            tracep->chgBit(oldp+1970,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1971,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+1972,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+1973,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+1974,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1975,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+1976,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+1977,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+1978,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+1979,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6)))))));
            tracep->chgBit(oldp+1980,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+1981,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [4U]),33);
            tracep->chgSData(oldp+1983,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [3U]),11);
            tracep->chgCData(oldp+1984,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [3U]),7);
            tracep->chgCData(oldp+1985,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [3U]),5);
            tracep->chgCData(oldp+1986,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [3U]),3);
            tracep->chgCData(oldp+1987,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [3U]),2);
            tracep->chgCData(oldp+1988,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [3U]),2);
            tracep->chgBit(oldp+1989,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [3U]));
            tracep->chgSData(oldp+1990,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1991,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1992,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1993,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1994,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1995,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1996,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1997,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1998,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+1999,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+2000,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+2001,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+2002,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+2003,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+2004,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+2005,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+2006,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+2007,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+2008,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+2009,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+2010,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+2011,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+2012,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+2013,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+2014,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+2015,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+2016,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+2017,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+2018,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+2019,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+2020,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [4U]))));
            tracep->chgBit(oldp+2021,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2022,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2023,((1U & ((((IData)(
                                                       vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [4U]) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 1U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 1U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [4U] 
                                                            >> 2U)))) 
                                             | ((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U]) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [4U] 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+2024,((1U & (((IData)(
                                                      vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [4U]) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 1U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 2U))))));
            tracep->chgBit(oldp+2025,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2026,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2027,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2028,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [4U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [4U] 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+2029,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [4U] 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 4U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 5U))))));
            tracep->chgBit(oldp+2030,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2031,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2032,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2033,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [4U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [4U] 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+2034,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [4U] 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 7U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 8U))))));
            tracep->chgBit(oldp+2035,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2036,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2037,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2038,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [4U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [4U] 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+2039,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [4U] 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0xaU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+2040,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2041,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2042,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2043,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0xdU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0xdU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [4U] 
                                                            >> 0xeU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0xcU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [4U] 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+2044,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [4U] 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0xdU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+2045,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2046,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2047,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2048,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0x10U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0x10U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [4U] 
                                                            >> 0x11U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0xfU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [4U] 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+2049,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [4U] 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0x10U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+2050,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2051,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2052,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2053,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0x13U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0x13U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [4U] 
                                                            >> 0x14U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0x12U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [4U] 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+2054,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [4U] 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0x13U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+2055,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2056,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2057,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2058,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0x16U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0x16U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [4U] 
                                                            >> 0x17U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0x15U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [4U] 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+2059,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [4U] 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0x16U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+2060,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2061,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+2062,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+2063,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0x19U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0x19U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [4U] 
                                                            >> 0x1aU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0x18U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [4U] 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+2064,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [4U] 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0x19U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+2065,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+2066,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+2067,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+2068,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0x1cU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0x1cU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [4U] 
                                                            >> 0x1dU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0x1bU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [4U] 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+2069,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [4U] 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0x1cU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+2070,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+2071,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+2072,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+2073,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0x1fU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [4U] 
                                                          >> 0x1fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [4U] 
                                                            >> 0x20U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0x1eU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [4U] 
                                                           >> 0x20U)))))));
            tracep->chgBit(oldp+2074,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [4U] 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [4U] 
                                                         >> 0x1fU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [4U] 
                                                        >> 0x20U))))));
            tracep->chgBit(oldp+2075,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+2076,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+2077,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+2078,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2079,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2080,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+2081,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+2082,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+2083,((1U & (((0x18U 
                                               == (0x18U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2084,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2085,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+2086,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+2087,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+2088,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2089,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2090,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+2091,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2092,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2093,((1U & (((0x600U 
                                               == (0x600U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2094,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2095,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2096,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2097,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2098,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2099,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2100,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2101,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2102,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2103,((1U & (((0x18000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x30000U 
                                                 == 
                                                 (0x30000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2104,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2105,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2106,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2107,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2108,((1U & (((0xc0000U 
                                               == (0xc0000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x180000U 
                                                 == 
                                                 (0x180000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2109,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2110,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+2111,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+2112,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+2113,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2114,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2115,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+2116,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+2117,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+2118,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+2119,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2120,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+2121,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+2122,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+2123,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+2124,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2125,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+2126,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2127,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2128,((1U & (((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+2129,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2130,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2131,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2132,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2133,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+2134,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2135,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+2136,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+2137,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+2138,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2139,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2140,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+2141,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+2142,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+2143,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4)))))));
            tracep->chgBit(oldp+2144,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2145,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+2146,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+2147,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+2148,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4)))))));
            tracep->chgBit(oldp+2149,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2150,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+2151,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+2152,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+2153,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2154,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2155,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+2156,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+2157,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+2158,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5)))))));
            tracep->chgBit(oldp+2159,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2160,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+2161,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+2162,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+2163,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2164,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+2165,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+2166,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+2167,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+2168,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6)))))));
            tracep->chgBit(oldp+2169,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+2170,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [5U]),33);
            tracep->chgSData(oldp+2172,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [4U]),11);
            tracep->chgCData(oldp+2173,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [4U]),7);
            tracep->chgCData(oldp+2174,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [4U]),5);
            tracep->chgCData(oldp+2175,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [4U]),3);
            tracep->chgCData(oldp+2176,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [4U]),2);
            tracep->chgCData(oldp+2177,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [4U]),2);
            tracep->chgBit(oldp+2178,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [4U]));
            tracep->chgSData(oldp+2179,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+2180,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+2181,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+2182,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+2183,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+2184,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+2185,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2186,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2187,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+2188,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+2189,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+2190,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+2191,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+2192,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+2193,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+2194,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+2195,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+2196,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+2197,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+2198,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+2199,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+2200,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+2201,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+2202,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+2203,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+2204,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+2205,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+2206,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+2207,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+2208,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+2209,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [5U]))));
            tracep->chgBit(oldp+2210,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2211,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2212,((1U & ((((IData)(
                                                       vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [5U]) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 1U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 1U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [5U] 
                                                            >> 2U)))) 
                                             | ((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U]) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [5U] 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+2213,((1U & (((IData)(
                                                      vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [5U]) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 1U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 2U))))));
            tracep->chgBit(oldp+2214,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2215,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2216,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2217,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [5U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [5U] 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+2218,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [5U] 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 4U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 5U))))));
            tracep->chgBit(oldp+2219,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2220,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2221,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2222,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [5U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [5U] 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+2223,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [5U] 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 7U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 8U))))));
            tracep->chgBit(oldp+2224,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2225,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2226,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2227,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [5U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [5U] 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+2228,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [5U] 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0xaU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+2229,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2230,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2231,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2232,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0xdU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0xdU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [5U] 
                                                            >> 0xeU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0xcU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [5U] 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+2233,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [5U] 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0xdU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+2234,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2235,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2236,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2237,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0x10U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0x10U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [5U] 
                                                            >> 0x11U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0xfU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [5U] 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+2238,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [5U] 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0x10U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+2239,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2240,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2241,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2242,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0x13U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0x13U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [5U] 
                                                            >> 0x14U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0x12U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [5U] 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+2243,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [5U] 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0x13U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+2244,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2245,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2246,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2247,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0x16U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0x16U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [5U] 
                                                            >> 0x17U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0x15U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [5U] 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+2248,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [5U] 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0x16U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+2249,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2250,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+2251,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+2252,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0x19U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0x19U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [5U] 
                                                            >> 0x1aU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0x18U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [5U] 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+2253,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [5U] 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0x19U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+2254,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+2255,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+2256,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+2257,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0x1cU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0x1cU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [5U] 
                                                            >> 0x1dU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0x1bU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [5U] 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+2258,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [5U] 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0x1cU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+2259,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+2260,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+2261,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+2262,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0x1fU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [5U] 
                                                          >> 0x1fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [5U] 
                                                            >> 0x20U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0x1eU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [5U] 
                                                           >> 0x20U)))))));
            tracep->chgBit(oldp+2263,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [5U] 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [5U] 
                                                         >> 0x1fU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [5U] 
                                                        >> 0x20U))))));
            tracep->chgBit(oldp+2264,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+2265,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+2266,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+2267,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2268,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2269,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+2270,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+2271,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+2272,((1U & (((0x18U 
                                               == (0x18U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2273,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2274,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+2275,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+2276,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+2277,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2278,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2279,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+2280,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2281,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2282,((1U & (((0x600U 
                                               == (0x600U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2283,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2284,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2285,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2286,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2287,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2288,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2289,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2290,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2291,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2292,((1U & (((0x18000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x30000U 
                                                 == 
                                                 (0x30000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2293,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2294,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2295,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2296,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2297,((1U & (((0xc0000U 
                                               == (0xc0000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x180000U 
                                                 == 
                                                 (0x180000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2298,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2299,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+2300,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+2301,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+2302,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2303,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2304,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+2305,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+2306,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+2307,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+2308,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2309,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+2310,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+2311,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+2312,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+2313,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2314,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+2315,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2316,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2317,((1U & (((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+2318,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2319,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2320,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2321,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2322,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+2323,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2324,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+2325,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+2326,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+2327,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2328,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2329,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+2330,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+2331,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+2332,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4)))))));
            tracep->chgBit(oldp+2333,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2334,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+2335,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+2336,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+2337,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4)))))));
            tracep->chgBit(oldp+2338,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2339,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+2340,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+2341,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+2342,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2343,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2344,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+2345,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+2346,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+2347,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5)))))));
            tracep->chgBit(oldp+2348,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2349,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+2350,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+2351,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+2352,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2353,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+2354,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+2355,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+2356,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+2357,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6)))))));
            tracep->chgBit(oldp+2358,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+2359,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [6U]),33);
            tracep->chgSData(oldp+2361,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [5U]),11);
            tracep->chgCData(oldp+2362,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [5U]),7);
            tracep->chgCData(oldp+2363,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [5U]),5);
            tracep->chgCData(oldp+2364,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [5U]),3);
            tracep->chgCData(oldp+2365,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [5U]),2);
            tracep->chgCData(oldp+2366,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [5U]),2);
            tracep->chgBit(oldp+2367,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [5U]));
            tracep->chgSData(oldp+2368,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+2369,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+2370,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+2371,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+2372,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+2373,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+2374,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2375,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2376,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+2377,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+2378,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+2379,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+2380,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+2381,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+2382,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+2383,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+2384,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+2385,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+2386,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+2387,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+2388,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+2389,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+2390,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+2391,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+2392,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+2393,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+2394,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+2395,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+2396,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+2397,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+2398,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [6U]))));
            tracep->chgBit(oldp+2399,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2400,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2401,((1U & ((((IData)(
                                                       vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [6U]) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 1U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 1U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [6U] 
                                                            >> 2U)))) 
                                             | ((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U]) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [6U] 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+2402,((1U & (((IData)(
                                                      vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [6U]) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 1U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 2U))))));
            tracep->chgBit(oldp+2403,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2404,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2405,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2406,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [6U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [6U] 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+2407,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [6U] 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 4U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 5U))))));
            tracep->chgBit(oldp+2408,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2409,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2410,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2411,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [6U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [6U] 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+2412,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [6U] 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 7U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 8U))))));
            tracep->chgBit(oldp+2413,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2414,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2415,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2416,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [6U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [6U] 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+2417,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [6U] 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0xaU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+2418,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2419,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2420,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2421,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0xdU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0xdU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [6U] 
                                                            >> 0xeU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0xcU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [6U] 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+2422,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [6U] 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0xdU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+2423,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2424,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2425,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2426,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0x10U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0x10U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [6U] 
                                                            >> 0x11U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0xfU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [6U] 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+2427,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [6U] 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0x10U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+2428,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2429,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2430,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2431,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0x13U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0x13U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [6U] 
                                                            >> 0x14U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0x12U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [6U] 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+2432,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [6U] 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0x13U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+2433,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2434,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2435,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2436,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0x16U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0x16U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [6U] 
                                                            >> 0x17U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0x15U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [6U] 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+2437,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [6U] 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0x16U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+2438,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2439,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+2440,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+2441,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0x19U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0x19U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [6U] 
                                                            >> 0x1aU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0x18U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [6U] 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+2442,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [6U] 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0x19U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+2443,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+2444,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+2445,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+2446,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0x1cU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0x1cU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [6U] 
                                                            >> 0x1dU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0x1bU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [6U] 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+2447,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [6U] 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0x1cU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+2448,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+2449,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+2450,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+2451,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0x1fU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [6U] 
                                                          >> 0x1fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [6U] 
                                                            >> 0x20U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0x1eU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [6U] 
                                                           >> 0x20U)))))));
            tracep->chgBit(oldp+2452,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [6U] 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [6U] 
                                                         >> 0x1fU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [6U] 
                                                        >> 0x20U))))));
            tracep->chgBit(oldp+2453,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+2454,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+2455,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+2456,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2457,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2458,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+2459,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+2460,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+2461,((1U & (((0x18U 
                                               == (0x18U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2462,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2463,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+2464,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+2465,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+2466,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2467,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2468,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+2469,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2470,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2471,((1U & (((0x600U 
                                               == (0x600U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2472,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2473,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2474,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2475,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2476,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2477,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2478,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2479,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2480,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2481,((1U & (((0x18000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x30000U 
                                                 == 
                                                 (0x30000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2482,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2483,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2484,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2485,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2486,((1U & (((0xc0000U 
                                               == (0xc0000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x180000U 
                                                 == 
                                                 (0x180000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2487,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2488,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+2489,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+2490,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+2491,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2492,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2493,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+2494,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+2495,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+2496,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+2497,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2498,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+2499,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+2500,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+2501,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+2502,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2503,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+2504,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2505,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2506,((1U & (((0x600U 
                                               == (0x600U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+2507,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2508,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2509,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2510,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2511,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3)))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3)))))));
            tracep->chgBit(oldp+2512,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2513,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+2514,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+2515,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+2516,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2517,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2518,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+2519,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+2520,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+2521,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4)))))));
            tracep->chgBit(oldp+2522,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2523,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+2524,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+2525,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+2526,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4))) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4)))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4)))))));
            tracep->chgBit(oldp+2527,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2528,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+2529,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+2530,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+2531,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2532,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2533,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+2534,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+2535,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+2536,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5)))))));
            tracep->chgBit(oldp+2537,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2538,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+2539,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+2540,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+2541,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2542,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+2543,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+2544,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+2545,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+2546,((1U & (((0x18U 
                                               == (0x18U 
                                                   & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6))) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6)))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6)))))));
            tracep->chgBit(oldp+2547,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+2548,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [7U]),33);
            tracep->chgSData(oldp+2550,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [6U]),11);
            tracep->chgCData(oldp+2551,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [6U]),7);
            tracep->chgCData(oldp+2552,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [6U]),5);
            tracep->chgCData(oldp+2553,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [6U]),3);
            tracep->chgCData(oldp+2554,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [6U]),2);
            tracep->chgCData(oldp+2555,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [6U]),2);
            tracep->chgBit(oldp+2556,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [6U]));
            tracep->chgSData(oldp+2557,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+2558,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+2559,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+2560,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+2561,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+2562,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+2563,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2564,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2565,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+2566,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+2567,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+2568,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+2569,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+2570,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+2571,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+2572,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+2573,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+2574,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+2575,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+2576,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+2577,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+2578,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+2579,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+2580,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+2581,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+2582,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+2583,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+2584,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+2585,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+2586,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+2587,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [7U]))));
            tracep->chgBit(oldp+2588,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2589,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2590,((1U & ((((IData)(
                                                       vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [7U]) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 1U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 1U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [7U] 
                                                            >> 2U)))) 
                                             | ((IData)(
                                                        vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U]) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [7U] 
                                                           >> 2U)))))));
            tracep->chgBit(oldp+2591,((1U & (((IData)(
                                                      vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                      [7U]) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 1U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 2U))))));
            tracep->chgBit(oldp+2592,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2593,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2594,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2595,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 3U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 4U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 4U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [7U] 
                                                            >> 5U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [7U] 
                                                           >> 5U)))))));
            tracep->chgBit(oldp+2596,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [7U] 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 4U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 5U))))));
            tracep->chgBit(oldp+2597,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2598,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2599,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2600,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 6U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 7U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 7U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [7U] 
                                                            >> 8U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [7U] 
                                                           >> 8U)))))));
            tracep->chgBit(oldp+2601,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [7U] 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 7U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 8U))))));
            tracep->chgBit(oldp+2602,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2603,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2604,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2605,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 9U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0xaU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0xaU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [7U] 
                                                            >> 0xbU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [7U] 
                                                           >> 0xbU)))))));
            tracep->chgBit(oldp+2606,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [7U] 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0xaU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0xbU))))));
            tracep->chgBit(oldp+2607,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2608,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2609,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2610,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0xcU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0xdU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0xdU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [7U] 
                                                            >> 0xeU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0xcU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [7U] 
                                                           >> 0xeU)))))));
            tracep->chgBit(oldp+2611,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [7U] 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0xdU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0xeU))))));
            tracep->chgBit(oldp+2612,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2613,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2614,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2615,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0xfU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0x10U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0x10U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [7U] 
                                                            >> 0x11U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0xfU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [7U] 
                                                           >> 0x11U)))))));
            tracep->chgBit(oldp+2616,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [7U] 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0x10U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0x11U))))));
            tracep->chgBit(oldp+2617,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2618,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2619,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2620,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0x12U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0x13U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0x13U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [7U] 
                                                            >> 0x14U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0x12U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [7U] 
                                                           >> 0x14U)))))));
            tracep->chgBit(oldp+2621,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [7U] 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0x13U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0x14U))))));
            tracep->chgBit(oldp+2622,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2623,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2624,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2625,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0x15U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0x16U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0x16U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [7U] 
                                                            >> 0x17U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0x15U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [7U] 
                                                           >> 0x17U)))))));
            tracep->chgBit(oldp+2626,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [7U] 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0x16U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0x17U))))));
            tracep->chgBit(oldp+2627,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2628,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+2629,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x1aU)))));
        }
    }
}
