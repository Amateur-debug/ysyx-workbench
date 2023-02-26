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
    VlWide<4>/*127:0*/ __Vtemp5752;
    VlWide<4>/*127:0*/ __Vtemp5757;
    VlWide<4>/*127:0*/ __Vtemp5758;
    VlWide<4>/*127:0*/ __Vtemp5759;
    VlWide<4>/*127:0*/ __Vtemp5761;
    VlWide<4>/*127:0*/ __Vtemp5762;
    VlWide<4>/*127:0*/ __Vtemp5764;
    VlWide<4>/*127:0*/ __Vtemp5769;
    VlWide<4>/*127:0*/ __Vtemp5770;
    VlWide<4>/*127:0*/ __Vtemp5771;
    VlWide<4>/*127:0*/ __Vtemp5773;
    VlWide<4>/*127:0*/ __Vtemp5774;
    VlWide<4>/*127:0*/ __Vtemp5776;
    VlWide<4>/*127:0*/ __Vtemp5781;
    VlWide<4>/*127:0*/ __Vtemp5782;
    VlWide<4>/*127:0*/ __Vtemp5783;
    VlWide<4>/*127:0*/ __Vtemp5785;
    VlWide<4>/*127:0*/ __Vtemp5786;
    VlWide<4>/*127:0*/ __Vtemp5788;
    VlWide<4>/*127:0*/ __Vtemp5793;
    VlWide<4>/*127:0*/ __Vtemp5794;
    VlWide<4>/*127:0*/ __Vtemp5795;
    VlWide<4>/*127:0*/ __Vtemp5797;
    VlWide<4>/*127:0*/ __Vtemp5798;
    VlWide<4>/*127:0*/ __Vtemp5800;
    VlWide<4>/*127:0*/ __Vtemp5805;
    VlWide<4>/*127:0*/ __Vtemp5806;
    VlWide<4>/*127:0*/ __Vtemp5807;
    VlWide<4>/*127:0*/ __Vtemp5809;
    VlWide<4>/*127:0*/ __Vtemp5810;
    VlWide<4>/*127:0*/ __Vtemp5812;
    VlWide<4>/*127:0*/ __Vtemp5817;
    VlWide<4>/*127:0*/ __Vtemp5818;
    VlWide<4>/*127:0*/ __Vtemp5819;
    VlWide<4>/*127:0*/ __Vtemp5821;
    VlWide<4>/*127:0*/ __Vtemp5822;
    VlWide<4>/*127:0*/ __Vtemp5824;
    VlWide<4>/*127:0*/ __Vtemp5829;
    VlWide<4>/*127:0*/ __Vtemp5830;
    VlWide<4>/*127:0*/ __Vtemp5831;
    VlWide<4>/*127:0*/ __Vtemp5833;
    VlWide<4>/*127:0*/ __Vtemp5834;
    VlWide<4>/*127:0*/ __Vtemp5836;
    VlWide<4>/*127:0*/ __Vtemp5841;
    VlWide<4>/*127:0*/ __Vtemp5842;
    VlWide<4>/*127:0*/ __Vtemp5843;
    VlWide<4>/*127:0*/ __Vtemp5845;
    VlWide<4>/*127:0*/ __Vtemp5846;
    VlWide<4>/*127:0*/ __Vtemp5848;
    VlWide<4>/*127:0*/ __Vtemp5853;
    VlWide<4>/*127:0*/ __Vtemp5854;
    VlWide<4>/*127:0*/ __Vtemp5855;
    VlWide<4>/*127:0*/ __Vtemp5857;
    VlWide<4>/*127:0*/ __Vtemp5858;
    VlWide<4>/*127:0*/ __Vtemp5860;
    VlWide<4>/*127:0*/ __Vtemp5865;
    VlWide<4>/*127:0*/ __Vtemp5866;
    VlWide<4>/*127:0*/ __Vtemp5867;
    VlWide<4>/*127:0*/ __Vtemp5869;
    VlWide<4>/*127:0*/ __Vtemp5870;
    VlWide<4>/*127:0*/ __Vtemp5872;
    VlWide<4>/*127:0*/ __Vtemp5877;
    VlWide<4>/*127:0*/ __Vtemp5878;
    VlWide<4>/*127:0*/ __Vtemp5879;
    VlWide<4>/*127:0*/ __Vtemp5881;
    VlWide<4>/*127:0*/ __Vtemp5882;
    VlWide<4>/*127:0*/ __Vtemp5884;
    VlWide<4>/*127:0*/ __Vtemp5889;
    VlWide<4>/*127:0*/ __Vtemp5890;
    VlWide<4>/*127:0*/ __Vtemp5891;
    VlWide<4>/*127:0*/ __Vtemp5893;
    VlWide<4>/*127:0*/ __Vtemp5894;
    VlWide<4>/*127:0*/ __Vtemp5896;
    VlWide<4>/*127:0*/ __Vtemp5901;
    VlWide<4>/*127:0*/ __Vtemp5902;
    VlWide<4>/*127:0*/ __Vtemp5903;
    VlWide<4>/*127:0*/ __Vtemp5905;
    VlWide<4>/*127:0*/ __Vtemp5906;
    VlWide<4>/*127:0*/ __Vtemp5908;
    VlWide<4>/*127:0*/ __Vtemp5913;
    VlWide<4>/*127:0*/ __Vtemp5914;
    VlWide<4>/*127:0*/ __Vtemp5915;
    VlWide<4>/*127:0*/ __Vtemp5917;
    VlWide<4>/*127:0*/ __Vtemp5918;
    VlWide<4>/*127:0*/ __Vtemp5920;
    VlWide<4>/*127:0*/ __Vtemp5925;
    VlWide<4>/*127:0*/ __Vtemp5926;
    VlWide<4>/*127:0*/ __Vtemp5927;
    VlWide<4>/*127:0*/ __Vtemp5929;
    VlWide<4>/*127:0*/ __Vtemp5930;
    VlWide<4>/*127:0*/ __Vtemp5932;
    VlWide<4>/*127:0*/ __Vtemp5937;
    VlWide<4>/*127:0*/ __Vtemp5938;
    VlWide<4>/*127:0*/ __Vtemp5939;
    VlWide<4>/*127:0*/ __Vtemp5941;
    VlWide<4>/*127:0*/ __Vtemp5942;
    VlWide<4>/*127:0*/ __Vtemp5944;
    VlWide<4>/*127:0*/ __Vtemp5949;
    VlWide<4>/*127:0*/ __Vtemp5950;
    VlWide<4>/*127:0*/ __Vtemp5951;
    VlWide<4>/*127:0*/ __Vtemp5953;
    VlWide<4>/*127:0*/ __Vtemp5954;
    VlWide<4>/*127:0*/ __Vtemp5956;
    VlWide<4>/*127:0*/ __Vtemp5961;
    VlWide<4>/*127:0*/ __Vtemp5962;
    VlWide<4>/*127:0*/ __Vtemp5963;
    VlWide<4>/*127:0*/ __Vtemp5965;
    VlWide<4>/*127:0*/ __Vtemp5966;
    VlWide<4>/*127:0*/ __Vtemp5968;
    VlWide<4>/*127:0*/ __Vtemp5973;
    VlWide<4>/*127:0*/ __Vtemp5974;
    VlWide<4>/*127:0*/ __Vtemp5975;
    VlWide<4>/*127:0*/ __Vtemp5977;
    VlWide<4>/*127:0*/ __Vtemp5978;
    VlWide<4>/*127:0*/ __Vtemp5980;
    VlWide<4>/*127:0*/ __Vtemp5985;
    VlWide<4>/*127:0*/ __Vtemp5986;
    VlWide<4>/*127:0*/ __Vtemp5987;
    VlWide<4>/*127:0*/ __Vtemp5989;
    VlWide<4>/*127:0*/ __Vtemp5990;
    VlWide<4>/*127:0*/ __Vtemp5992;
    VlWide<4>/*127:0*/ __Vtemp5997;
    VlWide<4>/*127:0*/ __Vtemp5998;
    VlWide<4>/*127:0*/ __Vtemp5999;
    VlWide<4>/*127:0*/ __Vtemp6001;
    VlWide<4>/*127:0*/ __Vtemp6002;
    VlWide<4>/*127:0*/ __Vtemp6004;
    VlWide<4>/*127:0*/ __Vtemp6009;
    VlWide<4>/*127:0*/ __Vtemp6010;
    VlWide<4>/*127:0*/ __Vtemp6011;
    VlWide<4>/*127:0*/ __Vtemp6013;
    VlWide<4>/*127:0*/ __Vtemp6014;
    VlWide<4>/*127:0*/ __Vtemp6016;
    VlWide<4>/*127:0*/ __Vtemp6021;
    VlWide<4>/*127:0*/ __Vtemp6022;
    VlWide<4>/*127:0*/ __Vtemp6023;
    VlWide<4>/*127:0*/ __Vtemp6025;
    VlWide<4>/*127:0*/ __Vtemp6026;
    VlWide<4>/*127:0*/ __Vtemp6028;
    VlWide<4>/*127:0*/ __Vtemp6033;
    VlWide<4>/*127:0*/ __Vtemp6034;
    VlWide<4>/*127:0*/ __Vtemp6035;
    VlWide<4>/*127:0*/ __Vtemp6037;
    VlWide<4>/*127:0*/ __Vtemp6038;
    VlWide<4>/*127:0*/ __Vtemp6040;
    VlWide<4>/*127:0*/ __Vtemp6045;
    VlWide<4>/*127:0*/ __Vtemp6046;
    VlWide<4>/*127:0*/ __Vtemp6047;
    VlWide<4>/*127:0*/ __Vtemp6049;
    VlWide<4>/*127:0*/ __Vtemp6050;
    VlWide<4>/*127:0*/ __Vtemp6052;
    VlWide<4>/*127:0*/ __Vtemp6057;
    VlWide<4>/*127:0*/ __Vtemp6058;
    VlWide<4>/*127:0*/ __Vtemp6059;
    VlWide<4>/*127:0*/ __Vtemp6061;
    VlWide<4>/*127:0*/ __Vtemp6062;
    VlWide<4>/*127:0*/ __Vtemp6064;
    VlWide<4>/*127:0*/ __Vtemp6069;
    VlWide<4>/*127:0*/ __Vtemp6070;
    VlWide<4>/*127:0*/ __Vtemp6071;
    VlWide<4>/*127:0*/ __Vtemp6073;
    VlWide<4>/*127:0*/ __Vtemp6074;
    VlWide<4>/*127:0*/ __Vtemp6076;
    VlWide<4>/*127:0*/ __Vtemp6081;
    VlWide<4>/*127:0*/ __Vtemp6082;
    VlWide<4>/*127:0*/ __Vtemp6083;
    VlWide<4>/*127:0*/ __Vtemp6085;
    VlWide<4>/*127:0*/ __Vtemp6086;
    VlWide<4>/*127:0*/ __Vtemp6088;
    VlWide<4>/*127:0*/ __Vtemp6093;
    VlWide<4>/*127:0*/ __Vtemp6094;
    VlWide<4>/*127:0*/ __Vtemp6095;
    VlWide<4>/*127:0*/ __Vtemp6097;
    VlWide<4>/*127:0*/ __Vtemp6098;
    VlWide<4>/*127:0*/ __Vtemp6100;
    VlWide<4>/*127:0*/ __Vtemp6105;
    VlWide<4>/*127:0*/ __Vtemp6106;
    VlWide<4>/*127:0*/ __Vtemp6107;
    VlWide<4>/*127:0*/ __Vtemp6109;
    VlWide<4>/*127:0*/ __Vtemp6110;
    VlWide<4>/*127:0*/ __Vtemp6112;
    VlWide<4>/*127:0*/ __Vtemp6117;
    VlWide<4>/*127:0*/ __Vtemp6118;
    VlWide<4>/*127:0*/ __Vtemp6119;
    VlWide<4>/*127:0*/ __Vtemp6121;
    VlWide<4>/*127:0*/ __Vtemp6122;
    VlWide<4>/*127:0*/ __Vtemp6124;
    VlWide<4>/*127:0*/ __Vtemp6129;
    VlWide<4>/*127:0*/ __Vtemp6130;
    VlWide<4>/*127:0*/ __Vtemp6131;
    VlWide<4>/*127:0*/ __Vtemp6133;
    VlWide<4>/*127:0*/ __Vtemp6134;
    VlWide<4>/*127:0*/ __Vtemp6136;
    VlWide<4>/*127:0*/ __Vtemp6141;
    VlWide<3>/*95:0*/ __Vtemp6142;
    VlWide<3>/*95:0*/ __Vtemp6143;
    VlWide<3>/*95:0*/ __Vtemp6146;
    VlWide<3>/*95:0*/ __Vtemp6147;
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
            tracep->chgBit(oldp+18,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
                                     & (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
            tracep->chgBit(oldp+19,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid));
            tracep->chgBit(oldp+20,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wlast));
            tracep->chgBit(oldp+21,((7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+22,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                     & ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                         ? (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                         : (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))))));
            tracep->chgCData(oldp+23,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                        ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                            ? 0U : 1U)
                                        : 0U)),4);
            tracep->chgBit(oldp+24,(((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                      ? (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                      : ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                         & (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))))));
            tracep->chgBit(oldp+25,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_trap));
            tracep->chgBit(oldp+26,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF2_trap));
            tracep->chgBit(oldp+27,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap));
            tracep->chgBit(oldp+28,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict));
            tracep->chgBit(oldp+29,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap));
            tracep->chgBit(oldp+30,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict));
            tracep->chgBit(oldp+31,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap));
            tracep->chgBit(oldp+32,((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))));
            tracep->chgBit(oldp+33,((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))));
            tracep->chgQData(oldp+34,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_pc_out),64);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_AXI_rdata_out),64);
            tracep->chgBit(oldp+38,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit1_out));
            tracep->chgBit(oldp+39,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit2_out));
            tracep->chgBit(oldp+40,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit3_out));
            tracep->chgBit(oldp+41,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit4_out));
            tracep->chgBit(oldp+42,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit5_out));
            tracep->chgBit(oldp+43,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit6_out));
            tracep->chgBit(oldp+44,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit7_out));
            tracep->chgBit(oldp+45,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_hit8_out));
            tracep->chgBit(oldp+46,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_valid_out));
            tracep->chgCData(oldp+47,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2reg_trap_out),4);
            tracep->chgBit(oldp+48,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out));
            tracep->chgCData(oldp+49,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out),4);
            tracep->chgIData(oldp+50,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out),32);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out),64);
            tracep->chgCData(oldp+53,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 7U))),5);
            tracep->chgCData(oldp+54,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+55,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 0x14U))),5);
            tracep->chgSData(oldp+56,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                       >> 0x14U)),12);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm),64);
            tracep->chgQData(oldp+59,((QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                          >> 0xfU))))),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc),64);
            tracep->chgBit(oldp+63,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl));
            tracep->chgCData(oldp+64,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl),5);
            tracep->chgCData(oldp+65,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src),3);
            tracep->chgCData(oldp+66,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_MEM_ctrl),4);
            tracep->chgCData(oldp+67,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl),4);
            tracep->chgBit(oldp+68,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out));
            tracep->chgCData(oldp+69,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out),4);
            tracep->chgCData(oldp+70,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rd_out),5);
            tracep->chgCData(oldp+71,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out),5);
            tracep->chgCData(oldp+72,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out),5);
            tracep->chgSData(oldp+73,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out),12);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_imm_out),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_zimm_out),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_pc_out),64);
            tracep->chgCData(oldp+80,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out),5);
            tracep->chgCData(oldp+81,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out),3);
            tracep->chgCData(oldp+82,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_MEM_ctrl_out),4);
            tracep->chgCData(oldp+83,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out),4);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out),64);
            tracep->chgBit(oldp+86,((1U & ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state))
                                            ? (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                                  & (0U 
                                                     == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                                 & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap))) 
                                                & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict)))
                                                ? (
                                                   (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__multiplication)) 
                                                   & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__division)))
                                                : (
                                                   (~ 
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
            tracep->chgBit(oldp+87,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out));
            tracep->chgCData(oldp+88,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out),4);
            tracep->chgCData(oldp+89,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out),5);
            tracep->chgCData(oldp+90,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs1_out),5);
            tracep->chgCData(oldp+91,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out),5);
            tracep->chgSData(oldp+92,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_csr_out),12);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_imm_out),64);
            tracep->chgQData(oldp+95,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_zimm_out),64);
            tracep->chgQData(oldp+97,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_pc_out),64);
            tracep->chgCData(oldp+99,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out),4);
            tracep->chgCData(oldp+100,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out),4);
            tracep->chgBit(oldp+101,((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+102,((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+103,((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+104,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out));
            tracep->chgCData(oldp+105,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out),4);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_MEM_out),64);
            tracep->chgCData(oldp+110,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out),5);
            tracep->chgCData(oldp+111,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out),5);
            tracep->chgSData(oldp+112,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out),12);
            tracep->chgQData(oldp+113,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_imm_out),64);
            tracep->chgQData(oldp+115,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out),64);
            tracep->chgQData(oldp+117,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out),64);
            tracep->chgCData(oldp+119,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out),4);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc),64);
            tracep->chgCData(oldp+124,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl),2);
            tracep->chgQData(oldp+125,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus),64);
            tracep->chgQData(oldp+127,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie),64);
            tracep->chgQData(oldp+129,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip),64);
            tracep->chgQData(oldp+131,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data),64);
            tracep->chgQData(oldp+133,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data),64);
            tracep->chgQData(oldp+135,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data),64);
            tracep->chgQData(oldp+137,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
                                       [vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out]),64);
            tracep->chgQData(oldp+139,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_csr_data),64);
            tracep->chgQData(oldp+141,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data),64);
            tracep->chgBit(oldp+143,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime 
                                      >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp)));
            tracep->chgBit(oldp+144,((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))));
            tracep->chgBit(oldp+145,((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))));
            tracep->chgBit(oldp+146,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bvalid));
            tracep->chgCData(oldp+147,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bid),4);
            tracep->chgBit(oldp+148,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rvalid));
            tracep->chgCData(oldp+149,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rid),4);
            tracep->chgQData(oldp+150,(((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
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
            tracep->chgBit(oldp+152,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rlast));
            tracep->chgCData(oldp+153,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bresp),2);
            tracep->chgBit(oldp+154,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                      & (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
            tracep->chgCData(oldp+155,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? 1U : 0U)),4);
            tracep->chgBit(oldp+156,(((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                      & (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
            tracep->chgBit(oldp+157,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_skip_difftets_out));
            tracep->chgCData(oldp+158,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state),3);
            tracep->chgQData(oldp+159,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata),64);
            tracep->chgBit(oldp+161,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie 
                                                    >> 7U)))));
            tracep->chgBit(oldp+162,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip 
                                                    >> 7U)))));
            tracep->chgBit(oldp+163,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgIData(oldp+164,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__r),32);
            tracep->chgIData(oldp+165,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__k),32);
            tracep->chgBit(oldp+166,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__state));
            tracep->chgWData(oldp+167,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram0_rdata),128);
            tracep->chgWData(oldp+171,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram1_rdata),128);
            tracep->chgWData(oldp+175,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram2_rdata),128);
            tracep->chgWData(oldp+179,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF2__DOT__sram3_rdata),128);
            tracep->chgCData(oldp+183,((0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)),7);
            tracep->chgCData(oldp+184,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+185,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x1aU)),6);
            tracep->chgCData(oldp+186,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+187,((0x3fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0x14U))),6);
            tracep->chgBit(oldp+188,((3U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+189,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state),2);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle),64);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2),64);
            tracep->chgBit(oldp+196,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__multiplication));
            tracep->chgBit(oldp+197,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__division));
            tracep->chgBit(oldp+198,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state)) 
                                      & (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                           & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap))) 
                                          & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict))) 
                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__multiplication)))));
            tracep->chgCData(oldp+199,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed),2);
            tracep->chgBit(oldp+200,((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__state))));
            tracep->chgQData(oldp+201,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_hi),64);
            tracep->chgQData(oldp+203,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_lo),64);
            tracep->chgBit(oldp+205,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state)) 
                                      & (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                           & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap))) 
                                          & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict))) 
                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__division)))));
            tracep->chgBit(oldp+206,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed));
            tracep->chgBit(oldp+207,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_divw));
            tracep->chgBit(oldp+208,((((0x20U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__state)) 
                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_divw)) 
                                      | (0x40U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__state)))));
            tracep->chgQData(oldp+209,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_positive)
                                         ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_out
                                         : (1ULL + 
                                            (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_out)))),64);
            tracep->chgQData(oldp+211,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_positive)
                                         ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_out
                                         : (1ULL + 
                                            (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_out)))),64);
            tracep->chgQData(oldp+213,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out),64);
            tracep->chgQData(oldp+215,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_remainder_out),64);
            tracep->chgWData(oldp+217,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand),128);
            tracep->chgWData(oldp+221,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier),66);
            tracep->chgQData(oldp+224,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c),33);
            tracep->chgWData(oldp+226,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src1),128);
            tracep->chgWData(oldp+230,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src2),128);
            tracep->chgIData(oldp+234,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__r),32);
            tracep->chgCData(oldp+235,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__state),3);
            tracep->chgCData(oldp+236,((6U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              << 1U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5752, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 1U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative) {
                __Vtemp5757[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U]);
                __Vtemp5757[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U]);
                __Vtemp5757[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U]);
                __Vtemp5757[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U]);
            } else {
                __Vtemp5757[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                                        ? (~ __Vtemp5752[0U])
                                        : 0U));
                __Vtemp5757[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                                        ? (~ __Vtemp5752[1U])
                                        : 0U));
                __Vtemp5757[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                                        ? (~ __Vtemp5752[2U])
                                        : 0U));
                __Vtemp5757[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                                        ? (~ __Vtemp5752[3U])
                                        : 0U));
            }
            tracep->chgWData(oldp+237,(__Vtemp5757),128);
            tracep->chgBit(oldp+241,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative) 
                                      | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)) 
                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)))));
            tracep->chgBit(oldp+242,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+243,((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U])));
            tracep->chgBit(oldp+244,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative));
            tracep->chgBit(oldp+245,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative));
            tracep->chgBit(oldp+246,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive));
            tracep->chgCData(oldp+247,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 1U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5758, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
            tracep->chgWData(oldp+248,(__Vtemp5758),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5759, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5761, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5762, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5764, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5769[0U] = (~ __Vtemp5759[0U]);
                __Vtemp5769[1U] = (~ __Vtemp5759[1U]);
                __Vtemp5769[2U] = (~ __Vtemp5759[2U]);
                __Vtemp5769[3U] = (~ __Vtemp5759[3U]);
            } else {
                __Vtemp5769[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5761[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5762[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5764[0U]
                                            : 0U)));
                __Vtemp5769[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5761[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5762[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5764[1U]
                                            : 0U)));
                __Vtemp5769[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5761[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5762[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5764[2U]
                                            : 0U)));
                __Vtemp5769[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5761[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5762[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5764[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+252,(__Vtemp5769),128);
            tracep->chgBit(oldp+256,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__2__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+257,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+258,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+259,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+260,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+261,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+262,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+263,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 3U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5770, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
            tracep->chgWData(oldp+264,(__Vtemp5770),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5771, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5773, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5774, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5776, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5781[0U] = (~ __Vtemp5771[0U]);
                __Vtemp5781[1U] = (~ __Vtemp5771[1U]);
                __Vtemp5781[2U] = (~ __Vtemp5771[2U]);
                __Vtemp5781[3U] = (~ __Vtemp5771[3U]);
            } else {
                __Vtemp5781[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5773[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5774[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5776[0U]
                                            : 0U)));
                __Vtemp5781[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5773[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5774[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5776[1U]
                                            : 0U)));
                __Vtemp5781[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5773[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5774[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5776[2U]
                                            : 0U)));
                __Vtemp5781[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5773[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5774[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5776[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+268,(__Vtemp5781),128);
            tracep->chgBit(oldp+272,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__4__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+273,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+274,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+275,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+276,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+277,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+278,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+279,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 5U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5782, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
            tracep->chgWData(oldp+280,(__Vtemp5782),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5783, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5785, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5786, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5788, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5793[0U] = (~ __Vtemp5783[0U]);
                __Vtemp5793[1U] = (~ __Vtemp5783[1U]);
                __Vtemp5793[2U] = (~ __Vtemp5783[2U]);
                __Vtemp5793[3U] = (~ __Vtemp5783[3U]);
            } else {
                __Vtemp5793[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5785[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5786[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5788[0U]
                                            : 0U)));
                __Vtemp5793[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5785[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5786[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5788[1U]
                                            : 0U)));
                __Vtemp5793[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5785[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5786[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5788[2U]
                                            : 0U)));
                __Vtemp5793[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5785[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5786[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5788[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+284,(__Vtemp5793),128);
            tracep->chgBit(oldp+288,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__6__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+289,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+290,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+291,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+292,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+293,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+294,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+295,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 7U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5794, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
            tracep->chgWData(oldp+296,(__Vtemp5794),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5795, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5797, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5798, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5800, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5805[0U] = (~ __Vtemp5795[0U]);
                __Vtemp5805[1U] = (~ __Vtemp5795[1U]);
                __Vtemp5805[2U] = (~ __Vtemp5795[2U]);
                __Vtemp5805[3U] = (~ __Vtemp5795[3U]);
            } else {
                __Vtemp5805[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5797[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5798[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5800[0U]
                                            : 0U)));
                __Vtemp5805[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5797[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5798[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5800[1U]
                                            : 0U)));
                __Vtemp5805[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5797[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5798[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5800[2U]
                                            : 0U)));
                __Vtemp5805[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5797[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5798[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5800[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+300,(__Vtemp5805),128);
            tracep->chgBit(oldp+304,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__8__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+305,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 9U))));
            tracep->chgBit(oldp+306,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+307,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+308,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+309,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+310,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+311,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 9U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5806, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
            tracep->chgWData(oldp+312,(__Vtemp5806),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5807, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5809, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5810, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5812, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5817[0U] = (~ __Vtemp5807[0U]);
                __Vtemp5817[1U] = (~ __Vtemp5807[1U]);
                __Vtemp5817[2U] = (~ __Vtemp5807[2U]);
                __Vtemp5817[3U] = (~ __Vtemp5807[3U]);
            } else {
                __Vtemp5817[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5809[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5810[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5812[0U]
                                            : 0U)));
                __Vtemp5817[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5809[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5810[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5812[1U]
                                            : 0U)));
                __Vtemp5817[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5809[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5810[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5812[2U]
                                            : 0U)));
                __Vtemp5817[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5809[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5810[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5812[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+316,(__Vtemp5817),128);
            tracep->chgBit(oldp+320,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__10__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+321,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+322,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+323,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+324,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+325,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+326,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+327,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0xbU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5818, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
            tracep->chgWData(oldp+328,(__Vtemp5818),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5819, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5821, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5822, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5824, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5829[0U] = (~ __Vtemp5819[0U]);
                __Vtemp5829[1U] = (~ __Vtemp5819[1U]);
                __Vtemp5829[2U] = (~ __Vtemp5819[2U]);
                __Vtemp5829[3U] = (~ __Vtemp5819[3U]);
            } else {
                __Vtemp5829[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5821[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5822[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5824[0U]
                                            : 0U)));
                __Vtemp5829[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5821[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5822[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5824[1U]
                                            : 0U)));
                __Vtemp5829[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5821[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5822[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5824[2U]
                                            : 0U)));
                __Vtemp5829[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5821[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5822[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5824[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+332,(__Vtemp5829),128);
            tracep->chgBit(oldp+336,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__12__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+337,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+338,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+339,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+340,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+341,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+342,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+343,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0xdU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5830, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
            tracep->chgWData(oldp+344,(__Vtemp5830),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5831, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5833, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5834, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5836, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5841[0U] = (~ __Vtemp5831[0U]);
                __Vtemp5841[1U] = (~ __Vtemp5831[1U]);
                __Vtemp5841[2U] = (~ __Vtemp5831[2U]);
                __Vtemp5841[3U] = (~ __Vtemp5831[3U]);
            } else {
                __Vtemp5841[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5833[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5834[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5836[0U]
                                            : 0U)));
                __Vtemp5841[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5833[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5834[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5836[1U]
                                            : 0U)));
                __Vtemp5841[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5833[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5834[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5836[2U]
                                            : 0U)));
                __Vtemp5841[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5833[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5834[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5836[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+348,(__Vtemp5841),128);
            tracep->chgBit(oldp+352,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__14__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+353,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+354,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+355,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+356,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+357,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+358,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+359,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0xfU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5842, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
            tracep->chgWData(oldp+360,(__Vtemp5842),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5843, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5845, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5846, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5848, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5853[0U] = (~ __Vtemp5843[0U]);
                __Vtemp5853[1U] = (~ __Vtemp5843[1U]);
                __Vtemp5853[2U] = (~ __Vtemp5843[2U]);
                __Vtemp5853[3U] = (~ __Vtemp5843[3U]);
            } else {
                __Vtemp5853[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5845[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5846[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5848[0U]
                                            : 0U)));
                __Vtemp5853[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5845[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5846[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5848[1U]
                                            : 0U)));
                __Vtemp5853[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5845[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5846[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5848[2U]
                                            : 0U)));
                __Vtemp5853[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5845[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5846[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5848[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+364,(__Vtemp5853),128);
            tracep->chgBit(oldp+368,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__16__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+369,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+370,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+371,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+372,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+373,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+374,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+375,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x11U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5854, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
            tracep->chgWData(oldp+376,(__Vtemp5854),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5855, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5857, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5858, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5860, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5865[0U] = (~ __Vtemp5855[0U]);
                __Vtemp5865[1U] = (~ __Vtemp5855[1U]);
                __Vtemp5865[2U] = (~ __Vtemp5855[2U]);
                __Vtemp5865[3U] = (~ __Vtemp5855[3U]);
            } else {
                __Vtemp5865[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5857[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5858[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5860[0U]
                                            : 0U)));
                __Vtemp5865[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5857[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5858[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5860[1U]
                                            : 0U)));
                __Vtemp5865[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5857[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5858[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5860[2U]
                                            : 0U)));
                __Vtemp5865[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5857[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5858[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5860[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+380,(__Vtemp5865),128);
            tracep->chgBit(oldp+384,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__18__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+385,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+386,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+387,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+388,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+389,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+390,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+391,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x13U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5866, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
            tracep->chgWData(oldp+392,(__Vtemp5866),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5867, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5869, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5870, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5872, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5877[0U] = (~ __Vtemp5867[0U]);
                __Vtemp5877[1U] = (~ __Vtemp5867[1U]);
                __Vtemp5877[2U] = (~ __Vtemp5867[2U]);
                __Vtemp5877[3U] = (~ __Vtemp5867[3U]);
            } else {
                __Vtemp5877[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5869[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5870[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5872[0U]
                                            : 0U)));
                __Vtemp5877[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5869[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5870[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5872[1U]
                                            : 0U)));
                __Vtemp5877[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5869[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5870[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5872[2U]
                                            : 0U)));
                __Vtemp5877[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5869[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5870[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5872[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+396,(__Vtemp5877),128);
            tracep->chgBit(oldp+400,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__20__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+401,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+402,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+403,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+404,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+405,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+406,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+407,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x15U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5878, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
            tracep->chgWData(oldp+408,(__Vtemp5878),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5879, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5881, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5882, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5884, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5889[0U] = (~ __Vtemp5879[0U]);
                __Vtemp5889[1U] = (~ __Vtemp5879[1U]);
                __Vtemp5889[2U] = (~ __Vtemp5879[2U]);
                __Vtemp5889[3U] = (~ __Vtemp5879[3U]);
            } else {
                __Vtemp5889[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5881[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5882[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5884[0U]
                                            : 0U)));
                __Vtemp5889[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5881[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5882[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5884[1U]
                                            : 0U)));
                __Vtemp5889[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5881[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5882[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5884[2U]
                                            : 0U)));
                __Vtemp5889[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5881[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5882[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5884[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+412,(__Vtemp5889),128);
            tracep->chgBit(oldp+416,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__22__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+417,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+418,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+419,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+420,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+421,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+422,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+423,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x17U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5890, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
            tracep->chgWData(oldp+424,(__Vtemp5890),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5891, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5893, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5894, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5896, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5901[0U] = (~ __Vtemp5891[0U]);
                __Vtemp5901[1U] = (~ __Vtemp5891[1U]);
                __Vtemp5901[2U] = (~ __Vtemp5891[2U]);
                __Vtemp5901[3U] = (~ __Vtemp5891[3U]);
            } else {
                __Vtemp5901[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5893[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5894[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5896[0U]
                                            : 0U)));
                __Vtemp5901[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5893[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5894[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5896[1U]
                                            : 0U)));
                __Vtemp5901[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5893[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5894[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5896[2U]
                                            : 0U)));
                __Vtemp5901[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5893[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5894[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5896[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+428,(__Vtemp5901),128);
            tracep->chgBit(oldp+432,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__24__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+433,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+434,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+435,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+436,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+437,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+438,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+439,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x19U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5902, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
            tracep->chgWData(oldp+440,(__Vtemp5902),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5903, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5905, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5906, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5908, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5913[0U] = (~ __Vtemp5903[0U]);
                __Vtemp5913[1U] = (~ __Vtemp5903[1U]);
                __Vtemp5913[2U] = (~ __Vtemp5903[2U]);
                __Vtemp5913[3U] = (~ __Vtemp5903[3U]);
            } else {
                __Vtemp5913[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5905[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5906[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5908[0U]
                                            : 0U)));
                __Vtemp5913[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5905[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5906[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5908[1U]
                                            : 0U)));
                __Vtemp5913[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5905[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5906[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5908[2U]
                                            : 0U)));
                __Vtemp5913[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5905[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5906[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5908[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+444,(__Vtemp5913),128);
            tracep->chgBit(oldp+448,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__26__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+449,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+450,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+451,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+452,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+453,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+454,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+455,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x1bU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5914, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
            tracep->chgWData(oldp+456,(__Vtemp5914),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5915, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5917, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5918, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5920, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5925[0U] = (~ __Vtemp5915[0U]);
                __Vtemp5925[1U] = (~ __Vtemp5915[1U]);
                __Vtemp5925[2U] = (~ __Vtemp5915[2U]);
                __Vtemp5925[3U] = (~ __Vtemp5915[3U]);
            } else {
                __Vtemp5925[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5917[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5918[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5920[0U]
                                            : 0U)));
                __Vtemp5925[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5917[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5918[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5920[1U]
                                            : 0U)));
                __Vtemp5925[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5917[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5918[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5920[2U]
                                            : 0U)));
                __Vtemp5925[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5917[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5918[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5920[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+460,(__Vtemp5925),128);
            tracep->chgBit(oldp+464,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__28__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+465,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+466,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+467,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+468,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+469,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+470,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+471,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                        >> 0x1dU)),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5926, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
            tracep->chgWData(oldp+472,(__Vtemp5926),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5927, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5929, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5930, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5932, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5937[0U] = (~ __Vtemp5927[0U]);
                __Vtemp5937[1U] = (~ __Vtemp5927[1U]);
                __Vtemp5937[2U] = (~ __Vtemp5927[2U]);
                __Vtemp5937[3U] = (~ __Vtemp5927[3U]);
            } else {
                __Vtemp5937[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5929[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5930[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5932[0U]
                                            : 0U)));
                __Vtemp5937[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5929[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5930[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5932[1U]
                                            : 0U)));
                __Vtemp5937[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5929[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5930[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5932[2U]
                                            : 0U)));
                __Vtemp5937[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5929[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5930[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5932[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+476,(__Vtemp5937),128);
            tracep->chgBit(oldp+480,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__30__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+481,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+482,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+483,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+484,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+485,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+486,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+487,((7U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                 >> 0x1fU)))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5938, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
            tracep->chgWData(oldp+488,(__Vtemp5938),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5939, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5941, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5942, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5944, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5949[0U] = (~ __Vtemp5939[0U]);
                __Vtemp5949[1U] = (~ __Vtemp5939[1U]);
                __Vtemp5949[2U] = (~ __Vtemp5939[2U]);
                __Vtemp5949[3U] = (~ __Vtemp5939[3U]);
            } else {
                __Vtemp5949[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5941[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5942[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5944[0U]
                                            : 0U)));
                __Vtemp5949[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5941[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5942[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5944[1U]
                                            : 0U)));
                __Vtemp5949[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5941[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5942[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5944[2U]
                                            : 0U)));
                __Vtemp5949[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5941[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5942[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5944[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+492,(__Vtemp5949),128);
            tracep->chgBit(oldp+496,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__32__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+497,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+498,((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U])));
            tracep->chgBit(oldp+499,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+500,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+501,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+502,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+503,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 1U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5950, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
            tracep->chgWData(oldp+504,(__Vtemp5950),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5951, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5953, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5954, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5956, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5961[0U] = (~ __Vtemp5951[0U]);
                __Vtemp5961[1U] = (~ __Vtemp5951[1U]);
                __Vtemp5961[2U] = (~ __Vtemp5951[2U]);
                __Vtemp5961[3U] = (~ __Vtemp5951[3U]);
            } else {
                __Vtemp5961[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5953[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5954[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5956[0U]
                                            : 0U)));
                __Vtemp5961[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5953[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5954[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5956[1U]
                                            : 0U)));
                __Vtemp5961[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5953[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5954[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5956[2U]
                                            : 0U)));
                __Vtemp5961[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5953[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5954[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5956[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+508,(__Vtemp5961),128);
            tracep->chgBit(oldp+512,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__34__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+513,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+514,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+515,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+516,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+517,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+518,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+519,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 3U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5962, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
            tracep->chgWData(oldp+520,(__Vtemp5962),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5963, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5965, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5966, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5968, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5973[0U] = (~ __Vtemp5963[0U]);
                __Vtemp5973[1U] = (~ __Vtemp5963[1U]);
                __Vtemp5973[2U] = (~ __Vtemp5963[2U]);
                __Vtemp5973[3U] = (~ __Vtemp5963[3U]);
            } else {
                __Vtemp5973[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5965[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5966[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5968[0U]
                                            : 0U)));
                __Vtemp5973[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5965[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5966[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5968[1U]
                                            : 0U)));
                __Vtemp5973[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5965[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5966[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5968[2U]
                                            : 0U)));
                __Vtemp5973[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5965[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5966[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5968[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+524,(__Vtemp5973),128);
            tracep->chgBit(oldp+528,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__36__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+529,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+530,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+531,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+532,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+533,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+534,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+535,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 5U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5974, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
            tracep->chgWData(oldp+536,(__Vtemp5974),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5975, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5977, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5978, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5980, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5985[0U] = (~ __Vtemp5975[0U]);
                __Vtemp5985[1U] = (~ __Vtemp5975[1U]);
                __Vtemp5985[2U] = (~ __Vtemp5975[2U]);
                __Vtemp5985[3U] = (~ __Vtemp5975[3U]);
            } else {
                __Vtemp5985[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5977[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5978[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5980[0U]
                                            : 0U)));
                __Vtemp5985[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5977[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5978[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5980[1U]
                                            : 0U)));
                __Vtemp5985[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5977[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5978[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5980[2U]
                                            : 0U)));
                __Vtemp5985[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5977[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5978[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5980[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+540,(__Vtemp5985),128);
            tracep->chgBit(oldp+544,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__38__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+545,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 7U))));
            tracep->chgBit(oldp+546,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+547,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+548,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+549,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+550,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+551,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 7U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5986, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
            tracep->chgWData(oldp+552,(__Vtemp5986),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5987, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5989, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5990, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5992, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5997[0U] = (~ __Vtemp5987[0U]);
                __Vtemp5997[1U] = (~ __Vtemp5987[1U]);
                __Vtemp5997[2U] = (~ __Vtemp5987[2U]);
                __Vtemp5997[3U] = (~ __Vtemp5987[3U]);
            } else {
                __Vtemp5997[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5989[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5990[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5992[0U]
                                            : 0U)));
                __Vtemp5997[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5989[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5990[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5992[1U]
                                            : 0U)));
                __Vtemp5997[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5989[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5990[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5992[2U]
                                            : 0U)));
                __Vtemp5997[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5989[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5990[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5992[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+556,(__Vtemp5997),128);
            tracep->chgBit(oldp+560,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__40__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+561,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+562,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+563,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+564,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+565,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+566,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+567,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 9U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5998, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
            tracep->chgWData(oldp+568,(__Vtemp5998),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5999, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6001, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6002, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6004, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6009[0U] = (~ __Vtemp5999[0U]);
                __Vtemp6009[1U] = (~ __Vtemp5999[1U]);
                __Vtemp6009[2U] = (~ __Vtemp5999[2U]);
                __Vtemp6009[3U] = (~ __Vtemp5999[3U]);
            } else {
                __Vtemp6009[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6001[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6002[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6004[0U]
                                            : 0U)));
                __Vtemp6009[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6001[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6002[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6004[1U]
                                            : 0U)));
                __Vtemp6009[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6001[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6002[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6004[2U]
                                            : 0U)));
                __Vtemp6009[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6001[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6002[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6004[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+572,(__Vtemp6009),128);
            tracep->chgBit(oldp+576,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__42__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+577,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+578,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+579,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+580,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+581,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+582,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+583,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0xbU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6010, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
            tracep->chgWData(oldp+584,(__Vtemp6010),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6011, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6013, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6014, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6016, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6021[0U] = (~ __Vtemp6011[0U]);
                __Vtemp6021[1U] = (~ __Vtemp6011[1U]);
                __Vtemp6021[2U] = (~ __Vtemp6011[2U]);
                __Vtemp6021[3U] = (~ __Vtemp6011[3U]);
            } else {
                __Vtemp6021[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6013[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6014[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6016[0U]
                                            : 0U)));
                __Vtemp6021[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6013[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6014[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6016[1U]
                                            : 0U)));
                __Vtemp6021[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6013[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6014[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6016[2U]
                                            : 0U)));
                __Vtemp6021[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6013[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6014[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6016[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+588,(__Vtemp6021),128);
            tracep->chgBit(oldp+592,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__44__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+593,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+594,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+595,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+596,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+597,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+598,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+599,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0xdU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6022, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
            tracep->chgWData(oldp+600,(__Vtemp6022),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6023, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6025, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6026, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6028, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6033[0U] = (~ __Vtemp6023[0U]);
                __Vtemp6033[1U] = (~ __Vtemp6023[1U]);
                __Vtemp6033[2U] = (~ __Vtemp6023[2U]);
                __Vtemp6033[3U] = (~ __Vtemp6023[3U]);
            } else {
                __Vtemp6033[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6025[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6026[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6028[0U]
                                            : 0U)));
                __Vtemp6033[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6025[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6026[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6028[1U]
                                            : 0U)));
                __Vtemp6033[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6025[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6026[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6028[2U]
                                            : 0U)));
                __Vtemp6033[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6025[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6026[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6028[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+604,(__Vtemp6033),128);
            tracep->chgBit(oldp+608,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__46__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+609,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+610,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+611,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+612,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+613,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+614,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+615,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0xfU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6034, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
            tracep->chgWData(oldp+616,(__Vtemp6034),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6035, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6037, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6038, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6040, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6045[0U] = (~ __Vtemp6035[0U]);
                __Vtemp6045[1U] = (~ __Vtemp6035[1U]);
                __Vtemp6045[2U] = (~ __Vtemp6035[2U]);
                __Vtemp6045[3U] = (~ __Vtemp6035[3U]);
            } else {
                __Vtemp6045[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6037[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6038[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6040[0U]
                                            : 0U)));
                __Vtemp6045[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6037[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6038[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6040[1U]
                                            : 0U)));
                __Vtemp6045[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6037[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6038[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6040[2U]
                                            : 0U)));
                __Vtemp6045[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6037[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6038[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6040[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+620,(__Vtemp6045),128);
            tracep->chgBit(oldp+624,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__48__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+625,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+626,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+627,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+628,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+629,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+630,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+631,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x11U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6046, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
            tracep->chgWData(oldp+632,(__Vtemp6046),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6047, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6049, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6050, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6052, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6057[0U] = (~ __Vtemp6047[0U]);
                __Vtemp6057[1U] = (~ __Vtemp6047[1U]);
                __Vtemp6057[2U] = (~ __Vtemp6047[2U]);
                __Vtemp6057[3U] = (~ __Vtemp6047[3U]);
            } else {
                __Vtemp6057[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6049[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6050[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6052[0U]
                                            : 0U)));
                __Vtemp6057[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6049[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6050[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6052[1U]
                                            : 0U)));
                __Vtemp6057[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6049[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6050[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6052[2U]
                                            : 0U)));
                __Vtemp6057[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6049[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6050[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6052[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+636,(__Vtemp6057),128);
            tracep->chgBit(oldp+640,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__50__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+641,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+642,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+643,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+644,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+645,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+646,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+647,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x13U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6058, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
            tracep->chgWData(oldp+648,(__Vtemp6058),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6059, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6061, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6062, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6064, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6069[0U] = (~ __Vtemp6059[0U]);
                __Vtemp6069[1U] = (~ __Vtemp6059[1U]);
                __Vtemp6069[2U] = (~ __Vtemp6059[2U]);
                __Vtemp6069[3U] = (~ __Vtemp6059[3U]);
            } else {
                __Vtemp6069[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6061[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6062[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6064[0U]
                                            : 0U)));
                __Vtemp6069[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6061[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6062[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6064[1U]
                                            : 0U)));
                __Vtemp6069[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6061[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6062[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6064[2U]
                                            : 0U)));
                __Vtemp6069[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6061[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6062[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6064[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+652,(__Vtemp6069),128);
            tracep->chgBit(oldp+656,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__52__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+657,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+658,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+659,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+660,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+661,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+662,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+663,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x15U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6070, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
            tracep->chgWData(oldp+664,(__Vtemp6070),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6071, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6073, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6074, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6076, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6081[0U] = (~ __Vtemp6071[0U]);
                __Vtemp6081[1U] = (~ __Vtemp6071[1U]);
                __Vtemp6081[2U] = (~ __Vtemp6071[2U]);
                __Vtemp6081[3U] = (~ __Vtemp6071[3U]);
            } else {
                __Vtemp6081[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6073[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6074[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6076[0U]
                                            : 0U)));
                __Vtemp6081[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6073[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6074[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6076[1U]
                                            : 0U)));
                __Vtemp6081[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6073[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6074[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6076[2U]
                                            : 0U)));
                __Vtemp6081[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6073[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6074[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6076[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+668,(__Vtemp6081),128);
            tracep->chgBit(oldp+672,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__54__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+673,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+674,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+675,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+676,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+677,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+678,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+679,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x17U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6082, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
            tracep->chgWData(oldp+680,(__Vtemp6082),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6083, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6085, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6086, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6088, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6093[0U] = (~ __Vtemp6083[0U]);
                __Vtemp6093[1U] = (~ __Vtemp6083[1U]);
                __Vtemp6093[2U] = (~ __Vtemp6083[2U]);
                __Vtemp6093[3U] = (~ __Vtemp6083[3U]);
            } else {
                __Vtemp6093[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6085[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6086[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6088[0U]
                                            : 0U)));
                __Vtemp6093[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6085[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6086[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6088[1U]
                                            : 0U)));
                __Vtemp6093[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6085[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6086[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6088[2U]
                                            : 0U)));
                __Vtemp6093[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6085[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6086[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6088[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+684,(__Vtemp6093),128);
            tracep->chgBit(oldp+688,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__56__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+689,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+690,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+691,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+692,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+693,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+694,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+695,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x19U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6094, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
            tracep->chgWData(oldp+696,(__Vtemp6094),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6095, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6097, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6098, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6100, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6105[0U] = (~ __Vtemp6095[0U]);
                __Vtemp6105[1U] = (~ __Vtemp6095[1U]);
                __Vtemp6105[2U] = (~ __Vtemp6095[2U]);
                __Vtemp6105[3U] = (~ __Vtemp6095[3U]);
            } else {
                __Vtemp6105[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6097[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6098[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6100[0U]
                                            : 0U)));
                __Vtemp6105[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6097[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6098[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6100[1U]
                                            : 0U)));
                __Vtemp6105[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6097[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6098[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6100[2U]
                                            : 0U)));
                __Vtemp6105[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6097[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6098[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6100[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+700,(__Vtemp6105),128);
            tracep->chgBit(oldp+704,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__58__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+705,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+706,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+707,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+708,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+709,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+710,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+711,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x1bU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6106, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
            tracep->chgWData(oldp+712,(__Vtemp6106),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6107, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6109, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6110, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6112, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6117[0U] = (~ __Vtemp6107[0U]);
                __Vtemp6117[1U] = (~ __Vtemp6107[1U]);
                __Vtemp6117[2U] = (~ __Vtemp6107[2U]);
                __Vtemp6117[3U] = (~ __Vtemp6107[3U]);
            } else {
                __Vtemp6117[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6109[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6110[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6112[0U]
                                            : 0U)));
                __Vtemp6117[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6109[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6110[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6112[1U]
                                            : 0U)));
                __Vtemp6117[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6109[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6110[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6112[2U]
                                            : 0U)));
                __Vtemp6117[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6109[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6110[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6112[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+716,(__Vtemp6117),128);
            tracep->chgBit(oldp+720,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__60__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+721,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+722,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+723,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+724,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+725,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+726,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+727,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                        >> 0x1dU)),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6118, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
            tracep->chgWData(oldp+728,(__Vtemp6118),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6119, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6121, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6122, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6124, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6129[0U] = (~ __Vtemp6119[0U]);
                __Vtemp6129[1U] = (~ __Vtemp6119[1U]);
                __Vtemp6129[2U] = (~ __Vtemp6119[2U]);
                __Vtemp6129[3U] = (~ __Vtemp6119[3U]);
            } else {
                __Vtemp6129[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6121[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6122[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6124[0U]
                                            : 0U)));
                __Vtemp6129[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6121[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6122[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6124[1U]
                                            : 0U)));
                __Vtemp6129[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6121[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6122[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6124[2U]
                                            : 0U)));
                __Vtemp6129[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6121[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6122[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6124[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+732,(__Vtemp6129),128);
            tracep->chgBit(oldp+736,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__62__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+737,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+738,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+739,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+740,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+741,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+742,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+743,((7U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                 >> 0x1fU)))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6130, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
            tracep->chgWData(oldp+744,(__Vtemp6130),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6131, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6133, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6134, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6136, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6141[0U] = (~ __Vtemp6131[0U]);
                __Vtemp6141[1U] = (~ __Vtemp6131[1U]);
                __Vtemp6141[2U] = (~ __Vtemp6131[2U]);
                __Vtemp6141[3U] = (~ __Vtemp6131[3U]);
            } else {
                __Vtemp6141[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6133[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6134[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6136[0U]
                                            : 0U)));
                __Vtemp6141[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6133[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6134[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6136[1U]
                                            : 0U)));
                __Vtemp6141[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6133[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6134[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6136[2U]
                                            : 0U)));
                __Vtemp6141[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6133[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6134[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6136[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+748,(__Vtemp6141),128);
            tracep->chgBit(oldp+752,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__64__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+753,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+754,((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U])));
            tracep->chgBit(oldp+755,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+756,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+757,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+758,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgWData(oldp+759,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend),128);
            VL_EXTEND_WQ(65,64, __Vtemp6142, (1ULL 
                                              + (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
            VL_EXTEND_WQ(65,64, __Vtemp6143, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
            VL_EXTEND_WQ(65,64, __Vtemp6146, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed) {
                __Vtemp6147[0U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                  >> 0x3fU)))
                                    ? __Vtemp6142[0U]
                                    : __Vtemp6143[0U]);
                __Vtemp6147[1U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                  >> 0x3fU)))
                                    ? __Vtemp6142[1U]
                                    : __Vtemp6143[1U]);
                __Vtemp6147[2U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                  >> 0x3fU)))
                                    ? __Vtemp6142[2U]
                                    : __Vtemp6143[2U]);
            } else {
                __Vtemp6147[0U] = __Vtemp6146[0U];
                __Vtemp6147[1U] = __Vtemp6146[1U];
                __Vtemp6147[2U] = __Vtemp6146[2U];
            }
            tracep->chgWData(oldp+763,(__Vtemp6147),65);
            tracep->chgQData(oldp+766,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient),64);
            tracep->chgWData(oldp+768,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out),65);
            tracep->chgQData(oldp+771,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend_w),64);
            tracep->chgQData(oldp+773,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed)
                                         ? ((1U & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                           >> 0x1fU)))
                                             ? (QData)((IData)(
                                                               ((IData)(1U) 
                                                                + 
                                                                (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)))))
                                             : (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)))
                                         : (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)))),33);
            tracep->chgIData(oldp+775,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_w),32);
            tracep->chgQData(oldp+776,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__subw_out),33);
            tracep->chgQData(oldp+778,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_out),64);
            tracep->chgQData(oldp+780,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_out),64);
            tracep->chgBit(oldp+782,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_positive));
            tracep->chgBit(oldp+783,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_positive));
            tracep->chgCData(oldp+784,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__state),7);
            tracep->chgBit(oldp+785,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load));
            tracep->chgBit(oldp+786,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store));
            tracep->chgCData(oldp+787,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state),4);
            tracep->chgQData(oldp+788,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata),64);
            tracep->chgIData(oldp+790,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__r),32);
            tracep->chgIData(oldp+791,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__k),32);
            tracep->chgQData(oldp+792,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0]),64);
            tracep->chgQData(oldp+794,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[1]),64);
            tracep->chgQData(oldp+796,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[2]),64);
            tracep->chgQData(oldp+798,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[3]),64);
            tracep->chgQData(oldp+800,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[4]),64);
            tracep->chgQData(oldp+802,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[5]),64);
            tracep->chgQData(oldp+804,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[6]),64);
            tracep->chgQData(oldp+806,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[7]),64);
            tracep->chgQData(oldp+808,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[8]),64);
            tracep->chgQData(oldp+810,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[9]),64);
            tracep->chgQData(oldp+812,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[10]),64);
            tracep->chgQData(oldp+814,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[11]),64);
            tracep->chgQData(oldp+816,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[12]),64);
            tracep->chgQData(oldp+818,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[13]),64);
            tracep->chgQData(oldp+820,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[14]),64);
            tracep->chgQData(oldp+822,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[15]),64);
            tracep->chgQData(oldp+824,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[16]),64);
            tracep->chgQData(oldp+826,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[17]),64);
            tracep->chgQData(oldp+828,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[18]),64);
            tracep->chgQData(oldp+830,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[19]),64);
            tracep->chgQData(oldp+832,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[20]),64);
            tracep->chgQData(oldp+834,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[21]),64);
            tracep->chgQData(oldp+836,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[22]),64);
            tracep->chgQData(oldp+838,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[23]),64);
            tracep->chgQData(oldp+840,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[24]),64);
            tracep->chgQData(oldp+842,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[25]),64);
            tracep->chgQData(oldp+844,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[26]),64);
            tracep->chgQData(oldp+846,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[27]),64);
            tracep->chgQData(oldp+848,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[28]),64);
            tracep->chgQData(oldp+850,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[29]),64);
            tracep->chgQData(oldp+852,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[30]),64);
            tracep->chgQData(oldp+854,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[31]),64);
            tracep->chgQData(oldp+856,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0]),64);
            tracep->chgQData(oldp+858,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[1]),64);
            tracep->chgQData(oldp+860,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[2]),64);
            tracep->chgQData(oldp+862,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[3]),64);
            tracep->chgQData(oldp+864,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[4]),64);
            tracep->chgQData(oldp+866,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[5]),64);
            tracep->chgQData(oldp+868,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[6]),64);
            tracep->chgQData(oldp+870,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[7]),64);
            tracep->chgQData(oldp+872,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[8]),64);
            tracep->chgQData(oldp+874,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[9]),64);
            tracep->chgQData(oldp+876,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[10]),64);
            tracep->chgQData(oldp+878,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[11]),64);
            tracep->chgQData(oldp+880,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[12]),64);
            tracep->chgQData(oldp+882,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[13]),64);
            tracep->chgQData(oldp+884,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[14]),64);
            tracep->chgQData(oldp+886,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[15]),64);
            tracep->chgQData(oldp+888,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[16]),64);
            tracep->chgQData(oldp+890,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[17]),64);
            tracep->chgQData(oldp+892,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[18]),64);
            tracep->chgQData(oldp+894,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[19]),64);
            tracep->chgQData(oldp+896,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[20]),64);
            tracep->chgQData(oldp+898,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[21]),64);
            tracep->chgQData(oldp+900,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[22]),64);
            tracep->chgQData(oldp+902,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[23]),64);
            tracep->chgQData(oldp+904,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[24]),64);
            tracep->chgQData(oldp+906,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[25]),64);
            tracep->chgQData(oldp+908,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[26]),64);
            tracep->chgQData(oldp+910,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[27]),64);
            tracep->chgQData(oldp+912,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[28]),64);
            tracep->chgQData(oldp+914,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[29]),64);
            tracep->chgQData(oldp+916,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[30]),64);
            tracep->chgQData(oldp+918,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[31]),64);
            tracep->chgQData(oldp+920,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__t),64);
            tracep->chgQData(oldp+922,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c),64);
            tracep->chgQData(oldp+924,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid),64);
            tracep->chgQData(oldp+926,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__misa),64);
            tracep->chgQData(oldp+928,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mscratch),64);
            tracep->chgQData(oldp+930,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause),64);
            tracep->chgQData(oldp+932,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcycle),64);
            tracep->chgQData(oldp+934,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__minstret),64);
            tracep->chgIData(oldp+936,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__j),32);
            tracep->chgBit(oldp+937,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write));
            tracep->chgBit(oldp+938,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                      & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out)) 
                                          | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                                         | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))))));
            tracep->chgBit(oldp+939,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs1_read));
            tracep->chgBit(oldp+940,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs2_read));
            tracep->chgBit(oldp+941,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_csr_read));
            tracep->chgBit(oldp+942,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write));
            tracep->chgBit(oldp+943,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                      & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out)) 
                                          | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                                         | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))))));
            tracep->chgBit(oldp+944,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                      & (8U == (0xcU 
                                                & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))))));
            tracep->chgBit(oldp+945,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write));
            tracep->chgBit(oldp+946,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
                                      & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)) 
                                          | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                                         | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))))));
            tracep->chgQData(oldp+947,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime),64);
            tracep->chgQData(oldp+949,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp),64);
            tracep->chgCData(oldp+951,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state),2);
            tracep->chgBit(oldp+952,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit));
            tracep->chgBit(oldp+953,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtimecmp_hit));
            tracep->chgBit(oldp+954,(((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                      & (0x200bfffU 
                                         >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))));
            tracep->chgBit(oldp+955,(((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                      & (0x2004007U 
                                         >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))));
            tracep->chgCData(oldp+956,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid),4);
            tracep->chgCData(oldp+957,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 1U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid))),4);
            tracep->chgIData(oldp+958,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr),32);
            tracep->chgCData(oldp+959,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen),8);
            tracep->chgCData(oldp+960,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen))),8);
            tracep->chgCData(oldp+961,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize),3);
            tracep->chgCData(oldp+962,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst),2);
            tracep->chgCData(oldp+963,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst))),2);
            tracep->chgCData(oldp+964,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid),4);
            tracep->chgCData(oldp+965,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                             ? 1U : 0U)
                                         : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid))),4);
            tracep->chgIData(oldp+966,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr),32);
            tracep->chgCData(oldp+967,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen),8);
            tracep->chgCData(oldp+968,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen))),8);
            tracep->chgCData(oldp+969,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize),3);
            tracep->chgCData(oldp+970,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst),2);
            tracep->chgCData(oldp+971,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst))),2);
            tracep->chgCData(oldp+972,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate),2);
            tracep->chgCData(oldp+973,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate),2);
            tracep->chgQData(oldp+974,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                       [0U]),33);
            tracep->chgSData(oldp+976,((0x7ffU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c))),11);
            tracep->chgCData(oldp+977,((0x7fU & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                         >> 0xbU)))),7);
            tracep->chgCData(oldp+978,((0x1fU & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                         >> 0x12U)))),5);
            tracep->chgCData(oldp+979,((7U & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                      >> 0x17U)))),3);
            tracep->chgCData(oldp+980,((3U & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                      >> 0x1aU)))),2);
            tracep->chgCData(oldp+981,((3U & (IData)(
                                                     (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                      >> 0x1cU)))),2);
            tracep->chgBit(oldp+982,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                    >> 0x1eU)))));
            tracep->chgSData(oldp+983,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+984,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+985,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+986,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+987,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+988,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+989,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                              & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7)))) 
                                            | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+990,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                              & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                                 >> 1U)) 
                                             | (6U 
                                                == 
                                                (6U 
                                                 & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8)))) 
                                            | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+991,((1U & VL_REDXOR_32(
                                                        (7U 
                                                         & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8))))));
            tracep->chgSData(oldp+992,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout1),11);
            tracep->chgIData(oldp+993,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2),22);
            tracep->chgCData(oldp+994,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout2),8);
            tracep->chgSData(oldp+995,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3),15);
            tracep->chgCData(oldp+996,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout3),5);
            tracep->chgSData(oldp+997,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4),10);
            tracep->chgCData(oldp+998,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout4),4);
            tracep->chgCData(oldp+999,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5),7);
            tracep->chgCData(oldp+1000,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout5),3);
            tracep->chgCData(oldp+1001,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6),6);
            tracep->chgCData(oldp+1002,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout6),2);
            tracep->chgCData(oldp+1003,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7),4);
            tracep->chgCData(oldp+1004,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout7),2);
            tracep->chgCData(oldp+1005,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8),3);
            tracep->chgBit(oldp+1006,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7))));
            tracep->chgBit(oldp+1007,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1008,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1009,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7))))));
            tracep->chgBit(oldp+1010,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8))));
            tracep->chgBit(oldp+1011,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1012,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1013,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U]))));
            tracep->chgBit(oldp+1014,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1015,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1016,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1017,((1U & (((IData)(
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
            tracep->chgBit(oldp+1018,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1019,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1020,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1021,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1022,((1U & (((IData)(
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
            tracep->chgBit(oldp+1023,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1024,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1025,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1026,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1027,((1U & (((IData)(
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
            tracep->chgBit(oldp+1028,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1029,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1030,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1031,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1032,((1U & (((IData)(
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
            tracep->chgBit(oldp+1033,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1034,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1035,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1036,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1037,((1U & (((IData)(
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
            tracep->chgBit(oldp+1038,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1039,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1040,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1041,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1042,((1U & (((IData)(
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
            tracep->chgBit(oldp+1043,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1044,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1045,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1046,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1047,((1U & (((IData)(
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
            tracep->chgBit(oldp+1048,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1049,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1050,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1051,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1052,((1U & (((IData)(
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
            tracep->chgBit(oldp+1053,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1054,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1055,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1056,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1057,((1U & (((IData)(
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
            tracep->chgBit(oldp+1058,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1059,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1060,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1061,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1062,((1U & (((IData)(
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
            tracep->chgBit(oldp+1063,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1064,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1065,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1066,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1067,((1U & (((IData)(
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
            tracep->chgBit(oldp+1068,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)));
            tracep->chgBit(oldp+1069,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+1070,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+1071,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1072,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1073,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+1074,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+1075,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+1076,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1077,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1078,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+1079,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+1080,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+1081,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1082,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1083,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+1084,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1085,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1086,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1087,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1088,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1089,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1090,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1091,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1092,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1093,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1094,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1095,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1096,((1U & (((0x18000U 
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
            tracep->chgBit(oldp+1097,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1098,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1099,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1100,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1101,((1U & (((0xc0000U 
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
            tracep->chgBit(oldp+1102,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1103,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))));
            tracep->chgBit(oldp+1104,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+1105,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+1106,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1107,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1108,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+1109,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+1110,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+1111,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1112,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1113,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+1114,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+1115,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+1116,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1117,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1118,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+1119,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1120,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1121,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1122,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1123,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1124,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1125,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1126,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1127,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1128,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4))));
            tracep->chgBit(oldp+1129,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+1130,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+1131,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1132,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4))))));
            tracep->chgBit(oldp+1133,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+1134,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+1135,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+1136,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1137,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4))))));
            tracep->chgBit(oldp+1138,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+1139,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+1140,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+1141,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1142,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4))))));
            tracep->chgBit(oldp+1143,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5))));
            tracep->chgBit(oldp+1144,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+1145,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+1146,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1147,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5))))));
            tracep->chgBit(oldp+1148,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+1149,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+1150,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+1151,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1152,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5))))));
            tracep->chgBit(oldp+1153,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6))));
            tracep->chgBit(oldp+1154,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+1155,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+1156,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1157,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6))))));
            tracep->chgBit(oldp+1158,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+1159,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+1160,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+1161,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1162,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6))))));
            tracep->chgQData(oldp+1163,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [1U]),33);
            tracep->chgSData(oldp+1165,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [0U]),11);
            tracep->chgCData(oldp+1166,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [0U]),7);
            tracep->chgCData(oldp+1167,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [0U]),5);
            tracep->chgCData(oldp+1168,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [0U]),3);
            tracep->chgCData(oldp+1169,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [0U]),2);
            tracep->chgCData(oldp+1170,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [0U]),2);
            tracep->chgBit(oldp+1171,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [0U]));
            tracep->chgSData(oldp+1172,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1173,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1174,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1175,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1176,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1177,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1178,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1179,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1180,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+1181,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+1182,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+1183,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+1184,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+1185,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+1186,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+1187,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+1188,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+1189,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+1190,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+1191,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+1192,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+1193,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+1194,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+1195,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+1196,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1197,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1198,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+1199,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+1200,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1201,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1202,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [1U]))));
            tracep->chgBit(oldp+1203,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1204,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1205,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1206,((1U & (((IData)(
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
            tracep->chgBit(oldp+1207,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1208,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1209,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1210,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1211,((1U & (((IData)(
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
            tracep->chgBit(oldp+1212,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1213,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1214,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1215,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1216,((1U & (((IData)(
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
            tracep->chgBit(oldp+1217,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1218,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1219,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1220,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1221,((1U & (((IData)(
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
            tracep->chgBit(oldp+1222,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1223,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1224,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1225,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1226,((1U & (((IData)(
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
            tracep->chgBit(oldp+1227,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1228,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1229,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1230,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1231,((1U & (((IData)(
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
            tracep->chgBit(oldp+1232,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1233,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1234,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1235,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1236,((1U & (((IData)(
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
            tracep->chgBit(oldp+1237,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1238,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1239,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1240,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1241,((1U & (((IData)(
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
            tracep->chgBit(oldp+1242,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1243,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1244,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1245,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1246,((1U & (((IData)(
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
            tracep->chgBit(oldp+1247,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1248,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1249,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1250,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1251,((1U & (((IData)(
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
            tracep->chgBit(oldp+1252,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1253,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1254,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1255,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1256,((1U & (((IData)(
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
            tracep->chgBit(oldp+1257,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+1258,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+1259,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+1260,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1261,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1262,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+1263,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+1264,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+1265,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1266,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1267,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+1268,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+1269,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+1270,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1271,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1272,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+1273,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1274,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1275,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1276,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1277,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1278,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1279,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1280,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1281,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1282,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1283,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1284,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1285,((1U & (((0x18000U 
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
            tracep->chgBit(oldp+1286,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1287,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1288,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1289,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1290,((1U & (((0xc0000U 
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
            tracep->chgBit(oldp+1291,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1292,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+1293,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+1294,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+1295,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1296,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1297,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+1298,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+1299,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+1300,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1301,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1302,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+1303,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+1304,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+1305,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1306,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1307,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+1308,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1309,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1310,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1311,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1312,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1313,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1314,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1315,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1316,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1317,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+1318,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+1319,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+1320,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1321,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1322,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+1323,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+1324,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+1325,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1326,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1327,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+1328,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+1329,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+1330,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1331,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1332,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+1333,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+1334,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+1335,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1336,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1337,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+1338,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+1339,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+1340,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1341,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1342,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+1343,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+1344,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+1345,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1346,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+1347,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+1348,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+1349,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+1350,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1351,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+1352,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [2U]),33);
            tracep->chgSData(oldp+1354,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [1U]),11);
            tracep->chgCData(oldp+1355,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [1U]),7);
            tracep->chgCData(oldp+1356,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [1U]),5);
            tracep->chgCData(oldp+1357,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [1U]),3);
            tracep->chgCData(oldp+1358,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [1U]),2);
            tracep->chgCData(oldp+1359,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [1U]),2);
            tracep->chgBit(oldp+1360,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [1U]));
            tracep->chgSData(oldp+1361,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1362,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1363,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1364,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1365,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1366,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1367,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1368,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1369,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+1370,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+1371,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+1372,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+1373,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+1374,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+1375,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+1376,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+1377,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+1378,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+1379,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+1380,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+1381,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+1382,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+1383,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+1384,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+1385,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1386,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1387,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+1388,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+1389,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1390,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1391,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [2U]))));
            tracep->chgBit(oldp+1392,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1393,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1394,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1395,((1U & (((IData)(
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
            tracep->chgBit(oldp+1396,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1397,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1398,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1399,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1400,((1U & (((IData)(
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
            tracep->chgBit(oldp+1401,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1402,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1403,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1404,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1405,((1U & (((IData)(
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
            tracep->chgBit(oldp+1406,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1407,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1408,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1409,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1410,((1U & (((IData)(
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
            tracep->chgBit(oldp+1411,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1412,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1413,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1414,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1415,((1U & (((IData)(
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
            tracep->chgBit(oldp+1416,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1417,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1418,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1419,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1420,((1U & (((IData)(
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
            tracep->chgBit(oldp+1421,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1422,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1423,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1424,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1425,((1U & (((IData)(
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
            tracep->chgBit(oldp+1426,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1427,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1428,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1429,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1430,((1U & (((IData)(
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
            tracep->chgBit(oldp+1431,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1432,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1433,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1434,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1435,((1U & (((IData)(
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
            tracep->chgBit(oldp+1436,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1437,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1438,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1439,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1440,((1U & (((IData)(
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
            tracep->chgBit(oldp+1441,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1442,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1443,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1444,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1445,((1U & (((IData)(
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
            tracep->chgBit(oldp+1446,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+1447,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+1448,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+1449,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1450,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1451,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+1452,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+1453,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+1454,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1455,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1456,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+1457,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+1458,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+1459,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1460,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1461,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+1462,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1463,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1464,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1465,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1466,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1467,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1468,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1469,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1470,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1471,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1472,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1473,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1474,((1U & (((0x18000U 
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
            tracep->chgBit(oldp+1475,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1476,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1477,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1478,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1479,((1U & (((0xc0000U 
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
            tracep->chgBit(oldp+1480,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1481,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+1482,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+1483,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+1484,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1485,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1486,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+1487,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+1488,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+1489,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1490,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1491,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+1492,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+1493,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+1494,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1495,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1496,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+1497,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1498,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1499,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1500,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1501,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1502,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1503,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1504,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1505,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1506,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+1507,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+1508,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+1509,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1510,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1511,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+1512,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+1513,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+1514,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1515,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1516,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+1517,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+1518,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+1519,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1520,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1521,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+1522,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+1523,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+1524,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1525,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1526,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+1527,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+1528,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+1529,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1530,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1531,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+1532,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+1533,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+1534,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1535,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+1536,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+1537,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+1538,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+1539,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1540,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+1541,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [3U]),33);
            tracep->chgSData(oldp+1543,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [2U]),11);
            tracep->chgCData(oldp+1544,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [2U]),7);
            tracep->chgCData(oldp+1545,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [2U]),5);
            tracep->chgCData(oldp+1546,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [2U]),3);
            tracep->chgCData(oldp+1547,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [2U]),2);
            tracep->chgCData(oldp+1548,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [2U]),2);
            tracep->chgBit(oldp+1549,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [2U]));
            tracep->chgSData(oldp+1550,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1551,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1552,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1553,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1554,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1555,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1556,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1557,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1558,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+1559,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+1560,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+1561,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+1562,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+1563,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+1564,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+1565,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+1566,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+1567,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+1568,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+1569,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+1570,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+1571,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+1572,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+1573,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+1574,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1575,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1576,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+1577,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+1578,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1579,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1580,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [3U]))));
            tracep->chgBit(oldp+1581,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1582,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1583,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1584,((1U & (((IData)(
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
            tracep->chgBit(oldp+1585,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1586,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1587,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1588,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1589,((1U & (((IData)(
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
            tracep->chgBit(oldp+1590,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1591,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1592,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1593,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1594,((1U & (((IData)(
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
            tracep->chgBit(oldp+1595,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1596,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1597,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1598,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1599,((1U & (((IData)(
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
            tracep->chgBit(oldp+1600,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1601,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1602,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1603,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1604,((1U & (((IData)(
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
            tracep->chgBit(oldp+1605,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1606,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1607,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1608,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1609,((1U & (((IData)(
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
            tracep->chgBit(oldp+1610,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1611,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1612,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1613,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1614,((1U & (((IData)(
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
            tracep->chgBit(oldp+1615,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1616,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1617,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1618,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1619,((1U & (((IData)(
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
            tracep->chgBit(oldp+1620,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1621,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1622,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1623,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1624,((1U & (((IData)(
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
            tracep->chgBit(oldp+1625,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1626,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1627,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1628,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1629,((1U & (((IData)(
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
            tracep->chgBit(oldp+1630,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1631,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1632,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1633,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1634,((1U & (((IData)(
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
            tracep->chgBit(oldp+1635,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+1636,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+1637,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+1638,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1639,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1640,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+1641,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+1642,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+1643,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1644,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1645,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+1646,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+1647,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+1648,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1649,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1650,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+1651,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1652,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1653,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1654,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1655,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1656,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1657,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1658,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1659,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1660,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1661,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1662,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1663,((1U & (((0x18000U 
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
            tracep->chgBit(oldp+1664,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1665,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1666,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1667,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1668,((1U & (((0xc0000U 
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
            tracep->chgBit(oldp+1669,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1670,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+1671,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+1672,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+1673,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1674,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1675,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+1676,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+1677,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+1678,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1679,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1680,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+1681,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+1682,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+1683,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1684,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1685,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+1686,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1687,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1688,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1689,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1690,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1691,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1692,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1693,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1694,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1695,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+1696,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+1697,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+1698,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1699,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1700,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+1701,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+1702,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+1703,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1704,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1705,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+1706,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+1707,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+1708,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1709,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1710,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+1711,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+1712,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+1713,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1714,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1715,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+1716,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+1717,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+1718,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1719,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1720,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+1721,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+1722,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+1723,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1724,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+1725,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+1726,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+1727,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+1728,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1729,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+1730,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [4U]),33);
            tracep->chgSData(oldp+1732,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [3U]),11);
            tracep->chgCData(oldp+1733,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [3U]),7);
            tracep->chgCData(oldp+1734,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [3U]),5);
            tracep->chgCData(oldp+1735,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [3U]),3);
            tracep->chgCData(oldp+1736,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [3U]),2);
            tracep->chgCData(oldp+1737,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [3U]),2);
            tracep->chgBit(oldp+1738,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [3U]));
            tracep->chgSData(oldp+1739,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1740,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1741,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1742,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1743,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1744,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1745,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1746,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1747,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+1748,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+1749,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+1750,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+1751,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+1752,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+1753,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+1754,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+1755,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+1756,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+1757,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+1758,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+1759,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+1760,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+1761,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+1762,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+1763,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1764,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1765,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+1766,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+1767,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1768,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1769,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [4U]))));
            tracep->chgBit(oldp+1770,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1771,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1772,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1773,((1U & (((IData)(
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
            tracep->chgBit(oldp+1774,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1775,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1776,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1777,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1778,((1U & (((IData)(
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
            tracep->chgBit(oldp+1779,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1780,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1781,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1782,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1783,((1U & (((IData)(
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
            tracep->chgBit(oldp+1784,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1785,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1786,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1787,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1788,((1U & (((IData)(
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
            tracep->chgBit(oldp+1789,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1790,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1791,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1792,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1793,((1U & (((IData)(
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
            tracep->chgBit(oldp+1794,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1795,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1796,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1797,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1798,((1U & (((IData)(
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
            tracep->chgBit(oldp+1799,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1800,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1801,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1802,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1803,((1U & (((IData)(
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
            tracep->chgBit(oldp+1804,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1805,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1806,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1807,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1808,((1U & (((IData)(
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
            tracep->chgBit(oldp+1809,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1810,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1811,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1812,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1813,((1U & (((IData)(
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
            tracep->chgBit(oldp+1814,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1815,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1816,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1817,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1818,((1U & (((IData)(
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
            tracep->chgBit(oldp+1819,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1820,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1821,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1822,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1823,((1U & (((IData)(
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
            tracep->chgBit(oldp+1824,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+1825,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+1826,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+1827,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1828,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1829,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+1830,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+1831,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+1832,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1833,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1834,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+1835,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+1836,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+1837,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1838,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1839,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+1840,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1841,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1842,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1843,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1844,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1845,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1846,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1847,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1848,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1849,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1850,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1851,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1852,((1U & (((0x18000U 
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
            tracep->chgBit(oldp+1853,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1854,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1855,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1856,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1857,((1U & (((0xc0000U 
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
            tracep->chgBit(oldp+1858,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1859,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+1860,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+1861,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+1862,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1863,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1864,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+1865,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+1866,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+1867,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1868,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1869,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+1870,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+1871,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+1872,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1873,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1874,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+1875,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1876,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1877,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1878,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1879,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1880,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1881,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1882,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1883,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1884,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+1885,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+1886,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+1887,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1888,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1889,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+1890,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+1891,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+1892,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1893,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1894,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+1895,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+1896,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+1897,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1898,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1899,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+1900,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+1901,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+1902,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1903,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1904,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+1905,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+1906,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+1907,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1908,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1909,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+1910,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+1911,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+1912,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1913,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+1914,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+1915,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+1916,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+1917,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1918,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+1919,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [5U]),33);
            tracep->chgSData(oldp+1921,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [4U]),11);
            tracep->chgCData(oldp+1922,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [4U]),7);
            tracep->chgCData(oldp+1923,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [4U]),5);
            tracep->chgCData(oldp+1924,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [4U]),3);
            tracep->chgCData(oldp+1925,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [4U]),2);
            tracep->chgCData(oldp+1926,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [4U]),2);
            tracep->chgBit(oldp+1927,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [4U]));
            tracep->chgSData(oldp+1928,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1929,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1930,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1931,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1932,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1933,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1934,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1935,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1936,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+1937,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+1938,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+1939,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+1940,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+1941,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+1942,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+1943,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+1944,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+1945,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+1946,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+1947,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+1948,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+1949,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+1950,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+1951,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+1952,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1953,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1954,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+1955,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+1956,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1957,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1958,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [5U]))));
            tracep->chgBit(oldp+1959,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1960,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1961,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1962,((1U & (((IData)(
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
            tracep->chgBit(oldp+1963,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1964,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1965,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1966,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1967,((1U & (((IData)(
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
            tracep->chgBit(oldp+1968,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1969,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1970,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1971,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1972,((1U & (((IData)(
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
            tracep->chgBit(oldp+1973,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1974,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1975,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1976,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1977,((1U & (((IData)(
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
            tracep->chgBit(oldp+1978,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1979,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1980,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1981,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1982,((1U & (((IData)(
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
            tracep->chgBit(oldp+1983,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1984,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1985,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1986,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1987,((1U & (((IData)(
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
            tracep->chgBit(oldp+1988,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1989,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1990,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1991,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1992,((1U & (((IData)(
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
            tracep->chgBit(oldp+1993,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1994,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1995,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1996,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1997,((1U & (((IData)(
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
            tracep->chgBit(oldp+1998,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1999,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+2000,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+2001,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2002,((1U & (((IData)(
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
            tracep->chgBit(oldp+2003,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+2004,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+2005,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+2006,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2007,((1U & (((IData)(
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
            tracep->chgBit(oldp+2008,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+2009,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+2010,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+2011,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2012,((1U & (((IData)(
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
            tracep->chgBit(oldp+2013,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+2014,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+2015,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+2016,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2017,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2018,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+2019,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+2020,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+2021,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2022,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2023,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+2024,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+2025,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+2026,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2027,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2028,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+2029,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2030,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2031,((1U & (((0x600U 
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
            tracep->chgBit(oldp+2032,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2033,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2034,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2035,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2036,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+2037,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2038,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2039,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2040,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2041,((1U & (((0x18000U 
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
            tracep->chgBit(oldp+2042,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2043,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2044,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2045,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2046,((1U & (((0xc0000U 
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
            tracep->chgBit(oldp+2047,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2048,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+2049,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+2050,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+2051,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2052,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2053,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+2054,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+2055,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+2056,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2057,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2058,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+2059,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+2060,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+2061,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2062,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2063,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+2064,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2065,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2066,((1U & (((0x600U 
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
            tracep->chgBit(oldp+2067,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2068,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2069,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2070,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2071,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+2072,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2073,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+2074,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+2075,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+2076,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2077,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2078,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+2079,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+2080,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+2081,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2082,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2083,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+2084,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+2085,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+2086,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2087,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2088,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+2089,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+2090,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+2091,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2092,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2093,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+2094,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+2095,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+2096,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2097,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2098,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+2099,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+2100,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+2101,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2102,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+2103,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+2104,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+2105,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+2106,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2107,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+2108,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [6U]),33);
            tracep->chgSData(oldp+2110,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [5U]),11);
            tracep->chgCData(oldp+2111,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [5U]),7);
            tracep->chgCData(oldp+2112,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [5U]),5);
            tracep->chgCData(oldp+2113,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [5U]),3);
            tracep->chgCData(oldp+2114,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [5U]),2);
            tracep->chgCData(oldp+2115,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [5U]),2);
            tracep->chgBit(oldp+2116,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [5U]));
            tracep->chgSData(oldp+2117,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+2118,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+2119,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+2120,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+2121,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+2122,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+2123,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2124,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2125,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+2126,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+2127,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+2128,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+2129,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+2130,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+2131,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+2132,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+2133,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+2134,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+2135,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+2136,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+2137,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+2138,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+2139,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+2140,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+2141,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+2142,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+2143,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+2144,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+2145,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+2146,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+2147,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [6U]))));
            tracep->chgBit(oldp+2148,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2149,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2150,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2151,((1U & (((IData)(
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
            tracep->chgBit(oldp+2152,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2153,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2154,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2155,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2156,((1U & (((IData)(
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
            tracep->chgBit(oldp+2157,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2158,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2159,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2160,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2161,((1U & (((IData)(
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
            tracep->chgBit(oldp+2162,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2163,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2164,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2165,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2166,((1U & (((IData)(
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
            tracep->chgBit(oldp+2167,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2168,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2169,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2170,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2171,((1U & (((IData)(
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
            tracep->chgBit(oldp+2172,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2173,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2174,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2175,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2176,((1U & (((IData)(
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
            tracep->chgBit(oldp+2177,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2178,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2179,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2180,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2181,((1U & (((IData)(
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
            tracep->chgBit(oldp+2182,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2183,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2184,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2185,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2186,((1U & (((IData)(
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
            tracep->chgBit(oldp+2187,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2188,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+2189,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+2190,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2191,((1U & (((IData)(
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
            tracep->chgBit(oldp+2192,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+2193,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+2194,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+2195,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2196,((1U & (((IData)(
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
            tracep->chgBit(oldp+2197,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+2198,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+2199,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+2200,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2201,((1U & (((IData)(
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
            tracep->chgBit(oldp+2202,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+2203,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+2204,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+2205,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2206,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2207,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+2208,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+2209,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+2210,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2211,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2212,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+2213,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+2214,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+2215,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2216,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2217,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+2218,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2219,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2220,((1U & (((0x600U 
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
            tracep->chgBit(oldp+2221,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2222,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2223,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2224,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2225,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+2226,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2227,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2228,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2229,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2230,((1U & (((0x18000U 
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
            tracep->chgBit(oldp+2231,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2232,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2233,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2234,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2235,((1U & (((0xc0000U 
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
            tracep->chgBit(oldp+2236,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2237,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+2238,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+2239,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+2240,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2241,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2242,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+2243,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+2244,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+2245,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2246,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2247,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+2248,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+2249,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+2250,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2251,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2252,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+2253,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2254,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2255,((1U & (((0x600U 
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
            tracep->chgBit(oldp+2256,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2257,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2258,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2259,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2260,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+2261,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2262,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+2263,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+2264,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+2265,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2266,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2267,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+2268,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+2269,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+2270,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2271,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2272,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+2273,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+2274,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+2275,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2276,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2277,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+2278,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+2279,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+2280,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2281,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2282,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+2283,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+2284,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+2285,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2286,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2287,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+2288,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+2289,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+2290,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2291,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+2292,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+2293,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+2294,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+2295,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2296,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+2297,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [7U]),33);
            tracep->chgSData(oldp+2299,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [6U]),11);
            tracep->chgCData(oldp+2300,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [6U]),7);
            tracep->chgCData(oldp+2301,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [6U]),5);
            tracep->chgCData(oldp+2302,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [6U]),3);
            tracep->chgCData(oldp+2303,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [6U]),2);
            tracep->chgCData(oldp+2304,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [6U]),2);
            tracep->chgBit(oldp+2305,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [6U]));
            tracep->chgSData(oldp+2306,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+2307,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+2308,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+2309,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+2310,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+2311,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+2312,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2313,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2314,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+2315,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+2316,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+2317,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+2318,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+2319,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+2320,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+2321,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+2322,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+2323,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+2324,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+2325,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+2326,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+2327,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+2328,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+2329,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+2330,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+2331,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+2332,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+2333,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+2334,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+2335,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+2336,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [7U]))));
            tracep->chgBit(oldp+2337,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2338,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2339,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2340,((1U & (((IData)(
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
            tracep->chgBit(oldp+2341,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2342,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2343,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2344,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2345,((1U & (((IData)(
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
            tracep->chgBit(oldp+2346,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2347,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2348,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2349,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2350,((1U & (((IData)(
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
            tracep->chgBit(oldp+2351,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2352,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2353,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2354,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2355,((1U & (((IData)(
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
            tracep->chgBit(oldp+2356,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2357,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2358,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2359,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2360,((1U & (((IData)(
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
            tracep->chgBit(oldp+2361,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2362,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2363,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2364,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2365,((1U & (((IData)(
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
            tracep->chgBit(oldp+2366,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2367,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2368,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2369,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2370,((1U & (((IData)(
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
            tracep->chgBit(oldp+2371,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2372,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2373,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2374,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2375,((1U & (((IData)(
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
            tracep->chgBit(oldp+2376,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2377,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+2378,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+2379,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0x18U)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0x19U))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0x19U)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [7U] 
                                                            >> 0x1aU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0x18U)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [7U] 
                                                           >> 0x1aU)))))));
            tracep->chgBit(oldp+2380,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [7U] 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0x19U))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0x1aU))))));
            tracep->chgBit(oldp+2381,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+2382,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+2383,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+2384,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0x1bU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0x1cU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0x1cU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [7U] 
                                                            >> 0x1dU)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0x1bU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [7U] 
                                                           >> 0x1dU)))))));
            tracep->chgBit(oldp+2385,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [7U] 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0x1cU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0x1dU))))));
            tracep->chgBit(oldp+2386,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+2387,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+2388,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+2389,((1U & ((((IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0x1eU)) 
                                               & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0x1fU))) 
                                              | ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                          [7U] 
                                                          >> 0x1fU)) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                            [7U] 
                                                            >> 0x20U)))) 
                                             | ((IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0x1eU)) 
                                                & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                           [7U] 
                                                           >> 0x20U)))))));
            tracep->chgBit(oldp+2390,((1U & (((IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                       [7U] 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                         [7U] 
                                                         >> 0x1fU))) 
                                             ^ (IData)(
                                                       (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                        [7U] 
                                                        >> 0x20U))))));
            tracep->chgBit(oldp+2391,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+2392,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+2393,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+2394,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2395,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2396,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+2397,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+2398,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+2399,((1U & (((0x18U 
                                               == (0x18U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x30U 
                                                 == 
                                                 (0x30U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x28U 
                                                == 
                                                (0x28U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2400,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2401,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+2402,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+2403,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+2404,((1U & (((0xc0U 
                                               == (0xc0U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x180U 
                                                 == 
                                                 (0x180U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x140U 
                                                == 
                                                (0x140U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2405,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2406,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+2407,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2408,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2409,((1U & (((0x600U 
                                               == (0x600U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0xc00U 
                                                 == 
                                                 (0xc00U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0xa00U 
                                                == 
                                                (0xa00U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2410,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2411,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2412,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2413,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2414,((1U & (((0x3000U 
                                               == (0x3000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x6000U 
                                                 == 
                                                 (0x6000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x5000U 
                                                == 
                                                (0x5000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2415,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2416,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2417,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2418,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2419,((1U & (((0x18000U 
                                               == (0x18000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x30000U 
                                                 == 
                                                 (0x30000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x28000U 
                                                == 
                                                (0x28000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2420,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2421,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2422,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2423,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2424,((1U & (((0xc0000U 
                                               == (0xc0000U 
                                                   & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2)) 
                                              | (0x180000U 
                                                 == 
                                                 (0x180000U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2))) 
                                             | (0x140000U 
                                                == 
                                                (0x140000U 
                                                 & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2))))));
            tracep->chgBit(oldp+2425,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2426,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+2427,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+2428,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+2429,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
        }
    }
}
