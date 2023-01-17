// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_041461_TOP__Syms.h"


void Vysyx_041461_TOP___024root__traceChgSub0(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_041461_TOP___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_041461_TOP___024root* const __restrict vlSelf = static_cast<Vysyx_041461_TOP___024root*>(voidSelf);
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_041461_TOP___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_041461_TOP___024root__traceChgSub0(Vysyx_041461_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp188;
    VlWide<4>/*127:0*/ __Vtemp189;
    VlWide<4>/*127:0*/ __Vtemp190;
    VlWide<4>/*127:0*/ __Vtemp191;
    VlWide<4>/*127:0*/ __Vtemp192;
    VlWide<4>/*127:0*/ __Vtemp193;
    VlWide<4>/*127:0*/ __Vtemp194;
    VlWide<4>/*127:0*/ __Vtemp195;
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
            tracep->chgBit(oldp+25,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict));
            tracep->chgCData(oldp+26,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out),4);
            tracep->chgBit(oldp+27,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_conflict));
            tracep->chgCData(oldp+28,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out),4);
            tracep->chgBit(oldp+29,((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))));
            tracep->chgBit(oldp+30,((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))));
            tracep->chgBit(oldp+31,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out));
            tracep->chgCData(oldp+32,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out),4);
            tracep->chgIData(oldp+33,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out),32);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out),64);
            tracep->chgCData(oldp+36,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 7U))),5);
            tracep->chgCData(oldp+37,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+38,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 0x14U))),5);
            tracep->chgSData(oldp+39,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                       >> 0x14U)),12);
            tracep->chgQData(oldp+40,((QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                          >> 0xfU))))),64);
            tracep->chgBit(oldp+42,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out));
            tracep->chgCData(oldp+43,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out),4);
            tracep->chgCData(oldp+44,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rd_out),5);
            tracep->chgCData(oldp+45,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out),5);
            tracep->chgCData(oldp+46,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out),5);
            tracep->chgSData(oldp+47,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out),12);
            tracep->chgQData(oldp+48,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_imm_out),64);
            tracep->chgQData(oldp+50,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_zimm_out),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_pc_out),64);
            tracep->chgCData(oldp+54,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out),5);
            tracep->chgCData(oldp+55,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out),3);
            tracep->chgCData(oldp+56,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_MEM_ctrl_out),4);
            tracep->chgCData(oldp+57,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out),3);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out),64);
            tracep->chgBit(oldp+60,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out));
            tracep->chgCData(oldp+61,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out),4);
            tracep->chgCData(oldp+62,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out),5);
            tracep->chgCData(oldp+63,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs1_out),5);
            tracep->chgCData(oldp+64,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out),5);
            tracep->chgSData(oldp+65,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_csr_out),12);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_imm_out),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_zimm_out),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_pc_out),64);
            tracep->chgCData(oldp+72,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out),4);
            tracep->chgCData(oldp+73,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out),3);
            tracep->chgBit(oldp+74,((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+75,((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+76,((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+77,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out));
            tracep->chgCData(oldp+78,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out),4);
            tracep->chgQData(oldp+79,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out),64);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_MEM_out),64);
            tracep->chgCData(oldp+83,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out),5);
            tracep->chgCData(oldp+84,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out),5);
            tracep->chgSData(oldp+85,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out),12);
            tracep->chgQData(oldp+86,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_imm_out),64);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out),64);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out),64);
            tracep->chgCData(oldp+92,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out),3);
            tracep->chgQData(oldp+93,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec),64);
            tracep->chgQData(oldp+95,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc),64);
            tracep->chgCData(oldp+97,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl),2);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
                                       [vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out]),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_csr_data),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data),64);
            tracep->chgBit(oldp+116,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime 
                                      >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp)));
            tracep->chgBit(oldp+117,((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))));
            tracep->chgBit(oldp+118,((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))));
            tracep->chgBit(oldp+119,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bvalid));
            tracep->chgCData(oldp+120,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bid),4);
            tracep->chgBit(oldp+121,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rvalid));
            tracep->chgCData(oldp+122,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rid),4);
            tracep->chgQData(oldp+123,(((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
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
            tracep->chgBit(oldp+125,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rlast));
            tracep->chgCData(oldp+126,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bresp),2);
            tracep->chgBit(oldp+127,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                      & (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
            tracep->chgCData(oldp+128,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? 1U : 0U)),4);
            tracep->chgBit(oldp+129,(((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                      & (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
            tracep->chgCData(oldp+130,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state),3);
            tracep->chgQData(oldp+131,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata),64);
            tracep->chgBit(oldp+133,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie 
                                                    >> 7U)))));
            tracep->chgBit(oldp+134,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip 
                                                    >> 7U)))));
            tracep->chgBit(oldp+135,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgIData(oldp+136,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__k),32);
            tracep->chgCData(oldp+137,((0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)),7);
            tracep->chgCData(oldp+138,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+139,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x1aU)),6);
            tracep->chgCData(oldp+140,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+141,((0x3fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0x14U))),6);
            tracep->chgQData(oldp+142,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1),64);
            tracep->chgQData(oldp+144,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2),64);
            tracep->chgWData(oldp+146,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle),128);
            tracep->chgBit(oldp+150,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load));
            tracep->chgBit(oldp+151,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store));
            tracep->chgCData(oldp+152,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state),4);
            tracep->chgQData(oldp+153,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata),64);
            tracep->chgIData(oldp+155,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__k),32);
            tracep->chgQData(oldp+156,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0]),64);
            tracep->chgQData(oldp+158,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[1]),64);
            tracep->chgQData(oldp+160,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[2]),64);
            tracep->chgQData(oldp+162,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[3]),64);
            tracep->chgQData(oldp+164,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[4]),64);
            tracep->chgQData(oldp+166,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[5]),64);
            tracep->chgQData(oldp+168,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[6]),64);
            tracep->chgQData(oldp+170,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[7]),64);
            tracep->chgQData(oldp+172,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[8]),64);
            tracep->chgQData(oldp+174,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[9]),64);
            tracep->chgQData(oldp+176,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[10]),64);
            tracep->chgQData(oldp+178,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[11]),64);
            tracep->chgQData(oldp+180,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[12]),64);
            tracep->chgQData(oldp+182,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[13]),64);
            tracep->chgQData(oldp+184,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[14]),64);
            tracep->chgQData(oldp+186,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[15]),64);
            tracep->chgQData(oldp+188,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[16]),64);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[17]),64);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[18]),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[19]),64);
            tracep->chgQData(oldp+196,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[20]),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[21]),64);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[22]),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[23]),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[24]),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[25]),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[26]),64);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[27]),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[28]),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[29]),64);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[30]),64);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[31]),64);
            tracep->chgQData(oldp+220,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0]),64);
            tracep->chgQData(oldp+222,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[1]),64);
            tracep->chgQData(oldp+224,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[2]),64);
            tracep->chgQData(oldp+226,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[3]),64);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[4]),64);
            tracep->chgQData(oldp+230,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[5]),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[6]),64);
            tracep->chgQData(oldp+234,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[7]),64);
            tracep->chgQData(oldp+236,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[8]),64);
            tracep->chgQData(oldp+238,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[9]),64);
            tracep->chgQData(oldp+240,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[10]),64);
            tracep->chgQData(oldp+242,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[11]),64);
            tracep->chgQData(oldp+244,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[12]),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[13]),64);
            tracep->chgQData(oldp+248,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[14]),64);
            tracep->chgQData(oldp+250,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[15]),64);
            tracep->chgQData(oldp+252,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[16]),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[17]),64);
            tracep->chgQData(oldp+256,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[18]),64);
            tracep->chgQData(oldp+258,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[19]),64);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[20]),64);
            tracep->chgQData(oldp+262,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[21]),64);
            tracep->chgQData(oldp+264,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[22]),64);
            tracep->chgQData(oldp+266,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[23]),64);
            tracep->chgQData(oldp+268,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[24]),64);
            tracep->chgQData(oldp+270,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[25]),64);
            tracep->chgQData(oldp+272,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[26]),64);
            tracep->chgQData(oldp+274,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[27]),64);
            tracep->chgQData(oldp+276,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[28]),64);
            tracep->chgQData(oldp+278,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[29]),64);
            tracep->chgQData(oldp+280,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[30]),64);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[31]),64);
            tracep->chgQData(oldp+284,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec_next),64);
            tracep->chgQData(oldp+286,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next),64);
            tracep->chgQData(oldp+288,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause),64);
            tracep->chgQData(oldp+290,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next),64);
            tracep->chgQData(oldp+292,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next),64);
            tracep->chgQData(oldp+294,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next),64);
            tracep->chgQData(oldp+296,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip_next),64);
            tracep->chgQData(oldp+298,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid),64);
            tracep->chgQData(oldp+300,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid_next),64);
            tracep->chgIData(oldp+302,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__j),32);
            tracep->chgBit(oldp+303,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write));
            tracep->chgBit(oldp+304,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                      & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out)) 
                                          | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                                         | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))))));
            tracep->chgBit(oldp+305,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs1_read));
            tracep->chgBit(oldp+306,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs2_read));
            tracep->chgBit(oldp+307,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_csr_read));
            tracep->chgBit(oldp+308,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write));
            tracep->chgBit(oldp+309,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                      & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out)) 
                                          | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                                         | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))))));
            tracep->chgBit(oldp+310,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                      & (IData)((8U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)))))));
            tracep->chgBit(oldp+311,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write));
            tracep->chgBit(oldp+312,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
                                      & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)) 
                                          | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                                         | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))))));
            tracep->chgQData(oldp+313,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime),64);
            tracep->chgQData(oldp+315,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp),64);
            tracep->chgCData(oldp+317,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state),2);
            tracep->chgBit(oldp+318,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit));
            tracep->chgBit(oldp+319,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtimecmp_hit));
            tracep->chgBit(oldp+320,(((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                      & (0x200bfffU 
                                         >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))));
            tracep->chgBit(oldp+321,(((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                      & (0x2004007U 
                                         >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))));
            tracep->chgCData(oldp+322,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid),4);
            tracep->chgCData(oldp+323,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 1U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid))),4);
            tracep->chgIData(oldp+324,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr),32);
            tracep->chgCData(oldp+325,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen),8);
            tracep->chgCData(oldp+326,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen))),8);
            tracep->chgCData(oldp+327,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize),3);
            tracep->chgCData(oldp+328,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst),2);
            tracep->chgCData(oldp+329,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst))),2);
            tracep->chgCData(oldp+330,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid),4);
            tracep->chgCData(oldp+331,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                             ? 1U : 0U)
                                         : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid))),4);
            tracep->chgIData(oldp+332,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr),32);
            tracep->chgCData(oldp+333,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen),8);
            tracep->chgCData(oldp+334,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen))),8);
            tracep->chgCData(oldp+335,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize),3);
            tracep->chgCData(oldp+336,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst),2);
            tracep->chgCData(oldp+337,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst))),2);
            tracep->chgCData(oldp+338,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate),2);
            tracep->chgCData(oldp+339,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate),2);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [6U]))) {
            tracep->chgIData(oldp+340,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                             ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                                 ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)
                                                 : 
                                                ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 3U)) 
                                                 << 3U))
                                             : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr)
                                         : 0U)),32);
            tracep->chgCData(oldp+341,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                             ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                                 ? 2U
                                                 : 3U)
                                             : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize))
                                         : 0U)),3);
            tracep->chgBit(oldp+342,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                       ? ((~ ((((((0U 
                                                   == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out)) 
                                                  & (0U 
                                                     == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap_out))) 
                                                & (0U 
                                                   == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                              & (0U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))) 
                                          & ((((((0U 
                                                  != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out)) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))) 
                                                & (0U 
                                                   == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap_out))) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                                              & (0U 
                                                 == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                             & (0U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))))
                                       : ((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                                          & (~ ((((0U 
                                                   != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap_out)) 
                                                  | (0U 
                                                     != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_trap_out))) 
                                                 | (0U 
                                                    != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                                | (0U 
                                                   != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))))))));
            tracep->chgBit(oldp+343,(((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                          & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out))) 
                                         & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out))) 
                                        & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out))) 
                                       & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXE_conflict))) 
                                      | ((~ (((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
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
                                            & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WB_trap_out)))))));
            tracep->chgBit(oldp+344,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
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
            tracep->chgQData(oldp+345,(((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
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
            tracep->chgBit(oldp+347,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                                      & ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE)) 
                                         | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE))))));
            tracep->chgBit(oldp+348,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                                      & (1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE)))));
            tracep->chgIData(oldp+349,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr
                                         : vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)),32);
            tracep->chgCData(oldp+350,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize)
                                         : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize))),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgWData(oldp+351,(vlSelf->ysyx_041461_TOP__DOT__Q0),128);
            tracep->chgWData(oldp+355,(vlSelf->ysyx_041461_TOP__DOT__Q1),128);
            tracep->chgWData(oldp+359,(vlSelf->ysyx_041461_TOP__DOT__Q2),128);
            tracep->chgWData(oldp+363,(vlSelf->ysyx_041461_TOP__DOT__Q3),128);
            tracep->chgWData(oldp+367,(vlSelf->ysyx_041461_TOP__DOT__Q4),128);
            tracep->chgWData(oldp+371,(vlSelf->ysyx_041461_TOP__DOT__Q5),128);
            tracep->chgWData(oldp+375,(vlSelf->ysyx_041461_TOP__DOT__Q6),128);
            tracep->chgWData(oldp+379,(vlSelf->ysyx_041461_TOP__DOT__Q7),128);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+383,(vlSelf->ysyx_041461_TOP__DOT__rst_r1));
            tracep->chgBit(oldp+384,(vlSelf->ysyx_041461_TOP__DOT__rst_r2));
            tracep->chgBit(oldp+385,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r1));
            tracep->chgBit(oldp+386,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+387,((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))));
            tracep->chgBit(oldp+388,((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))));
            tracep->chgBit(oldp+389,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bvalid));
            tracep->chgCData(oldp+390,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bid),4);
            tracep->chgBit(oldp+391,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)))));
            tracep->chgBit(oldp+392,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rvalid));
            tracep->chgCData(oldp+393,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rid),4);
            tracep->chgCData(oldp+394,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rresp),2);
            tracep->chgQData(oldp+395,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rdata),64);
            tracep->chgBit(oldp+397,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rlast));
            tracep->chgCData(oldp+398,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate),2);
            tracep->chgBit(oldp+399,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
            tracep->chgIData(oldp+400,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr),32);
            tracep->chgCData(oldp+401,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize),3);
            tracep->chgQData(oldp+402,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata),64);
            tracep->chgCData(oldp+404,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb),8);
            tracep->chgCData(oldp+405,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 3U)))),6);
            tracep->chgBit(oldp+406,(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen));
            tracep->chgWData(oldp+407,(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask),128);
            tracep->chgWData(oldp+411,(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata),128);
            tracep->chgBit(oldp+415,(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen));
            tracep->chgWData(oldp+416,(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask),128);
            tracep->chgWData(oldp+420,(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata),128);
            tracep->chgBit(oldp+424,(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen));
            tracep->chgWData(oldp+425,(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask),128);
            tracep->chgWData(oldp+429,(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata),128);
            tracep->chgBit(oldp+433,(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen));
            tracep->chgWData(oldp+434,(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask),128);
            tracep->chgWData(oldp+438,(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata),128);
            tracep->chgCData(oldp+442,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))),6);
            tracep->chgBit(oldp+443,(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen));
            tracep->chgWData(oldp+444,(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask),128);
            tracep->chgWData(oldp+448,(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata),128);
            tracep->chgBit(oldp+452,(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen));
            tracep->chgWData(oldp+453,(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask),128);
            tracep->chgWData(oldp+457,(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata),128);
            tracep->chgBit(oldp+461,(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen));
            tracep->chgWData(oldp+462,(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask),128);
            tracep->chgWData(oldp+466,(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata),128);
            tracep->chgBit(oldp+470,(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen));
            tracep->chgWData(oldp+471,(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask),128);
            tracep->chgWData(oldp+475,(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata),128);
            tracep->chgBit(oldp+479,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_conflict));
            tracep->chgCData(oldp+480,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_ID_trap_out),4);
            tracep->chgCData(oldp+481,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_trap_out),4);
            tracep->chgQData(oldp+482,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc),64);
            tracep->chgCData(oldp+484,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out),4);
            tracep->chgIData(oldp+485,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_inst),32);
            tracep->chgIData(oldp+486,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                         ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)
                                         : ((IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                     >> 3U)) 
                                            << 3U))),32);
            tracep->chgCData(oldp+487,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                         ? 2U : 3U)),3);
            tracep->chgQData(oldp+488,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm),64);
            tracep->chgQData(oldp+490,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc),64);
            tracep->chgBit(oldp+492,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out));
            tracep->chgBit(oldp+493,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl));
            tracep->chgCData(oldp+494,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_TYPE),3);
            tracep->chgCData(oldp+495,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl),5);
            tracep->chgCData(oldp+496,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src),3);
            tracep->chgCData(oldp+497,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_MEM_ctrl),4);
            tracep->chgCData(oldp+498,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl),3);
            tracep->chgCData(oldp+499,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out),4);
            tracep->chgQData(oldp+500,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out),64);
            tracep->chgCData(oldp+502,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out),4);
            tracep->chgIData(oldp+503,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr),32);
            tracep->chgCData(oldp+504,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize),3);
            tracep->chgIData(oldp+505,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr),32);
            tracep->chgCData(oldp+506,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_arsize),3);
            tracep->chgBit(oldp+507,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit1));
            tracep->chgBit(oldp+508,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit2));
            tracep->chgBit(oldp+509,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit3));
            tracep->chgBit(oldp+510,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit4));
            tracep->chgBit(oldp+511,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit5));
            tracep->chgBit(oldp+512,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit6));
            tracep->chgBit(oldp+513,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit7));
            tracep->chgBit(oldp+514,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit8));
            tracep->chgBit(oldp+515,(((((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit1) 
                                            | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit2)) 
                                           | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit3)) 
                                          | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit4)) 
                                         | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit5)) 
                                        | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit6)) 
                                       | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit7)) 
                                      | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit8))));
            tracep->chgCData(oldp+516,((7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc))),3);
            tracep->chgQData(oldp+517,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                        >> 9U)),55);
            tracep->chgBit(oldp+519,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached));
            tracep->chgIData(oldp+520,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__i),32);
            tracep->chgBit(oldp+521,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__uncached));
            tracep->chgBit(oldp+522,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1));
            tracep->chgBit(oldp+523,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2));
            tracep->chgBit(oldp+524,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3));
            tracep->chgBit(oldp+525,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4));
            tracep->chgBit(oldp+526,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5));
            tracep->chgBit(oldp+527,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6));
            tracep->chgBit(oldp+528,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7));
            tracep->chgBit(oldp+529,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8));
            tracep->chgBit(oldp+530,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit));
            tracep->chgCData(oldp+531,((7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))),3);
            tracep->chgQData(oldp+532,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                        >> 9U)),55);
            tracep->chgBit(oldp+534,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align));
            tracep->chgQData(oldp+535,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask),64);
            tracep->chgQData(oldp+537,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata),64);
            tracep->chgQData(oldp+539,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata),64);
            tracep->chgQData(oldp+541,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata),64);
            tracep->chgQData(oldp+543,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next),64);
            tracep->chgQData(oldp+545,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next),64);
            tracep->chgBit(oldp+547,((((0x200bff8U 
                                        <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr) 
                                       & (0x200bfffU 
                                          >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr)) 
                                      | ((0x2004000U 
                                          <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr) 
                                         & (0x2004007U 
                                            >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr)))));
            tracep->chgBit(oldp+548,((((0x200bff8U 
                                        <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr) 
                                       & (0x200bfffU 
                                          >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr)) 
                                      | ((0x2004000U 
                                          <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr) 
                                         & (0x2004007U 
                                            >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr)))));
            tracep->chgIData(oldp+549,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next),32);
            tracep->chgCData(oldp+550,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize_next),3);
            tracep->chgBit(oldp+551,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen)))));
            __Vtemp188[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[0U]);
            __Vtemp188[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[1U]);
            __Vtemp188[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[2U]);
            __Vtemp188[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[3U]);
            tracep->chgWData(oldp+552,(__Vtemp188),128);
            tracep->chgBit(oldp+556,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen)))));
            __Vtemp189[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[0U]);
            __Vtemp189[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[1U]);
            __Vtemp189[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[2U]);
            __Vtemp189[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[3U]);
            tracep->chgWData(oldp+557,(__Vtemp189),128);
            tracep->chgBit(oldp+561,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen)))));
            __Vtemp190[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[0U]);
            __Vtemp190[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[1U]);
            __Vtemp190[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[2U]);
            __Vtemp190[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[3U]);
            tracep->chgWData(oldp+562,(__Vtemp190),128);
            tracep->chgBit(oldp+566,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen)))));
            __Vtemp191[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[0U]);
            __Vtemp191[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[1U]);
            __Vtemp191[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[2U]);
            __Vtemp191[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[3U]);
            tracep->chgWData(oldp+567,(__Vtemp191),128);
            tracep->chgBit(oldp+571,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen)))));
            __Vtemp192[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[0U]);
            __Vtemp192[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[1U]);
            __Vtemp192[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[2U]);
            __Vtemp192[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[3U]);
            tracep->chgWData(oldp+572,(__Vtemp192),128);
            tracep->chgBit(oldp+576,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen)))));
            __Vtemp193[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[0U]);
            __Vtemp193[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[1U]);
            __Vtemp193[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[2U]);
            __Vtemp193[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[3U]);
            tracep->chgWData(oldp+577,(__Vtemp193),128);
            tracep->chgBit(oldp+581,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen)))));
            __Vtemp194[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[0U]);
            __Vtemp194[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[1U]);
            __Vtemp194[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[2U]);
            __Vtemp194[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[3U]);
            tracep->chgWData(oldp+582,(__Vtemp194),128);
            tracep->chgBit(oldp+586,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen)))));
            __Vtemp195[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[0U]);
            __Vtemp195[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[1U]);
            __Vtemp195[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[2U]);
            __Vtemp195[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[3U]);
            tracep->chgWData(oldp+587,(__Vtemp195),128);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
            tracep->chgBit(oldp+591,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rvalid));
            tracep->chgCData(oldp+592,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rresp),2);
            tracep->chgQData(oldp+593,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rdata),64);
            tracep->chgBit(oldp+595,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rlast));
            tracep->chgCData(oldp+596,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rid),4);
            tracep->chgBit(oldp+597,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rvalid));
            tracep->chgCData(oldp+598,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rresp),2);
            tracep->chgQData(oldp+599,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rdata),64);
            tracep->chgBit(oldp+601,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rlast));
            tracep->chgCData(oldp+602,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rid),4);
            tracep->chgBit(oldp+603,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bvalid));
            tracep->chgCData(oldp+604,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bid),4);
            tracep->chgQData(oldp+605,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata_next),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+607,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_ready));
            tracep->chgBit(oldp+608,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_ready));
            tracep->chgBit(oldp+609,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_ready));
            tracep->chgBit(oldp+610,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ready));
            tracep->chgBit(oldp+611,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ready));
        }
        tracep->chgBit(oldp+612,(vlSelf->clk));
        tracep->chgBit(oldp+613,(vlSelf->rst));
        tracep->chgBit(oldp+614,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                  & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)))));
        tracep->chgBit(oldp+615,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                  & ((2U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                                     & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate))))));
        tracep->chgBit(oldp+616,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
                                  & (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate)))));
        tracep->chgBit(oldp+617,(((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate))
                                   ? (1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                   : ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
                                      & (1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))))));
        tracep->chgQData(oldp+618,(((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
                                     ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rdata
                                     : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata)),64);
        tracep->chgIData(oldp+620,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                     ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr
                                     : vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr)),32);
        tracep->chgCData(oldp+621,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                     ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize)
                                     : (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awsize))),3);
        tracep->chgCData(oldp+622,(((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
                                     ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid)
                                     : ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                             ? 0U : 1U)
                                         : 0U))),4);
        tracep->chgIData(oldp+623,(((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
                                     ? vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr
                                     : ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                             ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                                 ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc)
                                                 : 
                                                ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 3U)) 
                                                 << 3U))
                                             : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr)
                                         : 0U))),32);
        tracep->chgCData(oldp+624,(((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
                                     ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arsize)
                                     : ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                             ? ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__uncached)
                                                 ? 2U
                                                 : 3U)
                                             : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize))
                                         : 0U))),3);
    }
}

void Vysyx_041461_TOP___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_041461_TOP___024root* const __restrict vlSelf = static_cast<Vysyx_041461_TOP___024root*>(voidSelf);
    Vysyx_041461_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    }
}
