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
    VlWide<4>/*127:0*/ __Vtemp5727;
    VlWide<4>/*127:0*/ __Vtemp5732;
    VlWide<4>/*127:0*/ __Vtemp5733;
    VlWide<4>/*127:0*/ __Vtemp5734;
    VlWide<4>/*127:0*/ __Vtemp5736;
    VlWide<4>/*127:0*/ __Vtemp5737;
    VlWide<4>/*127:0*/ __Vtemp5739;
    VlWide<4>/*127:0*/ __Vtemp5744;
    VlWide<4>/*127:0*/ __Vtemp5745;
    VlWide<4>/*127:0*/ __Vtemp5746;
    VlWide<4>/*127:0*/ __Vtemp5748;
    VlWide<4>/*127:0*/ __Vtemp5749;
    VlWide<4>/*127:0*/ __Vtemp5751;
    VlWide<4>/*127:0*/ __Vtemp5756;
    VlWide<4>/*127:0*/ __Vtemp5757;
    VlWide<4>/*127:0*/ __Vtemp5758;
    VlWide<4>/*127:0*/ __Vtemp5760;
    VlWide<4>/*127:0*/ __Vtemp5761;
    VlWide<4>/*127:0*/ __Vtemp5763;
    VlWide<4>/*127:0*/ __Vtemp5768;
    VlWide<4>/*127:0*/ __Vtemp5769;
    VlWide<4>/*127:0*/ __Vtemp5770;
    VlWide<4>/*127:0*/ __Vtemp5772;
    VlWide<4>/*127:0*/ __Vtemp5773;
    VlWide<4>/*127:0*/ __Vtemp5775;
    VlWide<4>/*127:0*/ __Vtemp5780;
    VlWide<4>/*127:0*/ __Vtemp5781;
    VlWide<4>/*127:0*/ __Vtemp5782;
    VlWide<4>/*127:0*/ __Vtemp5784;
    VlWide<4>/*127:0*/ __Vtemp5785;
    VlWide<4>/*127:0*/ __Vtemp5787;
    VlWide<4>/*127:0*/ __Vtemp5792;
    VlWide<4>/*127:0*/ __Vtemp5793;
    VlWide<4>/*127:0*/ __Vtemp5794;
    VlWide<4>/*127:0*/ __Vtemp5796;
    VlWide<4>/*127:0*/ __Vtemp5797;
    VlWide<4>/*127:0*/ __Vtemp5799;
    VlWide<4>/*127:0*/ __Vtemp5804;
    VlWide<4>/*127:0*/ __Vtemp5805;
    VlWide<4>/*127:0*/ __Vtemp5806;
    VlWide<4>/*127:0*/ __Vtemp5808;
    VlWide<4>/*127:0*/ __Vtemp5809;
    VlWide<4>/*127:0*/ __Vtemp5811;
    VlWide<4>/*127:0*/ __Vtemp5816;
    VlWide<4>/*127:0*/ __Vtemp5817;
    VlWide<4>/*127:0*/ __Vtemp5818;
    VlWide<4>/*127:0*/ __Vtemp5820;
    VlWide<4>/*127:0*/ __Vtemp5821;
    VlWide<4>/*127:0*/ __Vtemp5823;
    VlWide<4>/*127:0*/ __Vtemp5828;
    VlWide<4>/*127:0*/ __Vtemp5829;
    VlWide<4>/*127:0*/ __Vtemp5830;
    VlWide<4>/*127:0*/ __Vtemp5832;
    VlWide<4>/*127:0*/ __Vtemp5833;
    VlWide<4>/*127:0*/ __Vtemp5835;
    VlWide<4>/*127:0*/ __Vtemp5840;
    VlWide<4>/*127:0*/ __Vtemp5841;
    VlWide<4>/*127:0*/ __Vtemp5842;
    VlWide<4>/*127:0*/ __Vtemp5844;
    VlWide<4>/*127:0*/ __Vtemp5845;
    VlWide<4>/*127:0*/ __Vtemp5847;
    VlWide<4>/*127:0*/ __Vtemp5852;
    VlWide<4>/*127:0*/ __Vtemp5853;
    VlWide<4>/*127:0*/ __Vtemp5854;
    VlWide<4>/*127:0*/ __Vtemp5856;
    VlWide<4>/*127:0*/ __Vtemp5857;
    VlWide<4>/*127:0*/ __Vtemp5859;
    VlWide<4>/*127:0*/ __Vtemp5864;
    VlWide<4>/*127:0*/ __Vtemp5865;
    VlWide<4>/*127:0*/ __Vtemp5866;
    VlWide<4>/*127:0*/ __Vtemp5868;
    VlWide<4>/*127:0*/ __Vtemp5869;
    VlWide<4>/*127:0*/ __Vtemp5871;
    VlWide<4>/*127:0*/ __Vtemp5876;
    VlWide<4>/*127:0*/ __Vtemp5877;
    VlWide<4>/*127:0*/ __Vtemp5878;
    VlWide<4>/*127:0*/ __Vtemp5880;
    VlWide<4>/*127:0*/ __Vtemp5881;
    VlWide<4>/*127:0*/ __Vtemp5883;
    VlWide<4>/*127:0*/ __Vtemp5888;
    VlWide<4>/*127:0*/ __Vtemp5889;
    VlWide<4>/*127:0*/ __Vtemp5890;
    VlWide<4>/*127:0*/ __Vtemp5892;
    VlWide<4>/*127:0*/ __Vtemp5893;
    VlWide<4>/*127:0*/ __Vtemp5895;
    VlWide<4>/*127:0*/ __Vtemp5900;
    VlWide<4>/*127:0*/ __Vtemp5901;
    VlWide<4>/*127:0*/ __Vtemp5902;
    VlWide<4>/*127:0*/ __Vtemp5904;
    VlWide<4>/*127:0*/ __Vtemp5905;
    VlWide<4>/*127:0*/ __Vtemp5907;
    VlWide<4>/*127:0*/ __Vtemp5912;
    VlWide<4>/*127:0*/ __Vtemp5913;
    VlWide<4>/*127:0*/ __Vtemp5914;
    VlWide<4>/*127:0*/ __Vtemp5916;
    VlWide<4>/*127:0*/ __Vtemp5917;
    VlWide<4>/*127:0*/ __Vtemp5919;
    VlWide<4>/*127:0*/ __Vtemp5924;
    VlWide<4>/*127:0*/ __Vtemp5925;
    VlWide<4>/*127:0*/ __Vtemp5926;
    VlWide<4>/*127:0*/ __Vtemp5928;
    VlWide<4>/*127:0*/ __Vtemp5929;
    VlWide<4>/*127:0*/ __Vtemp5931;
    VlWide<4>/*127:0*/ __Vtemp5936;
    VlWide<4>/*127:0*/ __Vtemp5937;
    VlWide<4>/*127:0*/ __Vtemp5938;
    VlWide<4>/*127:0*/ __Vtemp5940;
    VlWide<4>/*127:0*/ __Vtemp5941;
    VlWide<4>/*127:0*/ __Vtemp5943;
    VlWide<4>/*127:0*/ __Vtemp5948;
    VlWide<4>/*127:0*/ __Vtemp5949;
    VlWide<4>/*127:0*/ __Vtemp5950;
    VlWide<4>/*127:0*/ __Vtemp5952;
    VlWide<4>/*127:0*/ __Vtemp5953;
    VlWide<4>/*127:0*/ __Vtemp5955;
    VlWide<4>/*127:0*/ __Vtemp5960;
    VlWide<4>/*127:0*/ __Vtemp5961;
    VlWide<4>/*127:0*/ __Vtemp5962;
    VlWide<4>/*127:0*/ __Vtemp5964;
    VlWide<4>/*127:0*/ __Vtemp5965;
    VlWide<4>/*127:0*/ __Vtemp5967;
    VlWide<4>/*127:0*/ __Vtemp5972;
    VlWide<4>/*127:0*/ __Vtemp5973;
    VlWide<4>/*127:0*/ __Vtemp5974;
    VlWide<4>/*127:0*/ __Vtemp5976;
    VlWide<4>/*127:0*/ __Vtemp5977;
    VlWide<4>/*127:0*/ __Vtemp5979;
    VlWide<4>/*127:0*/ __Vtemp5984;
    VlWide<4>/*127:0*/ __Vtemp5985;
    VlWide<4>/*127:0*/ __Vtemp5986;
    VlWide<4>/*127:0*/ __Vtemp5988;
    VlWide<4>/*127:0*/ __Vtemp5989;
    VlWide<4>/*127:0*/ __Vtemp5991;
    VlWide<4>/*127:0*/ __Vtemp5996;
    VlWide<4>/*127:0*/ __Vtemp5997;
    VlWide<4>/*127:0*/ __Vtemp5998;
    VlWide<4>/*127:0*/ __Vtemp6000;
    VlWide<4>/*127:0*/ __Vtemp6001;
    VlWide<4>/*127:0*/ __Vtemp6003;
    VlWide<4>/*127:0*/ __Vtemp6008;
    VlWide<4>/*127:0*/ __Vtemp6009;
    VlWide<4>/*127:0*/ __Vtemp6010;
    VlWide<4>/*127:0*/ __Vtemp6012;
    VlWide<4>/*127:0*/ __Vtemp6013;
    VlWide<4>/*127:0*/ __Vtemp6015;
    VlWide<4>/*127:0*/ __Vtemp6020;
    VlWide<4>/*127:0*/ __Vtemp6021;
    VlWide<4>/*127:0*/ __Vtemp6022;
    VlWide<4>/*127:0*/ __Vtemp6024;
    VlWide<4>/*127:0*/ __Vtemp6025;
    VlWide<4>/*127:0*/ __Vtemp6027;
    VlWide<4>/*127:0*/ __Vtemp6032;
    VlWide<4>/*127:0*/ __Vtemp6033;
    VlWide<4>/*127:0*/ __Vtemp6034;
    VlWide<4>/*127:0*/ __Vtemp6036;
    VlWide<4>/*127:0*/ __Vtemp6037;
    VlWide<4>/*127:0*/ __Vtemp6039;
    VlWide<4>/*127:0*/ __Vtemp6044;
    VlWide<4>/*127:0*/ __Vtemp6045;
    VlWide<4>/*127:0*/ __Vtemp6046;
    VlWide<4>/*127:0*/ __Vtemp6048;
    VlWide<4>/*127:0*/ __Vtemp6049;
    VlWide<4>/*127:0*/ __Vtemp6051;
    VlWide<4>/*127:0*/ __Vtemp6056;
    VlWide<4>/*127:0*/ __Vtemp6057;
    VlWide<4>/*127:0*/ __Vtemp6058;
    VlWide<4>/*127:0*/ __Vtemp6060;
    VlWide<4>/*127:0*/ __Vtemp6061;
    VlWide<4>/*127:0*/ __Vtemp6063;
    VlWide<4>/*127:0*/ __Vtemp6068;
    VlWide<4>/*127:0*/ __Vtemp6069;
    VlWide<4>/*127:0*/ __Vtemp6070;
    VlWide<4>/*127:0*/ __Vtemp6072;
    VlWide<4>/*127:0*/ __Vtemp6073;
    VlWide<4>/*127:0*/ __Vtemp6075;
    VlWide<4>/*127:0*/ __Vtemp6080;
    VlWide<4>/*127:0*/ __Vtemp6081;
    VlWide<4>/*127:0*/ __Vtemp6082;
    VlWide<4>/*127:0*/ __Vtemp6084;
    VlWide<4>/*127:0*/ __Vtemp6085;
    VlWide<4>/*127:0*/ __Vtemp6087;
    VlWide<4>/*127:0*/ __Vtemp6092;
    VlWide<4>/*127:0*/ __Vtemp6093;
    VlWide<4>/*127:0*/ __Vtemp6094;
    VlWide<4>/*127:0*/ __Vtemp6096;
    VlWide<4>/*127:0*/ __Vtemp6097;
    VlWide<4>/*127:0*/ __Vtemp6099;
    VlWide<4>/*127:0*/ __Vtemp6104;
    VlWide<4>/*127:0*/ __Vtemp6105;
    VlWide<4>/*127:0*/ __Vtemp6106;
    VlWide<4>/*127:0*/ __Vtemp6108;
    VlWide<4>/*127:0*/ __Vtemp6109;
    VlWide<4>/*127:0*/ __Vtemp6111;
    VlWide<4>/*127:0*/ __Vtemp6116;
    VlWide<3>/*95:0*/ __Vtemp6117;
    VlWide<3>/*95:0*/ __Vtemp6118;
    VlWide<3>/*95:0*/ __Vtemp6121;
    VlWide<3>/*95:0*/ __Vtemp6122;
    VlWide<4>/*127:0*/ __Vtemp6123;
    VlWide<4>/*127:0*/ __Vtemp6124;
    VlWide<4>/*127:0*/ __Vtemp6125;
    VlWide<4>/*127:0*/ __Vtemp6126;
    VlWide<4>/*127:0*/ __Vtemp6127;
    VlWide<4>/*127:0*/ __Vtemp6128;
    VlWide<4>/*127:0*/ __Vtemp6129;
    VlWide<4>/*127:0*/ __Vtemp6130;
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
                                     & (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
            tracep->chgIData(oldp+51,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr),32);
            tracep->chgCData(oldp+52,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize),3);
            tracep->chgBit(oldp+53,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid));
            tracep->chgQData(oldp+54,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata),64);
            tracep->chgCData(oldp+56,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb),8);
            tracep->chgBit(oldp+57,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wlast));
            tracep->chgBit(oldp+58,((7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+59,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                     & ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                         ? (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                         : (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))))));
            tracep->chgCData(oldp+60,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                        ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                            ? 0U : 1U)
                                        : 0U)),4);
            tracep->chgIData(oldp+61,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                        ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                            ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                                ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)
                                                : ((IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                            >> 3U)) 
                                                   << 3U))
                                            : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr)
                                        : 0U)),32);
            tracep->chgCData(oldp+62,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                        ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                            ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                                ? 2U
                                                : 3U)
                                            : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize))
                                        : 0U)),3);
            tracep->chgBit(oldp+63,(((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                      ? (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                      : ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                         & (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))))));
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
            tracep->chgBit(oldp+138,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict));
            tracep->chgCData(oldp+139,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out),4);
            tracep->chgBit(oldp+140,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict));
            tracep->chgCData(oldp+141,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out),4);
            tracep->chgCData(oldp+142,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out),4);
            tracep->chgQData(oldp+143,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc),64);
            tracep->chgIData(oldp+145,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_inst),32);
            tracep->chgBit(oldp+146,((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))));
            tracep->chgIData(oldp+147,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                         ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)
                                         : ((IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                     >> 3U)) 
                                            << 3U))),32);
            tracep->chgCData(oldp+148,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                         ? 2U : 3U)),3);
            tracep->chgBit(oldp+149,((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))));
            tracep->chgBit(oldp+150,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out));
            tracep->chgCData(oldp+151,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out),4);
            tracep->chgIData(oldp+152,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out),32);
            tracep->chgQData(oldp+153,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out),64);
            tracep->chgCData(oldp+155,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+156,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+157,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0x14U))),5);
            tracep->chgSData(oldp+158,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+159,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm),64);
            tracep->chgQData(oldp+161,((QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                           >> 0xfU))))),64);
            tracep->chgQData(oldp+163,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc),64);
            tracep->chgBit(oldp+165,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl));
            tracep->chgCData(oldp+166,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl),5);
            tracep->chgCData(oldp+167,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src),3);
            tracep->chgCData(oldp+168,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_MEM_ctrl),4);
            tracep->chgCData(oldp+169,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl),4);
            tracep->chgBit(oldp+170,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out));
            tracep->chgCData(oldp+171,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out),4);
            tracep->chgCData(oldp+172,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rd_out),5);
            tracep->chgCData(oldp+173,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out),5);
            tracep->chgCData(oldp+174,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out),5);
            tracep->chgSData(oldp+175,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out),12);
            tracep->chgQData(oldp+176,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_imm_out),64);
            tracep->chgQData(oldp+178,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_zimm_out),64);
            tracep->chgQData(oldp+180,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_pc_out),64);
            tracep->chgCData(oldp+182,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out),5);
            tracep->chgCData(oldp+183,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out),3);
            tracep->chgCData(oldp+184,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_MEM_ctrl_out),4);
            tracep->chgCData(oldp+185,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out),4);
            tracep->chgQData(oldp+186,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out),64);
            tracep->chgBit(oldp+188,((1U & ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state))
                                             ? ((((
                                                   ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                                  & (0U 
                                                     == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                                                 & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict)))
                                                 ? 
                                                ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__multiplication)) 
                                                 & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__division)))
                                                 : 
                                                ((~ 
                                                  (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                                      & (0U 
                                                         == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                                                   & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict))) 
                                                 & ((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                                      & (0U 
                                                         != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))))
                                             : ((3U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state)) 
                                                & (~ 
                                                   ((0U 
                                                     != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out)) 
                                                    | (0U 
                                                       != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))))))));
            tracep->chgBit(oldp+189,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out));
            tracep->chgCData(oldp+190,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out),4);
            tracep->chgQData(oldp+191,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out),64);
            tracep->chgCData(oldp+193,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out),5);
            tracep->chgCData(oldp+194,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs1_out),5);
            tracep->chgCData(oldp+195,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out),5);
            tracep->chgSData(oldp+196,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_csr_out),12);
            tracep->chgQData(oldp+197,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_imm_out),64);
            tracep->chgQData(oldp+199,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_zimm_out),64);
            tracep->chgQData(oldp+201,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_pc_out),64);
            tracep->chgCData(oldp+203,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out),4);
            tracep->chgCData(oldp+204,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out),4);
            tracep->chgBit(oldp+205,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
                                       ? (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                             & (0U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                                           & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict)))
                                           ? (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
                                           : ((~ ((
                                                   ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict))) 
                                              & (((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                                  & (0U 
                                                     != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out))) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))))
                                       : ((8U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)) 
                                          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))))));
            tracep->chgQData(oldp+206,(((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
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
            tracep->chgCData(oldp+208,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out),4);
            tracep->chgBit(oldp+209,((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+210,((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgIData(oldp+211,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr),32);
            tracep->chgCData(oldp+212,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize),3);
            tracep->chgBit(oldp+213,((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+214,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out));
            tracep->chgCData(oldp+215,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out),4);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out),64);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_MEM_out),64);
            tracep->chgCData(oldp+220,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out),5);
            tracep->chgCData(oldp+221,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out),5);
            tracep->chgSData(oldp+222,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out),12);
            tracep->chgQData(oldp+223,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_imm_out),64);
            tracep->chgQData(oldp+225,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out),64);
            tracep->chgQData(oldp+227,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out),64);
            tracep->chgCData(oldp+229,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out),4);
            tracep->chgQData(oldp+230,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc),64);
            tracep->chgCData(oldp+234,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl),2);
            tracep->chgQData(oldp+235,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus),64);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie),64);
            tracep->chgQData(oldp+239,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip),64);
            tracep->chgQData(oldp+241,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data),64);
            tracep->chgQData(oldp+243,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data),64);
            tracep->chgQData(oldp+245,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data),64);
            tracep->chgQData(oldp+247,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
                                       [vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out]),64);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_csr_data),64);
            tracep->chgQData(oldp+251,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data),64);
            tracep->chgBit(oldp+253,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime 
                                      >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp)));
            tracep->chgBit(oldp+254,((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))));
            tracep->chgBit(oldp+255,((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))));
            tracep->chgBit(oldp+256,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bvalid));
            tracep->chgCData(oldp+257,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bid),4);
            tracep->chgBit(oldp+258,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rvalid));
            tracep->chgCData(oldp+259,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rid),4);
            tracep->chgQData(oldp+260,(((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
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
            tracep->chgBit(oldp+262,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rlast));
            tracep->chgCData(oldp+263,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bresp),2);
            tracep->chgBit(oldp+264,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                      & (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
            tracep->chgCData(oldp+265,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? 1U : 0U)),4);
            tracep->chgIData(oldp+266,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr),32);
            tracep->chgCData(oldp+267,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_arsize),3);
            tracep->chgBit(oldp+268,(((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                      & (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
            tracep->chgCData(oldp+269,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state),3);
            tracep->chgQData(oldp+270,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata),64);
            tracep->chgBit(oldp+272,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit1));
            tracep->chgBit(oldp+273,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit2));
            tracep->chgBit(oldp+274,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit3));
            tracep->chgBit(oldp+275,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit4));
            tracep->chgBit(oldp+276,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit5));
            tracep->chgBit(oldp+277,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit6));
            tracep->chgBit(oldp+278,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit7));
            tracep->chgBit(oldp+279,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit8));
            tracep->chgBit(oldp+280,(((((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit1) 
                                            | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit2)) 
                                           | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit3)) 
                                          | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit4)) 
                                         | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit5)) 
                                        | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit6)) 
                                       | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit7)) 
                                      | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit8))));
            tracep->chgCData(oldp+281,((7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc))),3);
            tracep->chgQData(oldp+282,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                        >> 9U)),55);
            tracep->chgBit(oldp+284,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached));
            tracep->chgCData(oldp+285,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__replace_line),3);
            tracep->chgBit(oldp+286,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie 
                                                    >> 7U)))));
            tracep->chgBit(oldp+287,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip 
                                                    >> 7U)))));
            tracep->chgBit(oldp+288,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgIData(oldp+289,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__r),32);
            tracep->chgIData(oldp+290,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__k),32);
            tracep->chgCData(oldp+291,((0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)),7);
            tracep->chgCData(oldp+292,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+293,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x1aU)),6);
            tracep->chgCData(oldp+294,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+295,((0x3fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0x14U))),6);
            tracep->chgBit(oldp+296,((3U == (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+297,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state),2);
            tracep->chgQData(oldp+298,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle),64);
            tracep->chgQData(oldp+300,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1),64);
            tracep->chgQData(oldp+302,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2),64);
            tracep->chgBit(oldp+304,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__multiplication));
            tracep->chgBit(oldp+305,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__division));
            tracep->chgBit(oldp+306,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state)) 
                                      & ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                             & (0U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                                          & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict))) 
                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__multiplication)))));
            tracep->chgCData(oldp+307,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_signed),2);
            tracep->chgBit(oldp+308,((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__state))));
            tracep->chgQData(oldp+309,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_hi),64);
            tracep->chgQData(oldp+311,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL_result_lo),64);
            tracep->chgBit(oldp+313,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__state)) 
                                      & ((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                             & (0U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                           & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                                          & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict))) 
                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__division)))));
            tracep->chgBit(oldp+314,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed));
            tracep->chgBit(oldp+315,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_divw));
            tracep->chgBit(oldp+316,((((0x20U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__state)) 
                                       & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_divw)) 
                                      | (0x40U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__state)))));
            tracep->chgQData(oldp+317,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_positive)
                                         ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_out
                                         : (1ULL + 
                                            (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_out)))),64);
            tracep->chgQData(oldp+319,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_positive)
                                         ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_out
                                         : (1ULL + 
                                            (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_out)))),64);
            tracep->chgQData(oldp+321,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_quotient_out),64);
            tracep->chgQData(oldp+323,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_remainder_out),64);
            tracep->chgWData(oldp+325,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand),128);
            tracep->chgWData(oldp+329,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier),66);
            tracep->chgQData(oldp+332,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c),33);
            tracep->chgWData(oldp+334,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src1),128);
            tracep->chgWData(oldp+338,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__adder_src2),128);
            tracep->chgIData(oldp+342,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__r),32);
            tracep->chgCData(oldp+343,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__state),3);
            tracep->chgCData(oldp+344,((6U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              << 1U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5727, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 1U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative) {
                __Vtemp5732[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U]);
                __Vtemp5732[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U]);
                __Vtemp5732[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U]);
                __Vtemp5732[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U]);
            } else {
                __Vtemp5732[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                                        ? (~ __Vtemp5727[0U])
                                        : 0U));
                __Vtemp5732[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                                        ? (~ __Vtemp5727[1U])
                                        : 0U));
                __Vtemp5732[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                                        ? (~ __Vtemp5727[2U])
                                        : 0U));
                __Vtemp5732[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)
                                    ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)
                                        ? (~ __Vtemp5727[3U])
                                        : 0U));
            }
            tracep->chgWData(oldp+345,(__Vtemp5732),128);
            tracep->chgBit(oldp+349,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative) 
                                      | ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive)) 
                                         & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative)))));
            tracep->chgBit(oldp+350,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+351,((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U])));
            tracep->chgBit(oldp+352,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_negative));
            tracep->chgBit(oldp+353,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_double_negative));
            tracep->chgBit(oldp+354,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core0__DOT__sel_positive));
            tracep->chgCData(oldp+355,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 1U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5733, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
            tracep->chgWData(oldp+356,(__Vtemp5733),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5734, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5736, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 2U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5737, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5739, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 3U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5744[0U] = (~ __Vtemp5734[0U]);
                __Vtemp5744[1U] = (~ __Vtemp5734[1U]);
                __Vtemp5744[2U] = (~ __Vtemp5734[2U]);
                __Vtemp5744[3U] = (~ __Vtemp5734[3U]);
            } else {
                __Vtemp5744[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5736[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5737[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5739[0U]
                                            : 0U)));
                __Vtemp5744[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5736[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5737[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5739[1U]
                                            : 0U)));
                __Vtemp5744[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5736[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5737[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5739[2U]
                                            : 0U)));
                __Vtemp5744[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5736[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5737[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5739[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+360,(__Vtemp5744),128);
            tracep->chgBit(oldp+364,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__2__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+365,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 3U))));
            tracep->chgBit(oldp+366,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+367,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+368,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+369,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+370,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__2__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+371,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 3U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5745, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
            tracep->chgWData(oldp+372,(__Vtemp5745),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5746, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5748, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 4U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5749, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5751, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 5U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5756[0U] = (~ __Vtemp5746[0U]);
                __Vtemp5756[1U] = (~ __Vtemp5746[1U]);
                __Vtemp5756[2U] = (~ __Vtemp5746[2U]);
                __Vtemp5756[3U] = (~ __Vtemp5746[3U]);
            } else {
                __Vtemp5756[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5748[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5749[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5751[0U]
                                            : 0U)));
                __Vtemp5756[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5748[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5749[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5751[1U]
                                            : 0U)));
                __Vtemp5756[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5748[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5749[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5751[2U]
                                            : 0U)));
                __Vtemp5756[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5748[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5749[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5751[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+376,(__Vtemp5756),128);
            tracep->chgBit(oldp+380,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__4__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+381,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 5U))));
            tracep->chgBit(oldp+382,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+383,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+384,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+385,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+386,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__4__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+387,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 5U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5757, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
            tracep->chgWData(oldp+388,(__Vtemp5757),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5758, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5760, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 6U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5761, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5763, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 7U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5768[0U] = (~ __Vtemp5758[0U]);
                __Vtemp5768[1U] = (~ __Vtemp5758[1U]);
                __Vtemp5768[2U] = (~ __Vtemp5758[2U]);
                __Vtemp5768[3U] = (~ __Vtemp5758[3U]);
            } else {
                __Vtemp5768[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5760[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5761[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5763[0U]
                                            : 0U)));
                __Vtemp5768[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5760[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5761[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5763[1U]
                                            : 0U)));
                __Vtemp5768[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5760[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5761[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5763[2U]
                                            : 0U)));
                __Vtemp5768[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5760[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5761[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5763[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+392,(__Vtemp5768),128);
            tracep->chgBit(oldp+396,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__6__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+397,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 7U))));
            tracep->chgBit(oldp+398,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 6U))));
            tracep->chgBit(oldp+399,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+400,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+401,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+402,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__6__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+403,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 7U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5769, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
            tracep->chgWData(oldp+404,(__Vtemp5769),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5770, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5772, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 8U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5773, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5775, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 9U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5780[0U] = (~ __Vtemp5770[0U]);
                __Vtemp5780[1U] = (~ __Vtemp5770[1U]);
                __Vtemp5780[2U] = (~ __Vtemp5770[2U]);
                __Vtemp5780[3U] = (~ __Vtemp5770[3U]);
            } else {
                __Vtemp5780[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5772[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5773[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5775[0U]
                                            : 0U)));
                __Vtemp5780[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5772[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5773[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5775[1U]
                                            : 0U)));
                __Vtemp5780[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5772[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5773[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5775[2U]
                                            : 0U)));
                __Vtemp5780[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5772[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5773[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5775[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+408,(__Vtemp5780),128);
            tracep->chgBit(oldp+412,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__8__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+413,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 9U))));
            tracep->chgBit(oldp+414,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 8U))));
            tracep->chgBit(oldp+415,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+416,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+417,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+418,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__8__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+419,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 9U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5781, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
            tracep->chgWData(oldp+420,(__Vtemp5781),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5782, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5784, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xaU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5785, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5787, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xbU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5792[0U] = (~ __Vtemp5782[0U]);
                __Vtemp5792[1U] = (~ __Vtemp5782[1U]);
                __Vtemp5792[2U] = (~ __Vtemp5782[2U]);
                __Vtemp5792[3U] = (~ __Vtemp5782[3U]);
            } else {
                __Vtemp5792[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5784[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5785[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5787[0U]
                                            : 0U)));
                __Vtemp5792[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5784[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5785[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5787[1U]
                                            : 0U)));
                __Vtemp5792[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5784[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5785[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5787[2U]
                                            : 0U)));
                __Vtemp5792[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5784[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5785[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5787[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+424,(__Vtemp5792),128);
            tracep->chgBit(oldp+428,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__10__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+429,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+430,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+431,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+432,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+433,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+434,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__10__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+435,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0xbU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5793, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
            tracep->chgWData(oldp+436,(__Vtemp5793),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5794, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5796, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xcU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5797, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5799, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xdU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5804[0U] = (~ __Vtemp5794[0U]);
                __Vtemp5804[1U] = (~ __Vtemp5794[1U]);
                __Vtemp5804[2U] = (~ __Vtemp5794[2U]);
                __Vtemp5804[3U] = (~ __Vtemp5794[3U]);
            } else {
                __Vtemp5804[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5796[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5797[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5799[0U]
                                            : 0U)));
                __Vtemp5804[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5796[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5797[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5799[1U]
                                            : 0U)));
                __Vtemp5804[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5796[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5797[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5799[2U]
                                            : 0U)));
                __Vtemp5804[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5796[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5797[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5799[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+440,(__Vtemp5804),128);
            tracep->chgBit(oldp+444,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__12__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+445,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+446,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+447,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+448,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+449,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+450,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__12__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+451,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0xdU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5805, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
            tracep->chgWData(oldp+452,(__Vtemp5805),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5806, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5808, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xeU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5809, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5811, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0xfU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5816[0U] = (~ __Vtemp5806[0U]);
                __Vtemp5816[1U] = (~ __Vtemp5806[1U]);
                __Vtemp5816[2U] = (~ __Vtemp5806[2U]);
                __Vtemp5816[3U] = (~ __Vtemp5806[3U]);
            } else {
                __Vtemp5816[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5808[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5809[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5811[0U]
                                            : 0U)));
                __Vtemp5816[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5808[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5809[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5811[1U]
                                            : 0U)));
                __Vtemp5816[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5808[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5809[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5811[2U]
                                            : 0U)));
                __Vtemp5816[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5808[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5809[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5811[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+456,(__Vtemp5816),128);
            tracep->chgBit(oldp+460,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__14__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+461,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+462,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+463,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+464,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+465,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+466,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__14__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+467,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0xfU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5817, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
            tracep->chgWData(oldp+468,(__Vtemp5817),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5818, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5820, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x10U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5821, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5823, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x11U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5828[0U] = (~ __Vtemp5818[0U]);
                __Vtemp5828[1U] = (~ __Vtemp5818[1U]);
                __Vtemp5828[2U] = (~ __Vtemp5818[2U]);
                __Vtemp5828[3U] = (~ __Vtemp5818[3U]);
            } else {
                __Vtemp5828[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5820[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5821[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5823[0U]
                                            : 0U)));
                __Vtemp5828[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5820[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5821[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5823[1U]
                                            : 0U)));
                __Vtemp5828[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5820[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5821[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5823[2U]
                                            : 0U)));
                __Vtemp5828[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5820[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5821[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5823[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+472,(__Vtemp5828),128);
            tracep->chgBit(oldp+476,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__16__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+477,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+478,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+479,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+480,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+481,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+482,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__16__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+483,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x11U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5829, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
            tracep->chgWData(oldp+484,(__Vtemp5829),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5830, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5832, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x12U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5833, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5835, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x13U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5840[0U] = (~ __Vtemp5830[0U]);
                __Vtemp5840[1U] = (~ __Vtemp5830[1U]);
                __Vtemp5840[2U] = (~ __Vtemp5830[2U]);
                __Vtemp5840[3U] = (~ __Vtemp5830[3U]);
            } else {
                __Vtemp5840[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5832[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5833[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5835[0U]
                                            : 0U)));
                __Vtemp5840[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5832[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5833[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5835[1U]
                                            : 0U)));
                __Vtemp5840[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5832[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5833[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5835[2U]
                                            : 0U)));
                __Vtemp5840[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5832[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5833[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5835[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+488,(__Vtemp5840),128);
            tracep->chgBit(oldp+492,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__18__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+493,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+494,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+495,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+496,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+497,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+498,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__18__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+499,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x13U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5841, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
            tracep->chgWData(oldp+500,(__Vtemp5841),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5842, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5844, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x14U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5845, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5847, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x15U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5852[0U] = (~ __Vtemp5842[0U]);
                __Vtemp5852[1U] = (~ __Vtemp5842[1U]);
                __Vtemp5852[2U] = (~ __Vtemp5842[2U]);
                __Vtemp5852[3U] = (~ __Vtemp5842[3U]);
            } else {
                __Vtemp5852[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5844[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5845[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5847[0U]
                                            : 0U)));
                __Vtemp5852[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5844[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5845[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5847[1U]
                                            : 0U)));
                __Vtemp5852[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5844[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5845[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5847[2U]
                                            : 0U)));
                __Vtemp5852[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5844[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5845[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5847[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+504,(__Vtemp5852),128);
            tracep->chgBit(oldp+508,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__20__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+509,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+510,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+511,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+512,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+513,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+514,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__20__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+515,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x15U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5853, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
            tracep->chgWData(oldp+516,(__Vtemp5853),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5854, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5856, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x16U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5857, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5859, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x17U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5864[0U] = (~ __Vtemp5854[0U]);
                __Vtemp5864[1U] = (~ __Vtemp5854[1U]);
                __Vtemp5864[2U] = (~ __Vtemp5854[2U]);
                __Vtemp5864[3U] = (~ __Vtemp5854[3U]);
            } else {
                __Vtemp5864[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5856[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5857[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5859[0U]
                                            : 0U)));
                __Vtemp5864[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5856[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5857[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5859[1U]
                                            : 0U)));
                __Vtemp5864[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5856[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5857[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5859[2U]
                                            : 0U)));
                __Vtemp5864[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5856[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5857[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5859[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+520,(__Vtemp5864),128);
            tracep->chgBit(oldp+524,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__22__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+525,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+526,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+527,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+528,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+529,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+530,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__22__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+531,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x17U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5865, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
            tracep->chgWData(oldp+532,(__Vtemp5865),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5866, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5868, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x18U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5869, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5871, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x19U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5876[0U] = (~ __Vtemp5866[0U]);
                __Vtemp5876[1U] = (~ __Vtemp5866[1U]);
                __Vtemp5876[2U] = (~ __Vtemp5866[2U]);
                __Vtemp5876[3U] = (~ __Vtemp5866[3U]);
            } else {
                __Vtemp5876[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5868[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5869[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5871[0U]
                                            : 0U)));
                __Vtemp5876[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5868[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5869[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5871[1U]
                                            : 0U)));
                __Vtemp5876[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5868[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5869[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5871[2U]
                                            : 0U)));
                __Vtemp5876[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5868[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5869[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5871[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+536,(__Vtemp5876),128);
            tracep->chgBit(oldp+540,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__24__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+541,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+542,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+543,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+544,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+545,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+546,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__24__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+547,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x19U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5877, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
            tracep->chgWData(oldp+548,(__Vtemp5877),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5878, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5880, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5881, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5883, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1bU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5888[0U] = (~ __Vtemp5878[0U]);
                __Vtemp5888[1U] = (~ __Vtemp5878[1U]);
                __Vtemp5888[2U] = (~ __Vtemp5878[2U]);
                __Vtemp5888[3U] = (~ __Vtemp5878[3U]);
            } else {
                __Vtemp5888[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5880[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5881[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5883[0U]
                                            : 0U)));
                __Vtemp5888[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5880[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5881[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5883[1U]
                                            : 0U)));
                __Vtemp5888[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5880[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5881[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5883[2U]
                                            : 0U)));
                __Vtemp5888[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5880[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5881[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5883[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+552,(__Vtemp5888),128);
            tracep->chgBit(oldp+556,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__26__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+557,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+558,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+559,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+560,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+561,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+562,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__26__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+563,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                              >> 0x1bU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5889, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
            tracep->chgWData(oldp+564,(__Vtemp5889),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5890, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5892, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5893, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5895, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1dU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5900[0U] = (~ __Vtemp5890[0U]);
                __Vtemp5900[1U] = (~ __Vtemp5890[1U]);
                __Vtemp5900[2U] = (~ __Vtemp5890[2U]);
                __Vtemp5900[3U] = (~ __Vtemp5890[3U]);
            } else {
                __Vtemp5900[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5892[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5893[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5895[0U]
                                            : 0U)));
                __Vtemp5900[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5892[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5893[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5895[1U]
                                            : 0U)));
                __Vtemp5900[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5892[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5893[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5895[2U]
                                            : 0U)));
                __Vtemp5900[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5892[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5893[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5895[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+568,(__Vtemp5900),128);
            tracep->chgBit(oldp+572,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__28__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+573,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+574,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+575,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+576,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+577,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+578,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__28__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+579,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                        >> 0x1dU)),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5901, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
            tracep->chgWData(oldp+580,(__Vtemp5901),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5902, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5904, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5905, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5907, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x1fU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5912[0U] = (~ __Vtemp5902[0U]);
                __Vtemp5912[1U] = (~ __Vtemp5902[1U]);
                __Vtemp5912[2U] = (~ __Vtemp5902[2U]);
                __Vtemp5912[3U] = (~ __Vtemp5902[3U]);
            } else {
                __Vtemp5912[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5904[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5905[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5907[0U]
                                            : 0U)));
                __Vtemp5912[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5904[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5905[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5907[1U]
                                            : 0U)));
                __Vtemp5912[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5904[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5905[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5907[2U]
                                            : 0U)));
                __Vtemp5912[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5904[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5905[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5907[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+584,(__Vtemp5912),128);
            tracep->chgBit(oldp+588,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__30__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+589,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+590,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+591,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+592,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+593,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+594,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__30__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+595,((7U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[0U] 
                                                 >> 0x1fU)))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5913, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
            tracep->chgWData(oldp+596,(__Vtemp5913),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5914, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5916, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x20U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5917, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5919, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x21U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5924[0U] = (~ __Vtemp5914[0U]);
                __Vtemp5924[1U] = (~ __Vtemp5914[1U]);
                __Vtemp5924[2U] = (~ __Vtemp5914[2U]);
                __Vtemp5924[3U] = (~ __Vtemp5914[3U]);
            } else {
                __Vtemp5924[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5916[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5917[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5919[0U]
                                            : 0U)));
                __Vtemp5924[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5916[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5917[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5919[1U]
                                            : 0U)));
                __Vtemp5924[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5916[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5917[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5919[2U]
                                            : 0U)));
                __Vtemp5924[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5916[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5917[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5919[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+600,(__Vtemp5924),128);
            tracep->chgBit(oldp+604,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__32__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+605,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+606,((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U])));
            tracep->chgBit(oldp+607,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+608,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+609,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+610,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__32__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+611,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 1U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5925, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
            tracep->chgWData(oldp+612,(__Vtemp5925),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5926, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5928, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x22U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5929, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5931, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x23U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5936[0U] = (~ __Vtemp5926[0U]);
                __Vtemp5936[1U] = (~ __Vtemp5926[1U]);
                __Vtemp5936[2U] = (~ __Vtemp5926[2U]);
                __Vtemp5936[3U] = (~ __Vtemp5926[3U]);
            } else {
                __Vtemp5936[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5928[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5929[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5931[0U]
                                            : 0U)));
                __Vtemp5936[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5928[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5929[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5931[1U]
                                            : 0U)));
                __Vtemp5936[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5928[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5929[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5931[2U]
                                            : 0U)));
                __Vtemp5936[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5928[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5929[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5931[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+616,(__Vtemp5936),128);
            tracep->chgBit(oldp+620,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__34__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+621,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 3U))));
            tracep->chgBit(oldp+622,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 2U))));
            tracep->chgBit(oldp+623,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+624,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+625,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+626,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__34__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+627,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 3U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5937, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
            tracep->chgWData(oldp+628,(__Vtemp5937),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5938, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5940, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x24U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5941, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5943, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x25U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5948[0U] = (~ __Vtemp5938[0U]);
                __Vtemp5948[1U] = (~ __Vtemp5938[1U]);
                __Vtemp5948[2U] = (~ __Vtemp5938[2U]);
                __Vtemp5948[3U] = (~ __Vtemp5938[3U]);
            } else {
                __Vtemp5948[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5940[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5941[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5943[0U]
                                            : 0U)));
                __Vtemp5948[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5940[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5941[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5943[1U]
                                            : 0U)));
                __Vtemp5948[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5940[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5941[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5943[2U]
                                            : 0U)));
                __Vtemp5948[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5940[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5941[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5943[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+632,(__Vtemp5948),128);
            tracep->chgBit(oldp+636,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__36__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+637,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 5U))));
            tracep->chgBit(oldp+638,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+639,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+640,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+641,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+642,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__36__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+643,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 5U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5949, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
            tracep->chgWData(oldp+644,(__Vtemp5949),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5950, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5952, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x26U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5953, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5955, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x27U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5960[0U] = (~ __Vtemp5950[0U]);
                __Vtemp5960[1U] = (~ __Vtemp5950[1U]);
                __Vtemp5960[2U] = (~ __Vtemp5950[2U]);
                __Vtemp5960[3U] = (~ __Vtemp5950[3U]);
            } else {
                __Vtemp5960[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5952[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5953[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5955[0U]
                                            : 0U)));
                __Vtemp5960[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5952[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5953[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5955[1U]
                                            : 0U)));
                __Vtemp5960[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5952[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5953[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5955[2U]
                                            : 0U)));
                __Vtemp5960[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5952[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5953[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5955[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+648,(__Vtemp5960),128);
            tracep->chgBit(oldp+652,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__38__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+653,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 7U))));
            tracep->chgBit(oldp+654,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 6U))));
            tracep->chgBit(oldp+655,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+656,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+657,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+658,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__38__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+659,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 7U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5961, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
            tracep->chgWData(oldp+660,(__Vtemp5961),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5962, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5964, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x28U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5965, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5967, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x29U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5972[0U] = (~ __Vtemp5962[0U]);
                __Vtemp5972[1U] = (~ __Vtemp5962[1U]);
                __Vtemp5972[2U] = (~ __Vtemp5962[2U]);
                __Vtemp5972[3U] = (~ __Vtemp5962[3U]);
            } else {
                __Vtemp5972[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5964[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5965[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5967[0U]
                                            : 0U)));
                __Vtemp5972[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5964[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5965[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5967[1U]
                                            : 0U)));
                __Vtemp5972[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5964[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5965[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5967[2U]
                                            : 0U)));
                __Vtemp5972[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5964[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5965[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5967[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+664,(__Vtemp5972),128);
            tracep->chgBit(oldp+668,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__40__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+669,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 9U))));
            tracep->chgBit(oldp+670,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 8U))));
            tracep->chgBit(oldp+671,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+672,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+673,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+674,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__40__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+675,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 9U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5973, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
            tracep->chgWData(oldp+676,(__Vtemp5973),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5974, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5976, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5977, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5979, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2bU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5984[0U] = (~ __Vtemp5974[0U]);
                __Vtemp5984[1U] = (~ __Vtemp5974[1U]);
                __Vtemp5984[2U] = (~ __Vtemp5974[2U]);
                __Vtemp5984[3U] = (~ __Vtemp5974[3U]);
            } else {
                __Vtemp5984[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5976[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5977[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5979[0U]
                                            : 0U)));
                __Vtemp5984[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5976[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5977[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5979[1U]
                                            : 0U)));
                __Vtemp5984[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5976[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5977[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5979[2U]
                                            : 0U)));
                __Vtemp5984[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5976[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5977[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5979[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+680,(__Vtemp5984),128);
            tracep->chgBit(oldp+684,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__42__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+685,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+686,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+687,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+688,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+689,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+690,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__42__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+691,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0xbU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5985, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
            tracep->chgWData(oldp+692,(__Vtemp5985),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5986, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5988, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5989, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5991, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2dU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp5996[0U] = (~ __Vtemp5986[0U]);
                __Vtemp5996[1U] = (~ __Vtemp5986[1U]);
                __Vtemp5996[2U] = (~ __Vtemp5986[2U]);
                __Vtemp5996[3U] = (~ __Vtemp5986[3U]);
            } else {
                __Vtemp5996[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5988[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5989[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5991[0U]
                                            : 0U)));
                __Vtemp5996[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5988[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5989[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5991[1U]
                                            : 0U)));
                __Vtemp5996[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5988[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5989[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5991[2U]
                                            : 0U)));
                __Vtemp5996[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp5988[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp5989[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp5991[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+696,(__Vtemp5996),128);
            tracep->chgBit(oldp+700,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__44__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+701,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+702,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+703,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+704,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+705,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+706,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__44__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+707,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0xdU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5997, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
            tracep->chgWData(oldp+708,(__Vtemp5997),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp5998, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6000, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6001, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6003, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x2fU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6008[0U] = (~ __Vtemp5998[0U]);
                __Vtemp6008[1U] = (~ __Vtemp5998[1U]);
                __Vtemp6008[2U] = (~ __Vtemp5998[2U]);
                __Vtemp6008[3U] = (~ __Vtemp5998[3U]);
            } else {
                __Vtemp6008[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6000[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6001[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6003[0U]
                                            : 0U)));
                __Vtemp6008[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6000[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6001[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6003[1U]
                                            : 0U)));
                __Vtemp6008[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6000[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6001[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6003[2U]
                                            : 0U)));
                __Vtemp6008[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6000[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6001[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6003[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+712,(__Vtemp6008),128);
            tracep->chgBit(oldp+716,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__46__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+717,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+718,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+719,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+720,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+721,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+722,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__46__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+723,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0xfU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6009, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
            tracep->chgWData(oldp+724,(__Vtemp6009),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6010, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6012, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x30U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6013, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6015, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x31U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6020[0U] = (~ __Vtemp6010[0U]);
                __Vtemp6020[1U] = (~ __Vtemp6010[1U]);
                __Vtemp6020[2U] = (~ __Vtemp6010[2U]);
                __Vtemp6020[3U] = (~ __Vtemp6010[3U]);
            } else {
                __Vtemp6020[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6012[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6013[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6015[0U]
                                            : 0U)));
                __Vtemp6020[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6012[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6013[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6015[1U]
                                            : 0U)));
                __Vtemp6020[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6012[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6013[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6015[2U]
                                            : 0U)));
                __Vtemp6020[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6012[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6013[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6015[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+728,(__Vtemp6020),128);
            tracep->chgBit(oldp+732,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__48__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+733,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+734,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+735,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+736,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+737,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+738,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__48__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+739,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x11U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6021, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
            tracep->chgWData(oldp+740,(__Vtemp6021),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6022, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6024, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x32U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6025, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6027, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x33U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6032[0U] = (~ __Vtemp6022[0U]);
                __Vtemp6032[1U] = (~ __Vtemp6022[1U]);
                __Vtemp6032[2U] = (~ __Vtemp6022[2U]);
                __Vtemp6032[3U] = (~ __Vtemp6022[3U]);
            } else {
                __Vtemp6032[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6024[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6025[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6027[0U]
                                            : 0U)));
                __Vtemp6032[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6024[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6025[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6027[1U]
                                            : 0U)));
                __Vtemp6032[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6024[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6025[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6027[2U]
                                            : 0U)));
                __Vtemp6032[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6024[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6025[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6027[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+744,(__Vtemp6032),128);
            tracep->chgBit(oldp+748,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__50__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+749,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+750,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+751,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+752,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+753,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+754,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__50__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+755,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x13U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6033, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
            tracep->chgWData(oldp+756,(__Vtemp6033),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6034, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6036, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x34U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6037, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6039, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x35U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6044[0U] = (~ __Vtemp6034[0U]);
                __Vtemp6044[1U] = (~ __Vtemp6034[1U]);
                __Vtemp6044[2U] = (~ __Vtemp6034[2U]);
                __Vtemp6044[3U] = (~ __Vtemp6034[3U]);
            } else {
                __Vtemp6044[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6036[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6037[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6039[0U]
                                            : 0U)));
                __Vtemp6044[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6036[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6037[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6039[1U]
                                            : 0U)));
                __Vtemp6044[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6036[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6037[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6039[2U]
                                            : 0U)));
                __Vtemp6044[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6036[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6037[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6039[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+760,(__Vtemp6044),128);
            tracep->chgBit(oldp+764,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__52__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+765,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+766,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+767,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+768,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+769,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+770,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__52__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+771,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x15U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6045, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
            tracep->chgWData(oldp+772,(__Vtemp6045),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6046, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6048, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x36U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6049, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6051, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x37U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6056[0U] = (~ __Vtemp6046[0U]);
                __Vtemp6056[1U] = (~ __Vtemp6046[1U]);
                __Vtemp6056[2U] = (~ __Vtemp6046[2U]);
                __Vtemp6056[3U] = (~ __Vtemp6046[3U]);
            } else {
                __Vtemp6056[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6048[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6049[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6051[0U]
                                            : 0U)));
                __Vtemp6056[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6048[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6049[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6051[1U]
                                            : 0U)));
                __Vtemp6056[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6048[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6049[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6051[2U]
                                            : 0U)));
                __Vtemp6056[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6048[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6049[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6051[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+776,(__Vtemp6056),128);
            tracep->chgBit(oldp+780,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__54__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+781,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+782,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+783,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+784,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+785,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+786,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__54__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+787,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x17U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6057, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
            tracep->chgWData(oldp+788,(__Vtemp6057),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6058, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6060, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x38U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6061, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6063, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x39U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6068[0U] = (~ __Vtemp6058[0U]);
                __Vtemp6068[1U] = (~ __Vtemp6058[1U]);
                __Vtemp6068[2U] = (~ __Vtemp6058[2U]);
                __Vtemp6068[3U] = (~ __Vtemp6058[3U]);
            } else {
                __Vtemp6068[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6060[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6061[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6063[0U]
                                            : 0U)));
                __Vtemp6068[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6060[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6061[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6063[1U]
                                            : 0U)));
                __Vtemp6068[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6060[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6061[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6063[2U]
                                            : 0U)));
                __Vtemp6068[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6060[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6061[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6063[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+792,(__Vtemp6068),128);
            tracep->chgBit(oldp+796,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__56__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+797,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+798,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+799,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+800,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+801,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+802,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__56__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+803,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x19U))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6069, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
            tracep->chgWData(oldp+804,(__Vtemp6069),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6070, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6072, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3aU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6073, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6075, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3bU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6080[0U] = (~ __Vtemp6070[0U]);
                __Vtemp6080[1U] = (~ __Vtemp6070[1U]);
                __Vtemp6080[2U] = (~ __Vtemp6070[2U]);
                __Vtemp6080[3U] = (~ __Vtemp6070[3U]);
            } else {
                __Vtemp6080[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6072[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6073[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6075[0U]
                                            : 0U)));
                __Vtemp6080[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6072[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6073[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6075[1U]
                                            : 0U)));
                __Vtemp6080[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6072[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6073[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6075[2U]
                                            : 0U)));
                __Vtemp6080[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6072[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6073[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6075[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+808,(__Vtemp6080),128);
            tracep->chgBit(oldp+812,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__58__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+813,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+814,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+815,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+816,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+817,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+818,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__58__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+819,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                              >> 0x1bU))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6081, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
            tracep->chgWData(oldp+820,(__Vtemp6081),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6082, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6084, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3cU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6085, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6087, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3dU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6092[0U] = (~ __Vtemp6082[0U]);
                __Vtemp6092[1U] = (~ __Vtemp6082[1U]);
                __Vtemp6092[2U] = (~ __Vtemp6082[2U]);
                __Vtemp6092[3U] = (~ __Vtemp6082[3U]);
            } else {
                __Vtemp6092[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6084[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6085[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6087[0U]
                                            : 0U)));
                __Vtemp6092[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6084[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6085[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6087[1U]
                                            : 0U)));
                __Vtemp6092[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6084[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6085[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6087[2U]
                                            : 0U)));
                __Vtemp6092[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6084[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6085[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6087[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+824,(__Vtemp6092),128);
            tracep->chgBit(oldp+828,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__60__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+829,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+830,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+831,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+832,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+833,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+834,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__60__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+835,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                        >> 0x1dU)),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6093, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
            tracep->chgWData(oldp+836,(__Vtemp6093),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6094, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6096, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3eU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6097, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6099, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x3fU);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6104[0U] = (~ __Vtemp6094[0U]);
                __Vtemp6104[1U] = (~ __Vtemp6094[1U]);
                __Vtemp6104[2U] = (~ __Vtemp6094[2U]);
                __Vtemp6104[3U] = (~ __Vtemp6094[3U]);
            } else {
                __Vtemp6104[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6096[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6097[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6099[0U]
                                            : 0U)));
                __Vtemp6104[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6096[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6097[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6099[1U]
                                            : 0U)));
                __Vtemp6104[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6096[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6097[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6099[2U]
                                            : 0U)));
                __Vtemp6104[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6096[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6097[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6099[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+840,(__Vtemp6104),128);
            tracep->chgBit(oldp+844,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__62__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+845,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+846,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+847,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+848,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+849,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+850,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__62__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgCData(oldp+851,((7U & ((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
                                               << 1U) 
                                              | (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[1U] 
                                                 >> 0x1fU)))),3);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6105, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
            tracep->chgWData(oldp+852,(__Vtemp6105),128);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6106, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6108, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x40U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6109, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
            VL_SHIFTL_WWI(128,128,32, __Vtemp6111, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplicand, 0x41U);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative) {
                __Vtemp6116[0U] = (~ __Vtemp6106[0U]);
                __Vtemp6116[1U] = (~ __Vtemp6106[1U]);
                __Vtemp6116[2U] = (~ __Vtemp6106[2U]);
                __Vtemp6116[3U] = (~ __Vtemp6106[3U]);
            } else {
                __Vtemp6116[0U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6108[0U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6109[0U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6111[0U]
                                            : 0U)));
                __Vtemp6116[1U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6108[1U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6109[1U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6111[1U]
                                            : 0U)));
                __Vtemp6116[2U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6108[2U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6109[2U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6111[2U]
                                            : 0U)));
                __Vtemp6116[3U] = ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive)
                                    ? __Vtemp6108[3U]
                                    : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative)
                                        ? (~ __Vtemp6109[3U])
                                        : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive)
                                            ? __Vtemp6111[3U]
                                            : 0U)));
            }
            tracep->chgWData(oldp+856,(__Vtemp6116),128);
            tracep->chgBit(oldp+860,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT____Vcellout__Booth_core__BRA__64__KET____DOT__Booth_core__Booth_core_c));
            tracep->chgBit(oldp+861,((1U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+862,((1U & vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__multiplier[2U])));
            tracep->chgBit(oldp+863,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_negative));
            tracep->chgBit(oldp+864,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_negative));
            tracep->chgBit(oldp+865,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_positive));
            tracep->chgBit(oldp+866,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Booth_core__BRA__64__KET____DOT__Booth_core__DOT__sel_double_positive));
            tracep->chgWData(oldp+867,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend),128);
            VL_EXTEND_WQ(65,64, __Vtemp6117, (1ULL 
                                              + (~ vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)));
            VL_EXTEND_WQ(65,64, __Vtemp6118, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
            VL_EXTEND_WQ(65,64, __Vtemp6121, vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2);
            if (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed) {
                __Vtemp6122[0U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                  >> 0x3fU)))
                                    ? __Vtemp6117[0U]
                                    : __Vtemp6118[0U]);
                __Vtemp6122[1U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                  >> 0x3fU)))
                                    ? __Vtemp6117[1U]
                                    : __Vtemp6118[1U]);
                __Vtemp6122[2U] = ((1U & (IData)((vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                  >> 0x3fU)))
                                    ? __Vtemp6117[2U]
                                    : __Vtemp6118[2U]);
            } else {
                __Vtemp6122[0U] = __Vtemp6121[0U];
                __Vtemp6122[1U] = __Vtemp6121[1U];
                __Vtemp6122[2U] = __Vtemp6121[2U];
            }
            tracep->chgWData(oldp+871,(__Vtemp6122),65);
            tracep->chgQData(oldp+874,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient),64);
            tracep->chgWData(oldp+876,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__sub_out),65);
            tracep->chgQData(oldp+879,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__dividend_w),64);
            tracep->chgQData(oldp+881,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV_signed)
                                         ? ((1U & (IData)(
                                                          (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2 
                                                           >> 0x1fU)))
                                             ? (QData)((IData)(
                                                               ((IData)(1U) 
                                                                + 
                                                                (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)))))
                                             : (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)))
                                         : (QData)((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2)))),33);
            tracep->chgIData(oldp+883,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_w),32);
            tracep->chgQData(oldp+884,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__subw_out),33);
            tracep->chgQData(oldp+886,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_out),64);
            tracep->chgQData(oldp+888,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_out),64);
            tracep->chgBit(oldp+890,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__quotient_positive));
            tracep->chgBit(oldp+891,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__remainder_positive));
            tracep->chgCData(oldp+892,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__DIV__DOT__state),7);
            tracep->chgBit(oldp+893,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load));
            tracep->chgBit(oldp+894,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store));
            tracep->chgBit(oldp+895,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached));
            tracep->chgCData(oldp+896,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state),4);
            tracep->chgQData(oldp+897,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata),64);
            tracep->chgBit(oldp+899,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1));
            tracep->chgBit(oldp+900,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2));
            tracep->chgBit(oldp+901,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3));
            tracep->chgBit(oldp+902,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4));
            tracep->chgBit(oldp+903,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5));
            tracep->chgBit(oldp+904,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6));
            tracep->chgBit(oldp+905,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7));
            tracep->chgBit(oldp+906,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8));
            tracep->chgBit(oldp+907,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit));
            tracep->chgCData(oldp+908,((7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))),3);
            tracep->chgQData(oldp+909,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                        >> 9U)),55);
            tracep->chgCData(oldp+911,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__replace_line),3);
            tracep->chgBit(oldp+912,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align));
            tracep->chgIData(oldp+913,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__r),32);
            tracep->chgIData(oldp+914,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__k),32);
            tracep->chgQData(oldp+915,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask),64);
            tracep->chgQData(oldp+917,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata),64);
            tracep->chgQData(oldp+919,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata),64);
            tracep->chgQData(oldp+921,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata),64);
            tracep->chgQData(oldp+923,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0]),64);
            tracep->chgQData(oldp+925,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[1]),64);
            tracep->chgQData(oldp+927,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[2]),64);
            tracep->chgQData(oldp+929,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[3]),64);
            tracep->chgQData(oldp+931,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[4]),64);
            tracep->chgQData(oldp+933,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[5]),64);
            tracep->chgQData(oldp+935,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[6]),64);
            tracep->chgQData(oldp+937,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[7]),64);
            tracep->chgQData(oldp+939,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[8]),64);
            tracep->chgQData(oldp+941,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[9]),64);
            tracep->chgQData(oldp+943,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[10]),64);
            tracep->chgQData(oldp+945,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[11]),64);
            tracep->chgQData(oldp+947,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[12]),64);
            tracep->chgQData(oldp+949,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[13]),64);
            tracep->chgQData(oldp+951,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[14]),64);
            tracep->chgQData(oldp+953,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[15]),64);
            tracep->chgQData(oldp+955,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[16]),64);
            tracep->chgQData(oldp+957,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[17]),64);
            tracep->chgQData(oldp+959,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[18]),64);
            tracep->chgQData(oldp+961,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[19]),64);
            tracep->chgQData(oldp+963,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[20]),64);
            tracep->chgQData(oldp+965,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[21]),64);
            tracep->chgQData(oldp+967,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[22]),64);
            tracep->chgQData(oldp+969,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[23]),64);
            tracep->chgQData(oldp+971,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[24]),64);
            tracep->chgQData(oldp+973,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[25]),64);
            tracep->chgQData(oldp+975,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[26]),64);
            tracep->chgQData(oldp+977,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[27]),64);
            tracep->chgQData(oldp+979,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[28]),64);
            tracep->chgQData(oldp+981,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[29]),64);
            tracep->chgQData(oldp+983,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[30]),64);
            tracep->chgQData(oldp+985,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[31]),64);
            tracep->chgQData(oldp+987,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0]),64);
            tracep->chgQData(oldp+989,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[1]),64);
            tracep->chgQData(oldp+991,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[2]),64);
            tracep->chgQData(oldp+993,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[3]),64);
            tracep->chgQData(oldp+995,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[4]),64);
            tracep->chgQData(oldp+997,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[5]),64);
            tracep->chgQData(oldp+999,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[6]),64);
            tracep->chgQData(oldp+1001,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[7]),64);
            tracep->chgQData(oldp+1003,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[8]),64);
            tracep->chgQData(oldp+1005,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[9]),64);
            tracep->chgQData(oldp+1007,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[10]),64);
            tracep->chgQData(oldp+1009,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[11]),64);
            tracep->chgQData(oldp+1011,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[12]),64);
            tracep->chgQData(oldp+1013,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[13]),64);
            tracep->chgQData(oldp+1015,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[14]),64);
            tracep->chgQData(oldp+1017,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[15]),64);
            tracep->chgQData(oldp+1019,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[16]),64);
            tracep->chgQData(oldp+1021,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[17]),64);
            tracep->chgQData(oldp+1023,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[18]),64);
            tracep->chgQData(oldp+1025,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[19]),64);
            tracep->chgQData(oldp+1027,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[20]),64);
            tracep->chgQData(oldp+1029,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[21]),64);
            tracep->chgQData(oldp+1031,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[22]),64);
            tracep->chgQData(oldp+1033,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[23]),64);
            tracep->chgQData(oldp+1035,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[24]),64);
            tracep->chgQData(oldp+1037,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[25]),64);
            tracep->chgQData(oldp+1039,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[26]),64);
            tracep->chgQData(oldp+1041,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[27]),64);
            tracep->chgQData(oldp+1043,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[28]),64);
            tracep->chgQData(oldp+1045,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[29]),64);
            tracep->chgQData(oldp+1047,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[30]),64);
            tracep->chgQData(oldp+1049,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[31]),64);
            tracep->chgQData(oldp+1051,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__t),64);
            tracep->chgQData(oldp+1053,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__c),64);
            tracep->chgQData(oldp+1055,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid),64);
            tracep->chgQData(oldp+1057,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__misa),64);
            tracep->chgQData(oldp+1059,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mscratch),64);
            tracep->chgQData(oldp+1061,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause),64);
            tracep->chgQData(oldp+1063,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcycle),64);
            tracep->chgQData(oldp+1065,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__minstret),64);
            tracep->chgIData(oldp+1067,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__j),32);
            tracep->chgBit(oldp+1068,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write));
            tracep->chgBit(oldp+1069,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                       & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out)) 
                                           | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                                          | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))))));
            tracep->chgBit(oldp+1070,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs1_read));
            tracep->chgBit(oldp+1071,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs2_read));
            tracep->chgBit(oldp+1072,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_csr_read));
            tracep->chgBit(oldp+1073,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write));
            tracep->chgBit(oldp+1074,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                       & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out)) 
                                           | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                                          | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))))));
            tracep->chgBit(oldp+1075,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                       & (8U == (0xcU 
                                                 & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))))));
            tracep->chgBit(oldp+1076,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write));
            tracep->chgBit(oldp+1077,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
                                       & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)) 
                                           | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                                          | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))))));
            tracep->chgQData(oldp+1078,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime),64);
            tracep->chgQData(oldp+1080,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next),64);
            tracep->chgQData(oldp+1082,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp),64);
            tracep->chgQData(oldp+1084,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next),64);
            tracep->chgCData(oldp+1086,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state),2);
            tracep->chgBit(oldp+1087,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit));
            tracep->chgBit(oldp+1088,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtimecmp_hit));
            tracep->chgBit(oldp+1089,(((0x200bff8U 
                                        <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                       & (0x200bfffU 
                                          >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))));
            tracep->chgBit(oldp+1090,(((0x2004000U 
                                        <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                       & (0x2004007U 
                                          >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))));
            tracep->chgBit(oldp+1091,((((0x200bff8U 
                                         <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr) 
                                        & (0x200bfffU 
                                           >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr)) 
                                       | ((0x2004000U 
                                           <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr) 
                                          & (0x2004007U 
                                             >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr)))));
            tracep->chgBit(oldp+1092,((((0x200bff8U 
                                         <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr) 
                                        & (0x200bfffU 
                                           >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr)) 
                                       | ((0x2004000U 
                                           <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr) 
                                          & (0x2004007U 
                                             >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr)))));
            tracep->chgCData(oldp+1093,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid),4);
            tracep->chgCData(oldp+1094,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? 1U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid))),4);
            tracep->chgIData(oldp+1095,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr),32);
            tracep->chgIData(oldp+1096,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr
                                          : vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)),32);
            tracep->chgCData(oldp+1097,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen),8);
            tracep->chgCData(oldp+1098,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen))),8);
            tracep->chgCData(oldp+1099,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize),3);
            tracep->chgCData(oldp+1100,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize)
                                          : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize))),3);
            tracep->chgCData(oldp+1101,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst),2);
            tracep->chgCData(oldp+1102,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst))),2);
            tracep->chgCData(oldp+1103,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid),4);
            tracep->chgCData(oldp+1104,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                              ? 1U : 0U)
                                          : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid))),4);
            tracep->chgIData(oldp+1105,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr),32);
            tracep->chgIData(oldp+1106,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next),32);
            tracep->chgCData(oldp+1107,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen),8);
            tracep->chgCData(oldp+1108,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen))),8);
            tracep->chgCData(oldp+1109,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize),3);
            tracep->chgCData(oldp+1110,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize_next),3);
            tracep->chgCData(oldp+1111,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst),2);
            tracep->chgCData(oldp+1112,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                          ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst))),2);
            tracep->chgCData(oldp+1113,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate),2);
            tracep->chgCData(oldp+1114,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate),2);
            tracep->chgBit(oldp+1115,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen)))));
            __Vtemp6123[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[0U]);
            __Vtemp6123[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[1U]);
            __Vtemp6123[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[2U]);
            __Vtemp6123[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[3U]);
            tracep->chgWData(oldp+1116,(__Vtemp6123),128);
            tracep->chgBit(oldp+1120,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen)))));
            __Vtemp6124[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[0U]);
            __Vtemp6124[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[1U]);
            __Vtemp6124[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[2U]);
            __Vtemp6124[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[3U]);
            tracep->chgWData(oldp+1121,(__Vtemp6124),128);
            tracep->chgBit(oldp+1125,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen)))));
            __Vtemp6125[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[0U]);
            __Vtemp6125[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[1U]);
            __Vtemp6125[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[2U]);
            __Vtemp6125[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[3U]);
            tracep->chgWData(oldp+1126,(__Vtemp6125),128);
            tracep->chgBit(oldp+1130,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen)))));
            __Vtemp6126[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[0U]);
            __Vtemp6126[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[1U]);
            __Vtemp6126[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[2U]);
            __Vtemp6126[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[3U]);
            tracep->chgWData(oldp+1131,(__Vtemp6126),128);
            tracep->chgBit(oldp+1135,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen)))));
            __Vtemp6127[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[0U]);
            __Vtemp6127[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[1U]);
            __Vtemp6127[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[2U]);
            __Vtemp6127[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[3U]);
            tracep->chgWData(oldp+1136,(__Vtemp6127),128);
            tracep->chgBit(oldp+1140,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen)))));
            __Vtemp6128[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[0U]);
            __Vtemp6128[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[1U]);
            __Vtemp6128[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[2U]);
            __Vtemp6128[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[3U]);
            tracep->chgWData(oldp+1141,(__Vtemp6128),128);
            tracep->chgBit(oldp+1145,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen)))));
            __Vtemp6129[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[0U]);
            __Vtemp6129[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[1U]);
            __Vtemp6129[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[2U]);
            __Vtemp6129[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[3U]);
            tracep->chgWData(oldp+1146,(__Vtemp6129),128);
            tracep->chgBit(oldp+1150,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen)))));
            __Vtemp6130[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[0U]);
            __Vtemp6130[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[1U]);
            __Vtemp6130[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[2U]);
            __Vtemp6130[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[3U]);
            tracep->chgWData(oldp+1151,(__Vtemp6130),128);
            tracep->chgQData(oldp+1155,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [0U]),33);
            tracep->chgSData(oldp+1157,((0x7ffU & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c))),11);
            tracep->chgCData(oldp+1158,((0x7fU & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                          >> 0xbU)))),7);
            tracep->chgCData(oldp+1159,((0x1fU & (IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                          >> 0x12U)))),5);
            tracep->chgCData(oldp+1160,((7U & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                       >> 0x17U)))),3);
            tracep->chgCData(oldp+1161,((3U & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                       >> 0x1aU)))),2);
            tracep->chgCData(oldp+1162,((3U & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                       >> 0x1cU)))),2);
            tracep->chgBit(oldp+1163,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_c 
                                                     >> 0x1eU)))));
            tracep->chgSData(oldp+1164,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1165,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1166,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1167,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1168,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1169,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1170,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1171,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1172,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8))))));
            tracep->chgSData(oldp+1173,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout1),11);
            tracep->chgIData(oldp+1174,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2),22);
            tracep->chgCData(oldp+1175,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout2),8);
            tracep->chgSData(oldp+1176,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3),15);
            tracep->chgCData(oldp+1177,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout3),5);
            tracep->chgSData(oldp+1178,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4),10);
            tracep->chgCData(oldp+1179,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout4),4);
            tracep->chgCData(oldp+1180,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5),7);
            tracep->chgCData(oldp+1181,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout5),3);
            tracep->chgCData(oldp+1182,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6),6);
            tracep->chgCData(oldp+1183,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout6),2);
            tracep->chgCData(oldp+1184,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7),4);
            tracep->chgCData(oldp+1185,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__sout7),2);
            tracep->chgCData(oldp+1186,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8),3);
            tracep->chgBit(oldp+1187,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7))));
            tracep->chgBit(oldp+1188,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1189,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1190,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src7))))));
            tracep->chgBit(oldp+1191,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8))));
            tracep->chgBit(oldp+1192,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1193,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1194,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [0U]))));
            tracep->chgBit(oldp+1195,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1196,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1197,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1198,((1U & (((IData)(
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
            tracep->chgBit(oldp+1199,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1200,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1201,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1202,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1203,((1U & (((IData)(
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
            tracep->chgBit(oldp+1204,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1205,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1206,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1207,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1208,((1U & (((IData)(
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
            tracep->chgBit(oldp+1209,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1210,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1211,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1212,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1213,((1U & (((IData)(
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
            tracep->chgBit(oldp+1214,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1215,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1216,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1217,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1218,((1U & (((IData)(
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
            tracep->chgBit(oldp+1219,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1220,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1221,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1222,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1223,((1U & (((IData)(
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
            tracep->chgBit(oldp+1224,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1225,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1226,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1227,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1228,((1U & (((IData)(
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
            tracep->chgBit(oldp+1229,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1230,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1231,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1232,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1233,((1U & (((IData)(
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
            tracep->chgBit(oldp+1234,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1235,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1236,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1237,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1238,((1U & (((IData)(
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
            tracep->chgBit(oldp+1239,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1240,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1241,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1242,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1243,((1U & (((IData)(
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
            tracep->chgBit(oldp+1244,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1245,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1246,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [0U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1247,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1248,((1U & (((IData)(
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
            tracep->chgBit(oldp+1249,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)));
            tracep->chgBit(oldp+1250,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+1251,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+1252,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1253,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1254,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+1255,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+1256,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+1257,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1258,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1259,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+1260,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+1261,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+1262,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1263,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1264,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+1265,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1266,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1267,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1268,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1269,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1270,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1271,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1272,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1273,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1274,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1275,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1276,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1277,((1U & (((0x18000U 
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
            tracep->chgBit(oldp+1278,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1279,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1280,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1281,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1282,((1U & (((0xc0000U 
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
            tracep->chgBit(oldp+1283,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src2)))));
            tracep->chgBit(oldp+1284,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))));
            tracep->chgBit(oldp+1285,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+1286,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+1287,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1288,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1289,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+1290,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+1291,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+1292,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1293,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1294,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+1295,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+1296,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+1297,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1298,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1299,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+1300,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1301,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1302,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1303,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1304,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1305,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1306,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1307,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1308,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src3))))));
            tracep->chgBit(oldp+1309,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4))));
            tracep->chgBit(oldp+1310,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+1311,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+1312,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1313,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4))))));
            tracep->chgBit(oldp+1314,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+1315,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+1316,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+1317,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1318,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4))))));
            tracep->chgBit(oldp+1319,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+1320,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+1321,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+1322,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1323,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src4))))));
            tracep->chgBit(oldp+1324,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5))));
            tracep->chgBit(oldp+1325,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+1326,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+1327,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1328,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5))))));
            tracep->chgBit(oldp+1329,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+1330,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+1331,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+1332,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1333,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src5))))));
            tracep->chgBit(oldp+1334,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6))));
            tracep->chgBit(oldp+1335,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+1336,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+1337,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1338,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6))))));
            tracep->chgBit(oldp+1339,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+1340,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+1341,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+1342,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1343,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc0.__PVT__src6))))));
            tracep->chgQData(oldp+1344,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [1U]),33);
            tracep->chgSData(oldp+1346,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [0U]),11);
            tracep->chgCData(oldp+1347,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [0U]),7);
            tracep->chgCData(oldp+1348,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [0U]),5);
            tracep->chgCData(oldp+1349,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [0U]),3);
            tracep->chgCData(oldp+1350,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [0U]),2);
            tracep->chgCData(oldp+1351,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [0U]),2);
            tracep->chgBit(oldp+1352,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [0U]));
            tracep->chgSData(oldp+1353,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1354,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1355,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1356,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1357,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1358,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1359,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1360,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1361,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+1362,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+1363,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+1364,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+1365,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+1366,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+1367,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+1368,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+1369,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+1370,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+1371,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+1372,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+1373,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+1374,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+1375,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+1376,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+1377,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1378,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1379,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+1380,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+1381,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1382,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1383,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [1U]))));
            tracep->chgBit(oldp+1384,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1385,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1386,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1387,((1U & (((IData)(
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
            tracep->chgBit(oldp+1388,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1389,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1390,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1391,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1392,((1U & (((IData)(
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
            tracep->chgBit(oldp+1393,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1394,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1395,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1396,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1397,((1U & (((IData)(
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
            tracep->chgBit(oldp+1398,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1399,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1400,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1401,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1402,((1U & (((IData)(
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
            tracep->chgBit(oldp+1403,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1404,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1405,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1406,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1407,((1U & (((IData)(
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
            tracep->chgBit(oldp+1408,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1409,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1410,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1411,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1412,((1U & (((IData)(
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
            tracep->chgBit(oldp+1413,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1414,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1415,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1416,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1417,((1U & (((IData)(
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
            tracep->chgBit(oldp+1418,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1419,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1420,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1421,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1422,((1U & (((IData)(
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
            tracep->chgBit(oldp+1423,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1424,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1425,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1426,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1427,((1U & (((IData)(
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
            tracep->chgBit(oldp+1428,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1429,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1430,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1431,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1432,((1U & (((IData)(
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
            tracep->chgBit(oldp+1433,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1434,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1435,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [1U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1436,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1437,((1U & (((IData)(
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
            tracep->chgBit(oldp+1438,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+1439,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+1440,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+1441,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1442,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1443,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+1444,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+1445,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+1446,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1447,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1448,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+1449,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+1450,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+1451,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1452,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1453,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+1454,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1455,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1456,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1457,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1458,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1459,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1460,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1461,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1462,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1463,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1464,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1465,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1466,((1U & (((0x18000U 
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
            tracep->chgBit(oldp+1467,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1468,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1469,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1470,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1471,((1U & (((0xc0000U 
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
            tracep->chgBit(oldp+1472,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1473,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+1474,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+1475,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+1476,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1477,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1478,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+1479,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+1480,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+1481,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1482,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1483,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+1484,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+1485,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+1486,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1487,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1488,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+1489,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1490,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1491,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1492,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1493,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1494,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1495,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1496,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1497,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1498,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+1499,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+1500,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+1501,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1502,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1503,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+1504,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+1505,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+1506,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1507,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1508,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+1509,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+1510,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+1511,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1512,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1513,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+1514,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+1515,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+1516,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1517,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1518,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+1519,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+1520,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+1521,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1522,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1523,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+1524,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+1525,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+1526,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1527,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+1528,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+1529,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+1530,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+1531,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1532,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__1__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+1533,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [2U]),33);
            tracep->chgSData(oldp+1535,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [1U]),11);
            tracep->chgCData(oldp+1536,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [1U]),7);
            tracep->chgCData(oldp+1537,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [1U]),5);
            tracep->chgCData(oldp+1538,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [1U]),3);
            tracep->chgCData(oldp+1539,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [1U]),2);
            tracep->chgCData(oldp+1540,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [1U]),2);
            tracep->chgBit(oldp+1541,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [1U]));
            tracep->chgSData(oldp+1542,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1543,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1544,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1545,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1546,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1547,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1548,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1549,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1550,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+1551,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+1552,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+1553,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+1554,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+1555,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+1556,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+1557,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+1558,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+1559,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+1560,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+1561,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+1562,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+1563,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+1564,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+1565,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+1566,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1567,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1568,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+1569,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+1570,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1571,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1572,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [2U]))));
            tracep->chgBit(oldp+1573,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1574,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1575,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1576,((1U & (((IData)(
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
            tracep->chgBit(oldp+1577,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1578,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1579,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1580,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1581,((1U & (((IData)(
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
            tracep->chgBit(oldp+1582,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1583,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1584,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1585,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1586,((1U & (((IData)(
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
            tracep->chgBit(oldp+1587,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1588,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1589,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1590,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1591,((1U & (((IData)(
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
            tracep->chgBit(oldp+1592,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1593,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1594,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1595,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1596,((1U & (((IData)(
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
            tracep->chgBit(oldp+1597,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1598,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1599,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1600,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1601,((1U & (((IData)(
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
            tracep->chgBit(oldp+1602,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1603,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1604,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1605,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1606,((1U & (((IData)(
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
            tracep->chgBit(oldp+1607,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1608,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1609,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1610,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1611,((1U & (((IData)(
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
            tracep->chgBit(oldp+1612,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1613,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1614,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1615,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1616,((1U & (((IData)(
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
            tracep->chgBit(oldp+1617,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1618,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1619,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1620,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1621,((1U & (((IData)(
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
            tracep->chgBit(oldp+1622,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1623,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1624,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [2U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1625,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1626,((1U & (((IData)(
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
            tracep->chgBit(oldp+1627,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+1628,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+1629,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+1630,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1631,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1632,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+1633,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+1634,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+1635,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1636,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1637,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+1638,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+1639,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+1640,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1641,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1642,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+1643,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1644,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1645,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1646,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1647,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1648,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1649,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1650,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1651,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1652,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1653,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1654,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1655,((1U & (((0x18000U 
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
            tracep->chgBit(oldp+1656,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1657,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1658,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1659,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1660,((1U & (((0xc0000U 
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
            tracep->chgBit(oldp+1661,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1662,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+1663,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+1664,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+1665,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1666,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1667,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+1668,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+1669,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+1670,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1671,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1672,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+1673,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+1674,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+1675,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1676,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1677,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+1678,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1679,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1680,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1681,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1682,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1683,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1684,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1685,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1686,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1687,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+1688,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+1689,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+1690,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1691,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1692,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+1693,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+1694,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+1695,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1696,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1697,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+1698,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+1699,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+1700,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1701,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1702,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+1703,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+1704,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+1705,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1706,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1707,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+1708,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+1709,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+1710,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1711,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1712,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+1713,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+1714,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+1715,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1716,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+1717,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+1718,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+1719,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+1720,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1721,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__2__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+1722,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [3U]),33);
            tracep->chgSData(oldp+1724,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [2U]),11);
            tracep->chgCData(oldp+1725,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [2U]),7);
            tracep->chgCData(oldp+1726,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [2U]),5);
            tracep->chgCData(oldp+1727,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [2U]),3);
            tracep->chgCData(oldp+1728,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [2U]),2);
            tracep->chgCData(oldp+1729,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [2U]),2);
            tracep->chgBit(oldp+1730,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [2U]));
            tracep->chgSData(oldp+1731,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1732,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1733,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1734,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1735,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1736,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1737,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1738,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1739,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+1740,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+1741,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+1742,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+1743,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+1744,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+1745,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+1746,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+1747,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+1748,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+1749,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+1750,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+1751,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+1752,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+1753,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+1754,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+1755,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1756,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1757,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+1758,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+1759,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1760,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1761,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [3U]))));
            tracep->chgBit(oldp+1762,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1763,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1764,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1765,((1U & (((IData)(
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
            tracep->chgBit(oldp+1766,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1767,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1768,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1769,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1770,((1U & (((IData)(
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
            tracep->chgBit(oldp+1771,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1772,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1773,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1774,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1775,((1U & (((IData)(
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
            tracep->chgBit(oldp+1776,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1777,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1778,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1779,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1780,((1U & (((IData)(
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
            tracep->chgBit(oldp+1781,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1782,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1783,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1784,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1785,((1U & (((IData)(
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
            tracep->chgBit(oldp+1786,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1787,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1788,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1789,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1790,((1U & (((IData)(
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
            tracep->chgBit(oldp+1791,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1792,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1793,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1794,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1795,((1U & (((IData)(
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
            tracep->chgBit(oldp+1796,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1797,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1798,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1799,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1800,((1U & (((IData)(
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
            tracep->chgBit(oldp+1801,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1802,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1803,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1804,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1805,((1U & (((IData)(
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
            tracep->chgBit(oldp+1806,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1807,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1808,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1809,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1810,((1U & (((IData)(
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
            tracep->chgBit(oldp+1811,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1812,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1813,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [3U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1814,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1815,((1U & (((IData)(
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
            tracep->chgBit(oldp+1816,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+1817,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+1818,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+1819,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1820,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1821,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+1822,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+1823,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+1824,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1825,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1826,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+1827,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+1828,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+1829,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1830,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1831,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+1832,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1833,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1834,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1835,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1836,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1837,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1838,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1839,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1840,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1841,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1842,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1843,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1844,((1U & (((0x18000U 
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
            tracep->chgBit(oldp+1845,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1846,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1847,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1848,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1849,((1U & (((0xc0000U 
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
            tracep->chgBit(oldp+1850,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+1851,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+1852,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+1853,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+1854,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1855,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1856,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+1857,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+1858,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+1859,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1860,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1861,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+1862,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+1863,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+1864,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1865,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1866,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+1867,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1868,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1869,((1U & (((0x600U 
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
            tracep->chgBit(oldp+1870,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1871,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1872,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1873,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1874,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+1875,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+1876,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+1877,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+1878,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+1879,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1880,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1881,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+1882,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+1883,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+1884,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1885,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1886,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+1887,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+1888,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+1889,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+1890,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+1891,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+1892,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+1893,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+1894,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1895,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1896,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+1897,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+1898,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+1899,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1900,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+1901,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+1902,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+1903,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+1904,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1905,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+1906,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+1907,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+1908,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+1909,((1U & (((0x18U 
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
            tracep->chgBit(oldp+1910,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__3__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+1911,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [4U]),33);
            tracep->chgSData(oldp+1913,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [3U]),11);
            tracep->chgCData(oldp+1914,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [3U]),7);
            tracep->chgCData(oldp+1915,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [3U]),5);
            tracep->chgCData(oldp+1916,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [3U]),3);
            tracep->chgCData(oldp+1917,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [3U]),2);
            tracep->chgCData(oldp+1918,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [3U]),2);
            tracep->chgBit(oldp+1919,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [3U]));
            tracep->chgSData(oldp+1920,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+1921,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+1922,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+1923,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+1924,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+1925,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+1926,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1927,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1928,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+1929,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+1930,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+1931,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+1932,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+1933,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+1934,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+1935,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+1936,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+1937,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+1938,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+1939,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+1940,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+1941,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+1942,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+1943,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+1944,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+1945,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+1946,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+1947,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+1948,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+1949,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+1950,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [4U]))));
            tracep->chgBit(oldp+1951,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1952,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1953,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1954,((1U & (((IData)(
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
            tracep->chgBit(oldp+1955,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1956,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1957,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1958,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1959,((1U & (((IData)(
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
            tracep->chgBit(oldp+1960,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1961,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1962,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1963,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1964,((1U & (((IData)(
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
            tracep->chgBit(oldp+1965,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1966,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1967,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1968,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1969,((1U & (((IData)(
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
            tracep->chgBit(oldp+1970,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1971,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1972,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1973,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1974,((1U & (((IData)(
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
            tracep->chgBit(oldp+1975,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1976,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1977,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1978,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1979,((1U & (((IData)(
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
            tracep->chgBit(oldp+1980,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1981,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1982,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1983,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1984,((1U & (((IData)(
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
            tracep->chgBit(oldp+1985,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1986,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1987,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1988,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1989,((1U & (((IData)(
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
            tracep->chgBit(oldp+1990,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1991,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1992,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1993,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1994,((1U & (((IData)(
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
            tracep->chgBit(oldp+1995,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1996,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1997,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1998,((1U & ((((IData)(
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
            tracep->chgBit(oldp+1999,((1U & (((IData)(
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
            tracep->chgBit(oldp+2000,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+2001,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+2002,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [4U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+2003,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2004,((1U & (((IData)(
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
            tracep->chgBit(oldp+2005,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+2006,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+2007,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+2008,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2009,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2010,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+2011,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+2012,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+2013,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2014,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2015,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+2016,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+2017,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+2018,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2019,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2020,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+2021,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2022,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2023,((1U & (((0x600U 
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
            tracep->chgBit(oldp+2024,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2025,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2026,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2027,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2028,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+2029,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2030,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2031,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2032,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2033,((1U & (((0x18000U 
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
            tracep->chgBit(oldp+2034,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2035,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2036,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2037,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2038,((1U & (((0xc0000U 
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
            tracep->chgBit(oldp+2039,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2040,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+2041,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+2042,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+2043,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2044,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2045,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+2046,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+2047,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+2048,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2049,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2050,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+2051,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+2052,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+2053,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2054,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2055,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+2056,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2057,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2058,((1U & (((0x600U 
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
            tracep->chgBit(oldp+2059,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2060,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2061,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2062,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2063,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+2064,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2065,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+2066,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+2067,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+2068,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2069,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2070,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+2071,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+2072,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+2073,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2074,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2075,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+2076,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+2077,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+2078,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2079,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2080,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+2081,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+2082,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+2083,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2084,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2085,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+2086,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+2087,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+2088,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2089,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2090,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+2091,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+2092,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+2093,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2094,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+2095,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+2096,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+2097,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+2098,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2099,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__4__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+2100,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [5U]),33);
            tracep->chgSData(oldp+2102,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [4U]),11);
            tracep->chgCData(oldp+2103,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [4U]),7);
            tracep->chgCData(oldp+2104,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [4U]),5);
            tracep->chgCData(oldp+2105,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [4U]),3);
            tracep->chgCData(oldp+2106,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [4U]),2);
            tracep->chgCData(oldp+2107,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [4U]),2);
            tracep->chgBit(oldp+2108,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [4U]));
            tracep->chgSData(oldp+2109,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+2110,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+2111,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+2112,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+2113,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+2114,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+2115,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2116,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2117,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+2118,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+2119,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+2120,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+2121,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+2122,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+2123,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+2124,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+2125,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+2126,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+2127,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+2128,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+2129,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+2130,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+2131,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+2132,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+2133,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+2134,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+2135,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+2136,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+2137,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+2138,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+2139,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [5U]))));
            tracep->chgBit(oldp+2140,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2141,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2142,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2143,((1U & (((IData)(
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
            tracep->chgBit(oldp+2144,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2145,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2146,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2147,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2148,((1U & (((IData)(
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
            tracep->chgBit(oldp+2149,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2150,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2151,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2152,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2153,((1U & (((IData)(
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
            tracep->chgBit(oldp+2154,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2155,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2156,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2157,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2158,((1U & (((IData)(
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
            tracep->chgBit(oldp+2159,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2160,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2161,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2162,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2163,((1U & (((IData)(
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
            tracep->chgBit(oldp+2164,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2165,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2166,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2167,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2168,((1U & (((IData)(
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
            tracep->chgBit(oldp+2169,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2170,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2171,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2172,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2173,((1U & (((IData)(
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
            tracep->chgBit(oldp+2174,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2175,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2176,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2177,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2178,((1U & (((IData)(
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
            tracep->chgBit(oldp+2179,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2180,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+2181,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+2182,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2183,((1U & (((IData)(
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
            tracep->chgBit(oldp+2184,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+2185,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+2186,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+2187,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2188,((1U & (((IData)(
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
            tracep->chgBit(oldp+2189,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+2190,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+2191,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [5U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+2192,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2193,((1U & (((IData)(
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
            tracep->chgBit(oldp+2194,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+2195,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+2196,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+2197,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2198,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2199,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+2200,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+2201,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+2202,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2203,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2204,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+2205,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+2206,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+2207,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2208,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2209,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+2210,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2211,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2212,((1U & (((0x600U 
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
            tracep->chgBit(oldp+2213,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2214,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2215,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2216,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2217,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+2218,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2219,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2220,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2221,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2222,((1U & (((0x18000U 
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
            tracep->chgBit(oldp+2223,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2224,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2225,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2226,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2227,((1U & (((0xc0000U 
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
            tracep->chgBit(oldp+2228,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2229,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+2230,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+2231,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+2232,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2233,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2234,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+2235,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+2236,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+2237,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2238,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2239,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+2240,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+2241,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+2242,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2243,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2244,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+2245,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2246,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2247,((1U & (((0x600U 
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
            tracep->chgBit(oldp+2248,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2249,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2250,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2251,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2252,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+2253,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2254,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+2255,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+2256,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+2257,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2258,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2259,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+2260,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+2261,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+2262,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2263,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2264,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+2265,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+2266,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+2267,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2268,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2269,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+2270,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+2271,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+2272,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2273,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2274,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+2275,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+2276,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+2277,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2278,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2279,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+2280,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+2281,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+2282,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2283,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+2284,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+2285,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+2286,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+2287,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2288,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__5__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+2289,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [6U]),33);
            tracep->chgSData(oldp+2291,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [5U]),11);
            tracep->chgCData(oldp+2292,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [5U]),7);
            tracep->chgCData(oldp+2293,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [5U]),5);
            tracep->chgCData(oldp+2294,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [5U]),3);
            tracep->chgCData(oldp+2295,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [5U]),2);
            tracep->chgCData(oldp+2296,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [5U]),2);
            tracep->chgBit(oldp+2297,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [5U]));
            tracep->chgSData(oldp+2298,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+2299,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+2300,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+2301,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+2302,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+2303,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+2304,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2305,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2306,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+2307,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+2308,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+2309,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+2310,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+2311,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+2312,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+2313,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+2314,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+2315,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+2316,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+2317,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+2318,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+2319,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+2320,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+2321,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+2322,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+2323,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+2324,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+2325,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+2326,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+2327,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+2328,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [6U]))));
            tracep->chgBit(oldp+2329,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2330,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2331,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2332,((1U & (((IData)(
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
            tracep->chgBit(oldp+2333,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2334,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2335,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2336,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2337,((1U & (((IData)(
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
            tracep->chgBit(oldp+2338,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2339,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2340,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2341,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2342,((1U & (((IData)(
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
            tracep->chgBit(oldp+2343,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2344,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2345,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2346,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2347,((1U & (((IData)(
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
            tracep->chgBit(oldp+2348,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2349,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2350,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2351,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2352,((1U & (((IData)(
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
            tracep->chgBit(oldp+2353,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2354,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2355,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2356,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2357,((1U & (((IData)(
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
            tracep->chgBit(oldp+2358,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2359,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2360,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2361,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2362,((1U & (((IData)(
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
            tracep->chgBit(oldp+2363,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2364,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2365,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2366,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2367,((1U & (((IData)(
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
            tracep->chgBit(oldp+2368,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2369,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+2370,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+2371,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2372,((1U & (((IData)(
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
            tracep->chgBit(oldp+2373,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+2374,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+2375,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+2376,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2377,((1U & (((IData)(
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
            tracep->chgBit(oldp+2378,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+2379,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+2380,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [6U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+2381,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2382,((1U & (((IData)(
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
            tracep->chgBit(oldp+2383,((1U & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)));
            tracep->chgBit(oldp+2384,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 1U))));
            tracep->chgBit(oldp+2385,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 2U))));
            tracep->chgBit(oldp+2386,((1U & (((vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                               & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2))) 
                                             | (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                                & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2387,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2388,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 3U))));
            tracep->chgBit(oldp+2389,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 4U))));
            tracep->chgBit(oldp+2390,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 5U))));
            tracep->chgBit(oldp+2391,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2392,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2393,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 6U))));
            tracep->chgBit(oldp+2394,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 7U))));
            tracep->chgBit(oldp+2395,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 8U))));
            tracep->chgBit(oldp+2396,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2397,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2398,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 9U))));
            tracep->chgBit(oldp+2399,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2400,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2401,((1U & (((0x600U 
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
            tracep->chgBit(oldp+2402,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2403,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2404,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2405,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2406,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+2407,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2408,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2409,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2410,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2411,((1U & (((0x18000U 
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
            tracep->chgBit(oldp+2412,((1U & VL_REDXOR_32(
                                                         (0x38000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2413,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2414,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2415,((1U & (vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2 
                                             >> 0x14U))));
            tracep->chgBit(oldp+2416,((1U & (((0xc0000U 
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
            tracep->chgBit(oldp+2417,((1U & VL_REDXOR_32(
                                                         (0x1c0000U 
                                                          & vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src2)))));
            tracep->chgBit(oldp+2418,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))));
            tracep->chgBit(oldp+2419,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 1U))));
            tracep->chgBit(oldp+2420,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 2U))));
            tracep->chgBit(oldp+2421,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2422,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2423,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 3U))));
            tracep->chgBit(oldp+2424,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 4U))));
            tracep->chgBit(oldp+2425,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 5U))));
            tracep->chgBit(oldp+2426,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2427,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2428,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 6U))));
            tracep->chgBit(oldp+2429,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 7U))));
            tracep->chgBit(oldp+2430,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 8U))));
            tracep->chgBit(oldp+2431,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2432,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2433,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 9U))));
            tracep->chgBit(oldp+2434,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2435,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2436,((1U & (((0x600U 
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
            tracep->chgBit(oldp+2437,((1U & VL_REDXOR_32(
                                                         (0xe00U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2438,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2439,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2440,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2441,((1U & (((0x3000U 
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
            tracep->chgBit(oldp+2442,((1U & VL_REDXOR_32(
                                                         (0x7000U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src3))))));
            tracep->chgBit(oldp+2443,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4))));
            tracep->chgBit(oldp+2444,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 1U))));
            tracep->chgBit(oldp+2445,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 2U))));
            tracep->chgBit(oldp+2446,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2447,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2448,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 3U))));
            tracep->chgBit(oldp+2449,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 4U))));
            tracep->chgBit(oldp+2450,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 5U))));
            tracep->chgBit(oldp+2451,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2452,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2453,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 6U))));
            tracep->chgBit(oldp+2454,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 7U))));
            tracep->chgBit(oldp+2455,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4) 
                                             >> 8U))));
            tracep->chgBit(oldp+2456,((1U & (((0xc0U 
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
            tracep->chgBit(oldp+2457,((1U & VL_REDXOR_32(
                                                         (0x1c0U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src4))))));
            tracep->chgBit(oldp+2458,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5))));
            tracep->chgBit(oldp+2459,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 1U))));
            tracep->chgBit(oldp+2460,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 2U))));
            tracep->chgBit(oldp+2461,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2462,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2463,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 3U))));
            tracep->chgBit(oldp+2464,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 4U))));
            tracep->chgBit(oldp+2465,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5) 
                                             >> 5U))));
            tracep->chgBit(oldp+2466,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2467,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src5))))));
            tracep->chgBit(oldp+2468,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6))));
            tracep->chgBit(oldp+2469,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 1U))));
            tracep->chgBit(oldp+2470,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 2U))));
            tracep->chgBit(oldp+2471,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2472,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgBit(oldp+2473,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 3U))));
            tracep->chgBit(oldp+2474,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 4U))));
            tracep->chgBit(oldp+2475,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6) 
                                             >> 5U))));
            tracep->chgBit(oldp+2476,((1U & (((0x18U 
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
            tracep->chgBit(oldp+2477,((1U & VL_REDXOR_32(
                                                         (0x38U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__6__KET____DOT__Walloc.__PVT__src6))))));
            tracep->chgQData(oldp+2478,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                        [7U]),33);
            tracep->chgSData(oldp+2480,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout1
                                        [6U]),11);
            tracep->chgCData(oldp+2481,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout2
                                        [6U]),7);
            tracep->chgCData(oldp+2482,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout3
                                        [6U]),5);
            tracep->chgCData(oldp+2483,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout4
                                        [6U]),3);
            tracep->chgCData(oldp+2484,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout5
                                        [6U]),2);
            tracep->chgCData(oldp+2485,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout6
                                        [6U]),2);
            tracep->chgBit(oldp+2486,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc_33bits_cout7
                                      [6U]));
            tracep->chgSData(oldp+2487,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout1),11);
            tracep->chgCData(oldp+2488,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout2),7);
            tracep->chgCData(oldp+2489,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout3),5);
            tracep->chgCData(oldp+2490,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout4),3);
            tracep->chgCData(oldp+2491,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout5),2);
            tracep->chgCData(oldp+2492,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.Walloc_33bits_cout6),2);
            tracep->chgBit(oldp+2493,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2494,((1U & ((((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                               & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                                  >> 1U)) 
                                              | (6U 
                                                 == 
                                                 (6U 
                                                  & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8)))) 
                                             | ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                                & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2495,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8))))));
            tracep->chgSData(oldp+2496,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout1),11);
            tracep->chgIData(oldp+2497,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src2),22);
            tracep->chgCData(oldp+2498,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout2),8);
            tracep->chgSData(oldp+2499,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src3),15);
            tracep->chgCData(oldp+2500,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout3),5);
            tracep->chgSData(oldp+2501,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src4),10);
            tracep->chgCData(oldp+2502,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout4),4);
            tracep->chgCData(oldp+2503,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src5),7);
            tracep->chgCData(oldp+2504,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout5),3);
            tracep->chgCData(oldp+2505,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src6),6);
            tracep->chgCData(oldp+2506,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout6),2);
            tracep->chgCData(oldp+2507,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7),4);
            tracep->chgCData(oldp+2508,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__sout7),2);
            tracep->chgCData(oldp+2509,(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8),3);
            tracep->chgBit(oldp+2510,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7))));
            tracep->chgBit(oldp+2511,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                             >> 1U))));
            tracep->chgBit(oldp+2512,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7) 
                                             >> 2U))));
            tracep->chgBit(oldp+2513,((1U & VL_REDXOR_32(
                                                         (7U 
                                                          & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src7))))));
            tracep->chgBit(oldp+2514,((1U & (IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8))));
            tracep->chgBit(oldp+2515,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                             >> 1U))));
            tracep->chgBit(oldp+2516,((1U & ((IData)(vlSymsp->TOP__ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__Walloc__BRA__7__KET____DOT__Walloc.__PVT__src8) 
                                             >> 2U))));
            tracep->chgBit(oldp+2517,((1U & (IData)(
                                                    vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                    [7U]))));
            tracep->chgBit(oldp+2518,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2519,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2520,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2521,((1U & (((IData)(
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
            tracep->chgBit(oldp+2522,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2523,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2524,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2525,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2526,((1U & (((IData)(
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
            tracep->chgBit(oldp+2527,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2528,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2529,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2530,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2531,((1U & (((IData)(
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
            tracep->chgBit(oldp+2532,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2533,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2534,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2535,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2536,((1U & (((IData)(
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
            tracep->chgBit(oldp+2537,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2538,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2539,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2540,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2541,((1U & (((IData)(
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
            tracep->chgBit(oldp+2542,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2543,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2544,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2545,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2546,((1U & (((IData)(
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
            tracep->chgBit(oldp+2547,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2548,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2549,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2550,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2551,((1U & (((IData)(
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
            tracep->chgBit(oldp+2552,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2553,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2554,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2555,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2556,((1U & (((IData)(
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
            tracep->chgBit(oldp+2557,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2558,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+2559,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+2560,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2561,((1U & (((IData)(
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
            tracep->chgBit(oldp+2562,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+2563,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+2564,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+2565,((1U & ((((IData)(
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
            tracep->chgBit(oldp+2566,((1U & (((IData)(
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
            tracep->chgBit(oldp+2567,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+2568,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+2569,((1U & (IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__MUL__DOT__switch_out
                                                     [7U] 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+2570,((1U & ((((IData)(
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
        }
    }
}
