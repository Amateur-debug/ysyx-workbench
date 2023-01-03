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
    VlWide<4>/*127:0*/ __Vtemp173;
    VlWide<4>/*127:0*/ __Vtemp174;
    VlWide<4>/*127:0*/ __Vtemp175;
    VlWide<4>/*127:0*/ __Vtemp176;
    VlWide<4>/*127:0*/ __Vtemp177;
    VlWide<4>/*127:0*/ __Vtemp178;
    VlWide<4>/*127:0*/ __Vtemp179;
    VlWide<4>/*127:0*/ __Vtemp180;
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
            tracep->chgBit(oldp+18,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wvalid));
            tracep->chgBit(oldp+19,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wlast));
            tracep->chgBit(oldp+20,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_bready));
            tracep->chgBit(oldp+21,(((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                      ? (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                      : ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                         & (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))))));
            tracep->chgBit(oldp+22,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_valid));
            tracep->chgBit(oldp+23,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_WBreg_valid));
            tracep->chgBit(oldp+24,((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))));
            tracep->chgBit(oldp+25,((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))));
            tracep->chgCData(oldp+26,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_trap_out),4);
            tracep->chgBit(oldp+27,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out));
            tracep->chgIData(oldp+28,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out),32);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_pc_out),64);
            tracep->chgCData(oldp+31,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 7U))),5);
            tracep->chgCData(oldp+32,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+33,((0x1fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                >> 0x14U))),5);
            tracep->chgSData(oldp+34,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                       >> 0x14U)),12);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_imm),64);
            tracep->chgQData(oldp+37,((QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                          >> 0xfU))))),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_next_pc),64);
            tracep->chgBit(oldp+41,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_valid_out));
            tracep->chgBit(oldp+42,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_IFreg_ctrl));
            tracep->chgBit(oldp+43,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_FENCE_I));
            tracep->chgCData(oldp+44,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl),3);
            tracep->chgCData(oldp+45,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_ctrl),5);
            tracep->chgCData(oldp+46,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_EXE_src),3);
            tracep->chgCData(oldp+47,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_MEM_ctrl),4);
            tracep->chgCData(oldp+48,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_WB_ctrl),3);
            tracep->chgCData(oldp+49,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_trap_out),4);
            tracep->chgBit(oldp+50,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out));
            tracep->chgCData(oldp+51,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_trap_out),4);
            tracep->chgCData(oldp+52,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rd_out),5);
            tracep->chgCData(oldp+53,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs1_out),5);
            tracep->chgCData(oldp+54,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out),5);
            tracep->chgSData(oldp+55,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_csr_out),12);
            tracep->chgQData(oldp+56,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_imm_out),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_zimm_out),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_pc_out),64);
            tracep->chgCData(oldp+62,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_ctrl_out),5);
            tracep->chgCData(oldp+63,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_EXE_src_out),3);
            tracep->chgCData(oldp+64,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_MEM_ctrl_out),4);
            tracep->chgCData(oldp+65,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out),3);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE_out),64);
            tracep->chgCData(oldp+68,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_trap_out),4);
            tracep->chgBit(oldp+69,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out));
            tracep->chgCData(oldp+70,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rd_out),5);
            tracep->chgCData(oldp+71,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs1_out),5);
            tracep->chgCData(oldp+72,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_rs2_out),5);
            tracep->chgSData(oldp+73,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_csr_out),12);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_imm_out),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_zimm_out),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_pc_out),64);
            tracep->chgCData(oldp+80,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out),4);
            tracep->chgCData(oldp+81,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out),3);
            tracep->chgBit(oldp+82,((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+83,((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+84,((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))));
            tracep->chgBit(oldp+85,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out));
            tracep->chgCData(oldp+86,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_trap_out),4);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_EXE_out),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_MEM_out),64);
            tracep->chgCData(oldp+91,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rd_out),5);
            tracep->chgCData(oldp+92,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_rs1_out),5);
            tracep->chgSData(oldp+93,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_csr_out),12);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_imm_out),64);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_zimm_out),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_pc_out),64);
            tracep->chgCData(oldp+100,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out),3);
            tracep->chgQData(oldp+101,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec),64);
            tracep->chgQData(oldp+103,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc),64);
            tracep->chgCData(oldp+105,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_IFreg_ctrl),2);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs1_data),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_ID_rs2_data),64);
            tracep->chgQData(oldp+116,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_rs1_data),64);
            tracep->chgQData(oldp+118,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x
                                       [vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_rs2_out]),64);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_EXE_csr_data),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB_MEM_rs2_data),64);
            tracep->chgBit(oldp+124,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime 
                                      >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp)));
            tracep->chgBit(oldp+125,((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))));
            tracep->chgBit(oldp+126,((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))));
            tracep->chgBit(oldp+127,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bvalid));
            tracep->chgCData(oldp+128,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_bid),4);
            tracep->chgBit(oldp+129,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rvalid));
            tracep->chgCData(oldp+130,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rid),4);
            tracep->chgQData(oldp+131,(((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
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
            tracep->chgBit(oldp+133,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT_rlast));
            tracep->chgCData(oldp+134,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bresp),2);
            tracep->chgBit(oldp+135,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                      & (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
            tracep->chgCData(oldp+136,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? 1U : 0U)),4);
            tracep->chgBit(oldp+137,(((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                      & (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))));
            tracep->chgCData(oldp+138,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state),3);
            tracep->chgQData(oldp+139,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata),64);
            tracep->chgBit(oldp+141,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie 
                                                    >> 7U)))));
            tracep->chgBit(oldp+142,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip 
                                                    >> 7U)))));
            tracep->chgBit(oldp+143,((1U & (IData)(
                                                   (vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus 
                                                    >> 3U)))));
            tracep->chgIData(oldp+144,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__i),32);
            tracep->chgIData(oldp+145,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__k),32);
            tracep->chgCData(oldp+146,((0x7fU & vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out)),7);
            tracep->chgCData(oldp+147,((7U & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+148,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x1aU)),6);
            tracep->chgCData(oldp+149,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+150,((0x3fU & (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_inst_out 
                                                 >> 0x14U))),6);
            tracep->chgQData(oldp+151,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src1),64);
            tracep->chgQData(oldp+153,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__src2),64);
            tracep->chgWData(oldp+155,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXE__DOT__middle),128);
            tracep->chgBit(oldp+159,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__load));
            tracep->chgBit(oldp+160,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__store));
            tracep->chgCData(oldp+161,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state),3);
            tracep->chgQData(oldp+162,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata),64);
            tracep->chgIData(oldp+164,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__k),32);
            tracep->chgQData(oldp+165,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[0]),64);
            tracep->chgQData(oldp+167,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[1]),64);
            tracep->chgQData(oldp+169,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[2]),64);
            tracep->chgQData(oldp+171,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[3]),64);
            tracep->chgQData(oldp+173,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[4]),64);
            tracep->chgQData(oldp+175,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[5]),64);
            tracep->chgQData(oldp+177,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[6]),64);
            tracep->chgQData(oldp+179,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[7]),64);
            tracep->chgQData(oldp+181,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[8]),64);
            tracep->chgQData(oldp+183,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[9]),64);
            tracep->chgQData(oldp+185,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[10]),64);
            tracep->chgQData(oldp+187,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[11]),64);
            tracep->chgQData(oldp+189,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[12]),64);
            tracep->chgQData(oldp+191,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[13]),64);
            tracep->chgQData(oldp+193,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[14]),64);
            tracep->chgQData(oldp+195,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[15]),64);
            tracep->chgQData(oldp+197,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[16]),64);
            tracep->chgQData(oldp+199,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[17]),64);
            tracep->chgQData(oldp+201,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[18]),64);
            tracep->chgQData(oldp+203,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[19]),64);
            tracep->chgQData(oldp+205,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[20]),64);
            tracep->chgQData(oldp+207,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[21]),64);
            tracep->chgQData(oldp+209,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[22]),64);
            tracep->chgQData(oldp+211,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[23]),64);
            tracep->chgQData(oldp+213,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[24]),64);
            tracep->chgQData(oldp+215,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[25]),64);
            tracep->chgQData(oldp+217,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[26]),64);
            tracep->chgQData(oldp+219,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[27]),64);
            tracep->chgQData(oldp+221,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[28]),64);
            tracep->chgQData(oldp+223,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[29]),64);
            tracep->chgQData(oldp+225,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[30]),64);
            tracep->chgQData(oldp+227,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__x[31]),64);
            tracep->chgQData(oldp+229,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[0]),64);
            tracep->chgQData(oldp+231,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[1]),64);
            tracep->chgQData(oldp+233,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[2]),64);
            tracep->chgQData(oldp+235,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[3]),64);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[4]),64);
            tracep->chgQData(oldp+239,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[5]),64);
            tracep->chgQData(oldp+241,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[6]),64);
            tracep->chgQData(oldp+243,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[7]),64);
            tracep->chgQData(oldp+245,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[8]),64);
            tracep->chgQData(oldp+247,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[9]),64);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[10]),64);
            tracep->chgQData(oldp+251,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[11]),64);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[12]),64);
            tracep->chgQData(oldp+255,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[13]),64);
            tracep->chgQData(oldp+257,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[14]),64);
            tracep->chgQData(oldp+259,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[15]),64);
            tracep->chgQData(oldp+261,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[16]),64);
            tracep->chgQData(oldp+263,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[17]),64);
            tracep->chgQData(oldp+265,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[18]),64);
            tracep->chgQData(oldp+267,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[19]),64);
            tracep->chgQData(oldp+269,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[20]),64);
            tracep->chgQData(oldp+271,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[21]),64);
            tracep->chgQData(oldp+273,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[22]),64);
            tracep->chgQData(oldp+275,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[23]),64);
            tracep->chgQData(oldp+277,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[24]),64);
            tracep->chgQData(oldp+279,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[25]),64);
            tracep->chgQData(oldp+281,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[26]),64);
            tracep->chgQData(oldp+283,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[27]),64);
            tracep->chgQData(oldp+285,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[28]),64);
            tracep->chgQData(oldp+287,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[29]),64);
            tracep->chgQData(oldp+289,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[30]),64);
            tracep->chgQData(oldp+291,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__d[31]),64);
            tracep->chgQData(oldp+293,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mtvec_next),64);
            tracep->chgQData(oldp+295,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mepc_next),64);
            tracep->chgQData(oldp+297,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause),64);
            tracep->chgQData(oldp+299,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mcause_next),64);
            tracep->chgQData(oldp+301,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mstatus_next),64);
            tracep->chgQData(oldp+303,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mie_next),64);
            tracep->chgQData(oldp+305,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mip_next),64);
            tracep->chgQData(oldp+307,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid),64);
            tracep->chgQData(oldp+309,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__mhartid_next),64);
            tracep->chgIData(oldp+311,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WB__DOT__j),32);
            tracep->chgBit(oldp+312,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                                      & ((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl)) 
                                         | (3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl))))));
            tracep->chgBit(oldp+313,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IDreg_valid_out) 
                                      & (1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ID_CD_ctrl)))));
            tracep->chgBit(oldp+314,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_trap));
            tracep->chgBit(oldp+315,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__ID_conflict));
            tracep->chgBit(oldp+316,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rd_write));
            tracep->chgBit(oldp+317,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_valid_out) 
                                      & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out)) 
                                          | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))) 
                                         | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__EXEreg_WB_ctrl_out))))));
            tracep->chgBit(oldp+318,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs1_read));
            tracep->chgBit(oldp+319,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_rs2_read));
            tracep->chgBit(oldp+320,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_csr_read));
            tracep->chgBit(oldp+321,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_trap));
            tracep->chgBit(oldp+322,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__EXE_conflict));
            tracep->chgBit(oldp+323,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_rd_write));
            tracep->chgBit(oldp+324,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                      & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out)) 
                                          | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))) 
                                         | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_WB_ctrl_out))))));
            tracep->chgBit(oldp+325,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out) 
                                      & (IData)((8U 
                                                 == 
                                                 (0xcU 
                                                  & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)))))));
            tracep->chgBit(oldp+326,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_conflict));
            tracep->chgBit(oldp+327,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_rd_write));
            tracep->chgBit(oldp+328,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_valid_out) 
                                      & (((5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out)) 
                                          | (6U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))) 
                                         | (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__WBreg_WB_ctrl_out))))));
            tracep->chgBit(oldp+329,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__WB_trap));
            tracep->chgQData(oldp+330,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime),64);
            tracep->chgQData(oldp+332,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp),64);
            tracep->chgCData(oldp+334,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state),2);
            tracep->chgBit(oldp+335,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtime_hit));
            tracep->chgBit(oldp+336,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__waddr_mtimecmp_hit));
            tracep->chgBit(oldp+337,(((0x200bff8U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                      & (0x200bfffU 
                                         >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))));
            tracep->chgBit(oldp+338,(((0x2004000U <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr) 
                                      & (0x2004007U 
                                         >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr))));
            tracep->chgCData(oldp+339,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid),4);
            tracep->chgCData(oldp+340,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 1U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awid))),4);
            tracep->chgIData(oldp+341,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr),32);
            tracep->chgCData(oldp+342,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen),8);
            tracep->chgCData(oldp+343,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awlen))),8);
            tracep->chgCData(oldp+344,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize),3);
            tracep->chgCData(oldp+345,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst),2);
            tracep->chgCData(oldp+346,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awburst))),2);
            tracep->chgCData(oldp+347,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid),4);
            tracep->chgCData(oldp+348,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                             ? 1U : 0U)
                                         : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arid))),4);
            tracep->chgIData(oldp+349,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr),32);
            tracep->chgCData(oldp+350,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen),8);
            tracep->chgCData(oldp+351,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arlen))),8);
            tracep->chgCData(oldp+352,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize),3);
            tracep->chgCData(oldp+353,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst),2);
            tracep->chgCData(oldp+354,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? 0U : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arburst))),2);
            tracep->chgCData(oldp+355,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate),2);
            tracep->chgCData(oldp+356,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate),2);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [6U]))) {
            tracep->chgBit(oldp+357,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                      & ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                          ? (2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                          : ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)) 
                                             & (2U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state)))))));
            tracep->chgCData(oldp+358,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                             ? 0U : 
                                            ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)
                                              ? 0U : 1U))
                                         : 0U)),4);
            tracep->chgIData(oldp+359,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                            >> 0x1fU)))
                                                 ? 
                                                ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 3U)) 
                                                 << 3U)
                                                 : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc))
                                             : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)
                                                 ? 0U
                                                 : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr))
                                         : 0U)),32);
            tracep->chgCData(oldp+360,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                            >> 0x1fU)))
                                                 ? 3U
                                                 : 2U)
                                             : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize)))
                                         : 0U)),3);
            tracep->chgBit(oldp+361,((1U & ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_valid)) 
                                            | ((0U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                                ? (0U 
                                                   != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out))
                                                : (7U 
                                                   == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)))))));
            tracep->chgBit(oldp+362,(((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_valid) 
                                      & ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                          ? (0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out))
                                          : (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))))));
            tracep->chgBit(oldp+363,(((~ ((~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_valid_out)) 
                                          | (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEM_valid)))) 
                                      & ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
                                          ? ((0U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out)) 
                                             | (0U 
                                                == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out)))
                                          : (7U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))))));
            tracep->chgQData(oldp+364,(((8U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_MEM_ctrl_out))
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
            tracep->chgBit(oldp+366,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
                                      & ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wclint) 
                                         & (5U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))))));
            tracep->chgIData(oldp+367,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr
                                         : vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awaddr)),32);
            tracep->chgCData(oldp+368,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                         ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize)
                                         : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__awsize))),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgWData(oldp+369,(vlSelf->ysyx_041461_TOP__DOT__Q0),128);
            tracep->chgWData(oldp+373,(vlSelf->ysyx_041461_TOP__DOT__Q1),128);
            tracep->chgWData(oldp+377,(vlSelf->ysyx_041461_TOP__DOT__Q2),128);
            tracep->chgWData(oldp+381,(vlSelf->ysyx_041461_TOP__DOT__Q3),128);
            tracep->chgWData(oldp+385,(vlSelf->ysyx_041461_TOP__DOT__Q4),128);
            tracep->chgWData(oldp+389,(vlSelf->ysyx_041461_TOP__DOT__Q5),128);
            tracep->chgWData(oldp+393,(vlSelf->ysyx_041461_TOP__DOT__Q6),128);
            tracep->chgWData(oldp+397,(vlSelf->ysyx_041461_TOP__DOT__Q7),128);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+401,(vlSelf->ysyx_041461_TOP__DOT__rst_r1));
            tracep->chgBit(oldp+402,(vlSelf->ysyx_041461_TOP__DOT__rst_r2));
            tracep->chgBit(oldp+403,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r1));
            tracep->chgBit(oldp+404,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__rst_r2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+405,((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))));
            tracep->chgBit(oldp+406,((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))));
            tracep->chgBit(oldp+407,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bvalid));
            tracep->chgCData(oldp+408,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_bid),4);
            tracep->chgBit(oldp+409,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)))));
            tracep->chgBit(oldp+410,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rvalid));
            tracep->chgCData(oldp+411,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rid),4);
            tracep->chgCData(oldp+412,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rresp),2);
            tracep->chgQData(oldp+413,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rdata),64);
            tracep->chgBit(oldp+415,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR_rlast));
            tracep->chgCData(oldp+416,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate),2);
            tracep->chgBit(oldp+417,(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+418,(vlSelf->ysyx_041461_TOP__DOT__io_master_awvalid));
            tracep->chgIData(oldp+419,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr),32);
            tracep->chgCData(oldp+420,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize),3);
            tracep->chgQData(oldp+421,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wdata),64);
            tracep->chgCData(oldp+423,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_wstrb),8);
            tracep->chgCData(oldp+424,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                         >> 3U)))),6);
            tracep->chgBit(oldp+425,(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen));
            tracep->chgWData(oldp+426,(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask),128);
            tracep->chgWData(oldp+430,(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wdata),128);
            tracep->chgBit(oldp+434,(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen));
            tracep->chgWData(oldp+435,(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask),128);
            tracep->chgWData(oldp+439,(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wdata),128);
            tracep->chgBit(oldp+443,(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen));
            tracep->chgWData(oldp+444,(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask),128);
            tracep->chgWData(oldp+448,(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wdata),128);
            tracep->chgBit(oldp+452,(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen));
            tracep->chgWData(oldp+453,(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask),128);
            tracep->chgWData(oldp+457,(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wdata),128);
            tracep->chgCData(oldp+461,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                         >> 3U)))),6);
            tracep->chgBit(oldp+462,(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen));
            tracep->chgWData(oldp+463,(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask),128);
            tracep->chgWData(oldp+467,(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wdata),128);
            tracep->chgBit(oldp+471,(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen));
            tracep->chgWData(oldp+472,(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask),128);
            tracep->chgWData(oldp+476,(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wdata),128);
            tracep->chgBit(oldp+480,(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen));
            tracep->chgWData(oldp+481,(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask),128);
            tracep->chgWData(oldp+485,(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wdata),128);
            tracep->chgBit(oldp+489,(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen));
            tracep->chgWData(oldp+490,(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask),128);
            tracep->chgWData(oldp+494,(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wdata),128);
            tracep->chgBit(oldp+498,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IFreg_enable));
            tracep->chgBit(oldp+499,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IF_valid));
            tracep->chgBit(oldp+500,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IDreg_valid));
            tracep->chgBit(oldp+501,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_IDreg_enable));
            tracep->chgBit(oldp+502,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXEreg_valid));
            tracep->chgBit(oldp+503,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_EXEreg_enable));
            tracep->chgBit(oldp+504,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEMreg_valid));
            tracep->chgBit(oldp+505,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD_MEMreg_enable));
            tracep->chgQData(oldp+506,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc),64);
            tracep->chgCData(oldp+508,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_trap_out),4);
            tracep->chgIData(oldp+509,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF_inst),32);
            tracep->chgIData(oldp+510,(((1U & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 0x1fU)))
                                         ? ((IData)(
                                                    (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                     >> 3U)) 
                                            << 3U) : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc))),32);
            tracep->chgCData(oldp+511,(((1U & (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 0x1fU)))
                                         ? 3U : 2U)),3);
            tracep->chgQData(oldp+512,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out),64);
            tracep->chgBit(oldp+514,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_ok));
            tracep->chgCData(oldp+515,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_trap_out),4);
            tracep->chgIData(oldp+516,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr),32);
            tracep->chgCData(oldp+517,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize),3);
            tracep->chgIData(oldp+518,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr),32);
            tracep->chgCData(oldp+519,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_arsize),3);
            tracep->chgBit(oldp+520,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit1));
            tracep->chgBit(oldp+521,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit2));
            tracep->chgBit(oldp+522,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit3));
            tracep->chgBit(oldp+523,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit4));
            tracep->chgBit(oldp+524,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit5));
            tracep->chgBit(oldp+525,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit6));
            tracep->chgBit(oldp+526,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit7));
            tracep->chgBit(oldp+527,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit8));
            tracep->chgBit(oldp+528,(((((((((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit1) 
                                            | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit2)) 
                                           | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit3)) 
                                          | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit4)) 
                                         | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit5)) 
                                        | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit6)) 
                                       | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit7)) 
                                      | (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__hit8))));
            tracep->chgCData(oldp+529,((7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc))),3);
            tracep->chgQData(oldp+530,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                        >> 9U)),55);
            tracep->chgBit(oldp+532,((1U & (~ (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                       >> 0x1fU))))));
            tracep->chgBit(oldp+533,((1U & (~ (IData)(
                                                      (vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                                       >> 0x1fU))))));
            tracep->chgBit(oldp+534,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit1));
            tracep->chgBit(oldp+535,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit2));
            tracep->chgBit(oldp+536,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit3));
            tracep->chgBit(oldp+537,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit4));
            tracep->chgBit(oldp+538,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit5));
            tracep->chgBit(oldp+539,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit6));
            tracep->chgBit(oldp+540,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit7));
            tracep->chgBit(oldp+541,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit8));
            tracep->chgBit(oldp+542,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__hit));
            tracep->chgCData(oldp+543,((7U & (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out))),3);
            tracep->chgQData(oldp+544,((vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEMreg_EXE_out 
                                        >> 9U)),55);
            tracep->chgBit(oldp+546,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__align));
            tracep->chgQData(oldp+547,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wmask),64);
            tracep->chgQData(oldp+549,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__cache_wdata),64);
            tracep->chgQData(oldp+551,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rdata),64);
            tracep->chgQData(oldp+553,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__rrdata),64);
            tracep->chgBit(oldp+555,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CD__DOT__MEM_trap));
            tracep->chgQData(oldp+556,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtime_next),64);
            tracep->chgQData(oldp+558,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__mtimecmp_next),64);
            tracep->chgBit(oldp+560,((((0x200bff8U 
                                        <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr) 
                                       & (0x200bfffU 
                                          >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr)) 
                                      | ((0x2004000U 
                                          <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr) 
                                         & (0x2004007U 
                                            >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr)))));
            tracep->chgBit(oldp+561,((((0x200bff8U 
                                        <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr) 
                                       & (0x200bfffU 
                                          >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr)) 
                                      | ((0x2004000U 
                                          <= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr) 
                                         & (0x2004007U 
                                            >= vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_CLINT_araddr)))));
            tracep->chgIData(oldp+562,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__araddr_next),32);
            tracep->chgCData(oldp+563,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__arsize_next),3);
            tracep->chgBit(oldp+564,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint));
            tracep->chgBit(oldp+565,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wclint));
            tracep->chgBit(oldp+566,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram0_wen)))));
            __Vtemp173[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[0U]);
            __Vtemp173[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[1U]);
            __Vtemp173[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[2U]);
            __Vtemp173[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram0_wmask[3U]);
            tracep->chgWData(oldp+567,(__Vtemp173),128);
            tracep->chgBit(oldp+571,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram1_wen)))));
            __Vtemp174[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[0U]);
            __Vtemp174[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[1U]);
            __Vtemp174[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[2U]);
            __Vtemp174[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram1_wmask[3U]);
            tracep->chgWData(oldp+572,(__Vtemp174),128);
            tracep->chgBit(oldp+576,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram2_wen)))));
            __Vtemp175[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[0U]);
            __Vtemp175[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[1U]);
            __Vtemp175[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[2U]);
            __Vtemp175[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram2_wmask[3U]);
            tracep->chgWData(oldp+577,(__Vtemp175),128);
            tracep->chgBit(oldp+581,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram3_wen)))));
            __Vtemp176[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[0U]);
            __Vtemp176[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[1U]);
            __Vtemp176[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[2U]);
            __Vtemp176[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram3_wmask[3U]);
            tracep->chgWData(oldp+582,(__Vtemp176),128);
            tracep->chgBit(oldp+586,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram4_wen)))));
            __Vtemp177[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[0U]);
            __Vtemp177[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[1U]);
            __Vtemp177[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[2U]);
            __Vtemp177[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram4_wmask[3U]);
            tracep->chgWData(oldp+587,(__Vtemp177),128);
            tracep->chgBit(oldp+591,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram5_wen)))));
            __Vtemp178[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[0U]);
            __Vtemp178[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[1U]);
            __Vtemp178[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[2U]);
            __Vtemp178[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram5_wmask[3U]);
            tracep->chgWData(oldp+592,(__Vtemp178),128);
            tracep->chgBit(oldp+596,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram6_wen)))));
            __Vtemp179[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[0U]);
            __Vtemp179[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[1U]);
            __Vtemp179[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[2U]);
            __Vtemp179[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram6_wmask[3U]);
            tracep->chgWData(oldp+597,(__Vtemp179),128);
            tracep->chgBit(oldp+601,((1U & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__io_sram7_wen)))));
            __Vtemp180[0U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[0U]);
            __Vtemp180[1U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[1U]);
            __Vtemp180[2U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[2U]);
            __Vtemp180[3U] = (~ vlSelf->ysyx_041461_TOP__DOT__io_sram7_wmask[3U]);
            tracep->chgWData(oldp+602,(__Vtemp180),128);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
            tracep->chgBit(oldp+606,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rvalid));
            tracep->chgCData(oldp+607,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rresp),2);
            tracep->chgQData(oldp+608,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rdata),64);
            tracep->chgBit(oldp+610,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rlast));
            tracep->chgCData(oldp+611,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_IF_rid),4);
            tracep->chgBit(oldp+612,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rvalid));
            tracep->chgCData(oldp+613,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rresp),2);
            tracep->chgQData(oldp+614,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rdata),64);
            tracep->chgBit(oldp+616,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rlast));
            tracep->chgCData(oldp+617,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rid),4);
            tracep->chgBit(oldp+618,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bvalid));
            tracep->chgCData(oldp+619,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_bid),4);
            tracep->chgQData(oldp+620,(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__AXI_rdata_next),64);
        }
        tracep->chgBit(oldp+622,(vlSelf->clk));
        tracep->chgBit(oldp+623,(vlSelf->rst));
        tracep->chgBit(oldp+624,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                  & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)))));
        tracep->chgBit(oldp+625,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate)) 
                                  & ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)
                                      ? (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                      : ((2U != (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state)) 
                                         & (~ (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)))))));
        tracep->chgBit(oldp+626,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
                                  & ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wclint)
                                      ? (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))
                                      : (0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))))));
        tracep->chgBit(oldp+627,(((1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate))
                                   ? (1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                   : ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__wstate)) 
                                      & (1U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__CLINT__DOT__state))))));
        tracep->chgQData(oldp+628,(((3U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__state))
                                     ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER_MEM_rdata
                                     : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM__DOT__AXI_rdata)),64);
        tracep->chgIData(oldp+630,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                     ? vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awaddr
                                     : vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awaddr)),32);
        tracep->chgCData(oldp+631,(((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__wstate))
                                     ? (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_awsize)
                                     : (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__awsize))),3);
        tracep->chgCData(oldp+632,(((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
                                     ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arid)
                                     : ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                             ? 0U : 
                                            ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)
                                              ? 0U : 1U))
                                         : 0U))),4);
        tracep->chgIData(oldp+633,(((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
                                     ? vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__araddr
                                     : ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                            >> 0x1fU)))
                                                 ? 
                                                ((IData)(
                                                         (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                          >> 3U)) 
                                                 << 3U)
                                                 : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc))
                                             : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)
                                                 ? 0U
                                                 : vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_araddr))
                                         : 0U))),32);
        tracep->chgCData(oldp+634,(((IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__rstate)
                                     ? (IData)(vlSelf->ysyx_041461_TOP__DOT__AXI_CROSSBAR__DOT__arsize)
                                     : ((0U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rstate))
                                         ? ((2U == (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__IF__DOT__state))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_041461_TOP__DOT__core__DOT__IFreg_pc 
                                                            >> 0x1fU)))
                                                 ? 3U
                                                 : 2U)
                                             : ((IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__ARBITER__DOT__rclint)
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyx_041461_TOP__DOT__core__DOT__MEM_arsize)))
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
    }
}
