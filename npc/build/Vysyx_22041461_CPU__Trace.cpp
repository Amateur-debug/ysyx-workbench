// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22041461_CPU__Syms.h"


void Vysyx_22041461_CPU___024root__traceChgSub0(Vysyx_22041461_CPU___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22041461_CPU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22041461_CPU___024root* const __restrict vlSelf = static_cast<Vysyx_22041461_CPU___024root*>(voidSelf);
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22041461_CPU___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22041461_CPU___024root__traceChgSub0(Vysyx_22041461_CPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp294;
    VlWide<4>/*127:0*/ __Vtemp295;
    VlWide<4>/*127:0*/ __Vtemp300;
    VlWide<4>/*127:0*/ __Vtemp304;
    VlWide<4>/*127:0*/ __Vtemp313;
    VlWide<4>/*127:0*/ __Vtemp353;
    VlWide<4>/*127:0*/ __Vtemp356;
    VlWide<4>/*127:0*/ __Vtemp396;
    VlWide<4>/*127:0*/ __Vtemp400;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_valid_out));
            tracep->chgQData(oldp+1,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_EXE_out),64);
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_MEM_out),64);
            tracep->chgCData(oldp+5,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out),5);
            tracep->chgCData(oldp+6,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rs1_out),5);
            tracep->chgSData(oldp+7,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out),12);
            tracep->chgQData(oldp+8,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_imm_out),64);
            tracep->chgQData(oldp+10,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_zimm_out),64);
            tracep->chgQData(oldp+12,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_pc_out),64);
            tracep->chgCData(oldp+14,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out),4);
            tracep->chgBit(oldp+15,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write));
            tracep->chgBit(oldp+16,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write));
            tracep->chgBit(oldp+17,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+18,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec),64);
            tracep->chgQData(oldp+20,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc),64);
            tracep->chgQData(oldp+22,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0]),64);
            tracep->chgQData(oldp+24,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[1]),64);
            tracep->chgQData(oldp+26,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[2]),64);
            tracep->chgQData(oldp+28,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[3]),64);
            tracep->chgQData(oldp+30,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[4]),64);
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[5]),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[6]),64);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[7]),64);
            tracep->chgQData(oldp+38,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[8]),64);
            tracep->chgQData(oldp+40,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[9]),64);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[10]),64);
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[11]),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[12]),64);
            tracep->chgQData(oldp+48,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[13]),64);
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[14]),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[15]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[16]),64);
            tracep->chgQData(oldp+56,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[17]),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[18]),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[19]),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[20]),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[21]),64);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[22]),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[23]),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[24]),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[25]),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[26]),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[27]),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[28]),64);
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[29]),64);
            tracep->chgQData(oldp+82,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[30]),64);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[31]),64);
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause),64);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus),64);
            tracep->chgIData(oldp+90,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__j),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgWData(oldp+91,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out),128);
            tracep->chgQData(oldp+95,((((QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[0U])))),64);
            tracep->chgQData(oldp+97,((((QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__SRAM_data_out[2U])))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+99,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out));
            tracep->chgCData(oldp+100,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out),5);
            tracep->chgCData(oldp+101,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out),5);
            tracep->chgCData(oldp+102,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out),5);
            tracep->chgSData(oldp+103,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out),12);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_imm_out),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_zimm_out),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_pc_out),64);
            tracep->chgCData(oldp+110,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out),5);
            tracep->chgCData(oldp+111,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out),3);
            tracep->chgCData(oldp+112,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_MEM_ctrl_out),4);
            tracep->chgCData(oldp+113,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out),4);
            tracep->chgBit(oldp+114,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write));
            tracep->chgBit(oldp+115,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write));
            tracep->chgBit(oldp+116,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_ecall_write));
            tracep->chgBit(oldp+117,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs1_read));
            tracep->chgBit(oldp+118,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs2_read));
            tracep->chgBit(oldp+119,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_read));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+120,(vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out));
            tracep->chgIData(oldp+121,(vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out),32);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out),64);
            tracep->chgCData(oldp+124,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+125,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+126,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                 >> 0x14U))),5);
            tracep->chgSData(oldp+127,((vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+128,((QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                           >> 0xfU))))),64);
            tracep->chgCData(oldp+130,((0x7fU & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)),7);
            tracep->chgCData(oldp+131,((7U & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+132,((vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                        >> 0x1aU)),6);
            tracep->chgCData(oldp+133,((vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+134,((0x3fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                 >> 0x14U))),6);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+135,(vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r1));
            tracep->chgBit(oldp+136,(vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2));
            tracep->chgBit(oldp+137,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r1));
            tracep->chgBit(oldp+138,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2));
            tracep->chgBit(oldp+139,(vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r1));
            tracep->chgBit(oldp+140,(vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2));
            tracep->chgBit(oldp+141,(vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r1));
            tracep->chgBit(oldp+142,(vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2));
            tracep->chgBit(oldp+143,(vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r1));
            tracep->chgBit(oldp+144,(vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2));
            tracep->chgBit(oldp+145,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__rst_r1));
            tracep->chgBit(oldp+146,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__rst_r2));
            tracep->chgBit(oldp+147,(vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r1));
            tracep->chgBit(oldp+148,(vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2));
            tracep->chgBit(oldp+149,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r1));
            tracep->chgBit(oldp+150,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
            tracep->chgBit(oldp+151,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out));
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out),64);
            tracep->chgCData(oldp+154,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out),5);
            tracep->chgCData(oldp+155,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs1_out),5);
            tracep->chgSData(oldp+156,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out),12);
            tracep->chgQData(oldp+157,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_imm_out),64);
            tracep->chgQData(oldp+159,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_zimm_out),64);
            tracep->chgQData(oldp+161,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_pc_out),64);
            tracep->chgCData(oldp+163,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out),4);
            tracep->chgCData(oldp+164,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out),4);
            tracep->chgCData(oldp+165,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask),8);
            tracep->chgBit(oldp+166,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen));
            tracep->chgCData(oldp+167,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+168,((7U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out))),3);
            tracep->chgQData(oldp+169,((vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                        >> 9U)),55);
            tracep->chgBit(oldp+171,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__inmemory));
            tracep->chgBit(oldp+172,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write));
            tracep->chgBit(oldp+173,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write));
            tracep->chgBit(oldp+174,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write));
            tracep->chgBit(oldp+175,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
            tracep->chgQData(oldp+176,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0]),64);
            tracep->chgQData(oldp+178,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[1]),64);
            tracep->chgQData(oldp+180,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[2]),64);
            tracep->chgQData(oldp+182,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[3]),64);
            tracep->chgQData(oldp+184,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[4]),64);
            tracep->chgQData(oldp+186,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[5]),64);
            tracep->chgQData(oldp+188,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[6]),64);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[7]),64);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[8]),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[9]),64);
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[10]),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[11]),64);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[12]),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[13]),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[14]),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[15]),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[16]),64);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[17]),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[18]),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[19]),64);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[20]),64);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[21]),64);
            tracep->chgQData(oldp+220,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[22]),64);
            tracep->chgQData(oldp+222,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[23]),64);
            tracep->chgQData(oldp+224,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[24]),64);
            tracep->chgQData(oldp+226,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[25]),64);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[26]),64);
            tracep->chgQData(oldp+230,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[27]),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[28]),64);
            tracep->chgQData(oldp+234,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[29]),64);
            tracep->chgQData(oldp+236,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[30]),64);
            tracep->chgQData(oldp+238,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[31]),64);
            tracep->chgQData(oldp+240,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec_next),64);
            tracep->chgQData(oldp+242,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc_next),64);
            tracep->chgQData(oldp+244,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause_next),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus_next),64);
            tracep->chgIData(oldp+248,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
            tracep->chgQData(oldp+249,(vlSelf->ysyx_22041461_CPU__DOT__EXE_out),64);
            tracep->chgQData(oldp+251,(vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_rs1_data),64);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_csr_data),64);
            tracep->chgQData(oldp+255,(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1),64);
            tracep->chgQData(oldp+257,(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2),64);
            tracep->chgWData(oldp+259,(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle),128);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
            tracep->chgWData(oldp+263,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out),128);
            tracep->chgQData(oldp+267,((((QData)((IData)(
                                                         vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[0U])))),64);
            tracep->chgQData(oldp+269,((((QData)((IData)(
                                                         vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[2U])))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
            tracep->chgBit(oldp+271,(vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid));
            tracep->chgBit(oldp+272,(vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_valid));
            tracep->chgQData(oldp+273,(vlSelf->ysyx_22041461_CPU__DOT__ID_imm),64);
            tracep->chgQData(oldp+275,(vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc),64);
            tracep->chgBit(oldp+277,(vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out));
            tracep->chgBit(oldp+278,(vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl));
            tracep->chgCData(oldp+279,(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl),3);
            tracep->chgCData(oldp+280,(vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl),5);
            tracep->chgCData(oldp+281,(vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src),3);
            tracep->chgCData(oldp+282,(vlSelf->ysyx_22041461_CPU__DOT__ID_MEM_ctrl),4);
            tracep->chgCData(oldp+283,(vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl),4);
            tracep->chgQData(oldp+284,(vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs1_data),64);
            tracep->chgQData(oldp+286,(vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs2_data),64);
            tracep->chgBit(oldp+288,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs1_read));
            tracep->chgBit(oldp+289,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs2_read));
            tracep->chgBit(oldp+290,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mtvec_read));
            tracep->chgBit(oldp+291,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mepc_read));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
            tracep->chgBit(oldp+292,(vlSelf->ysyx_22041461_CPU__DOT__CD_MEM_valid));
            tracep->chgBit(oldp+293,(vlSelf->ysyx_22041461_CPU__DOT__CD_WBreg_valid));
            tracep->chgBit(oldp+294,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
            tracep->chgQData(oldp+295,(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc),64);
            tracep->chgCData(oldp+297,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+298,((7U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc))),3);
            tracep->chgQData(oldp+299,((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                        >> 9U)),55);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
            tracep->chgBit(oldp+301,(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable));
            tracep->chgBit(oldp+302,(vlSelf->ysyx_22041461_CPU__DOT__MEM_ok));
            tracep->chgQData(oldp+303,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data),64);
            tracep->chgQData(oldp+305,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
            tracep->chgWData(oldp+307,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN),128);
            __Vtemp294[0U] = (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[0U]);
            __Vtemp294[1U] = (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[1U]);
            __Vtemp294[2U] = (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[2U]);
            __Vtemp294[3U] = (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[3U]);
            tracep->chgWData(oldp+311,(__Vtemp294),128);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
            tracep->chgQData(oldp+315,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__AXI_rdata),64);
            tracep->chgWData(oldp+317,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in),128);
        }
        tracep->chgBit(oldp+321,(vlSelf->clk));
        tracep->chgBit(oldp+322,(vlSelf->rst));
        tracep->chgQData(oldp+323,(vlSelf->pc),64);
        tracep->chgIData(oldp+325,(vlSelf->inst),32);
        tracep->chgBit(oldp+326,(vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable));
        tracep->chgBit(oldp+327,(vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable));
        tracep->chgBit(oldp+328,(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid));
        tracep->chgBit(oldp+329,(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable));
        tracep->chgBit(oldp+330,(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_valid));
        tracep->chgBit(oldp+331,(vlSelf->ysyx_22041461_CPU__DOT__IF_valid_out));
        tracep->chgIData(oldp+332,(((IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__num)
                                     ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)
                                         ? ((0U == 
                                             (7U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc)))
                                             ? vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[0U]
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc)))
                                                 ? 
                                                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[1U]
                                                 : 0x100073U))
                                         : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2)
                                             ? ((0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc)))
                                                 ? 
                                                vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[2U]
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc)))
                                                  ? 
                                                 vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[3U]
                                                  : 0x100073U))
                                             : 0U))
                                     : 0U)),32);
        tracep->chgCData(oldp+333,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out),5);
        tracep->chgBit(oldp+334,(((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid)
                                   ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid_out)
                                   : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out))));
        tracep->chgQData(oldp+335,(((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out)
                                     ? ((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                         ? 0ULL : (
                                                   (4U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                                      ? vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data
                                                      : (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data)))
                                                      : (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data))))
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data 
                                                                                >> 0xfU)))))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data 
                                                                                >> 7U)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data)))))
                                                      : 0ULL))))
                                     : 0ULL)),64);
        tracep->chgQData(oldp+337,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
                                   [vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out]),64);
        tracep->chgQData(oldp+339,(vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data),64);
        tracep->chgBit(oldp+341,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1));
        tracep->chgBit(oldp+342,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2));
        tracep->chgBit(oldp+343,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__num));
        tracep->chgBit(oldp+344,((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid)) 
                                        | (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                                              & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2))))))));
        tracep->chgIData(oldp+345,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__k),32);
        tracep->chgBit(oldp+346,((1U & (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid)) 
                                           | (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                                                 & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2)))))))));
        tracep->chgBit(oldp+347,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid_out));
        tracep->chgBit(oldp+348,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1));
        tracep->chgBit(oldp+349,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2));
        VL_EXTEND_WQ(128,64, __Vtemp295, vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data);
        VL_EXTEND_WQ(128,64, __Vtemp300, vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata);
        VL_EXTEND_WQ(128,64, __Vtemp304, vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata);
        if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid) 
             & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__inmemory))) {
            __Vtemp313[0U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                               ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                                   ? __Vtemp295[0U]
                                   : 0U) : ((1U & (
                                                   (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                                   & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))
                                             ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                             >> 3U)))]
                                                 ? 
                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                              >> 3U)))]
                                                  ? 
                                                 __Vtemp300[0U]
                                                  : 0U)
                                                 : 
                                                __Vtemp304[0U])
                                             : 0U));
            __Vtemp313[1U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                               ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                                   ? __Vtemp295[1U]
                                   : 0U) : ((1U & (
                                                   (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                                   & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))
                                             ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                                [(0x3fU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                             >> 3U)))]
                                                 ? 
                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                                 [(0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                              >> 3U)))]
                                                  ? 
                                                 __Vtemp300[1U]
                                                  : 0U)
                                                 : 
                                                __Vtemp304[1U])
                                             : 0U));
            __Vtemp313[2U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                               ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                                   ? __Vtemp295[2U]
                                   : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                       ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data)
                                       : 0U)) : ((1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                                     & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))
                                                  ? 
                                                 (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                              >> 3U)))]
                                                   ? 
                                                  (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                               >> 3U)))]
                                                    ? 
                                                   __Vtemp300[2U]
                                                    : (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata))
                                                   : 
                                                  __Vtemp304[2U])
                                                  : 0U));
            __Vtemp313[3U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                               ? ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                                   ? __Vtemp295[3U]
                                   : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                       ? (IData)((vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data 
                                                  >> 0x20U))
                                       : 0U)) : ((1U 
                                                  & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                                     & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))
                                                  ? 
                                                 (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                                  [
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                              >> 3U)))]
                                                   ? 
                                                  (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                                   [
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                               >> 3U)))]
                                                    ? 
                                                   __Vtemp300[3U]
                                                    : (IData)(
                                                              (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__AXI_rdata 
                                                               >> 0x20U)))
                                                   : 
                                                  __Vtemp304[3U])
                                                  : 0U));
        } else {
            __Vtemp313[0U] = 0U;
            __Vtemp313[1U] = 0U;
            __Vtemp313[2U] = 0U;
            __Vtemp313[3U] = 0U;
        }
        tracep->chgWData(oldp+350,(__Vtemp313),128);
        tracep->chgBit(oldp+354,((1U & ((~ ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid) 
                                            & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__inmemory))) 
                                        | ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                                            ? ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                               & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)))
                                            : (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                                  & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)))))))));
        if (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen) {
            __Vtemp353[0U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                               ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                   ? 0xffffff00U : 
                                  ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                    ? 0xffff0000U : 
                                   ((0xfU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                     ? 0U : ((0xffU 
                                              == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                              ? 0U : 0xffffffffU))))
                               : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                   ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                       ? 0xffffffffU
                                       : ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                           ? 0xffffffffU
                                           : ((0xfU 
                                               == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                               ? 0xffffffffU
                                               : 0xffffffffU)))
                                   : 0xffffffffU));
            __Vtemp353[1U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                               ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                   ? 0xffffffffU : 
                                  ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                    ? 0xffffffffU : 
                                   ((0xfU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                     ? 0xffffffffU : 
                                    ((0xffU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                      ? 0U : 0xffffffffU))))
                               : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                   ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                       ? 0xffffffffU
                                       : ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                           ? 0xffffffffU
                                           : ((0xfU 
                                               == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                               ? 0xffffffffU
                                               : 0xffffffffU)))
                                   : 0xffffffffU));
            __Vtemp353[2U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                               ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                   ? 0xffffffffU : 
                                  ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                    ? 0xffffffffU : 
                                   ((0xfU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                     ? 0xffffffffU : 0xffffffffU)))
                               : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                   ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                       ? 0xffffff00U
                                       : ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                           ? 0xffff0000U
                                           : ((0xfU 
                                               == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                               ? 0U
                                               : ((0xffU 
                                                   == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                                   ? 0U
                                                   : 0xffffffffU))))
                                   : 0xffffffffU));
            __Vtemp353[3U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                               ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                   ? 0xffffffffU : 
                                  ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                    ? 0xffffffffU : 
                                   ((0xfU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                     ? 0xffffffffU : 0xffffffffU)))
                               : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                   ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                       ? 0xffffffffU
                                       : ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                           ? 0xffffffffU
                                           : ((0xfU 
                                               == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                               ? 0xffffffffU
                                               : ((0xffU 
                                                   == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                                   ? 0U
                                                   : 0xffffffffU))))
                                   : 0xffffffffU));
        } else {
            __Vtemp353[0U] = ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                     & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))
                               ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                  [(0x3fU & (IData)(
                                                    (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                     >> 3U)))]
                                   ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                      [(0x3fU & (IData)(
                                                        (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]
                                       ? 0U : 0xffffffffU)
                                   : 0U) : 0xffffffffU);
            __Vtemp353[1U] = ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                     & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))
                               ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                  [(0x3fU & (IData)(
                                                    (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                     >> 3U)))]
                                   ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                      [(0x3fU & (IData)(
                                                        (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]
                                       ? 0U : 0xffffffffU)
                                   : 0U) : 0xffffffffU);
            __Vtemp353[2U] = ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                     & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))
                               ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                  [(0x3fU & (IData)(
                                                    (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                     >> 3U)))]
                                   ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                      [(0x3fU & (IData)(
                                                        (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]
                                       ? 0xffffffffU
                                       : 0U) : 0xffffffffU)
                               : 0xffffffffU);
            __Vtemp353[3U] = ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                     & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))
                               ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                  [(0x3fU & (IData)(
                                                    (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                     >> 3U)))]
                                   ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                      [(0x3fU & (IData)(
                                                        (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]
                                       ? 0xffffffffU
                                       : 0U) : 0xffffffffU)
                               : 0xffffffffU);
        }
        if (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid) 
             & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__inmemory))) {
            __Vtemp356[0U] = __Vtemp353[0U];
            __Vtemp356[1U] = __Vtemp353[1U];
            __Vtemp356[2U] = __Vtemp353[2U];
            __Vtemp356[3U] = __Vtemp353[3U];
        } else {
            __Vtemp356[0U] = 0xffffffffU;
            __Vtemp356[1U] = 0xffffffffU;
            __Vtemp356[2U] = 0xffffffffU;
            __Vtemp356[3U] = 0xffffffffU;
        }
        tracep->chgWData(oldp+355,(__Vtemp356),128);
        tracep->chgIData(oldp+359,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__k),32);
        tracep->chgBit(oldp+360,((1U & (~ ((~ ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid) 
                                               & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__inmemory))) 
                                           | ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen)
                                               ? ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                                  & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)))
                                               : (~ 
                                                  ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                                   & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))))))));
        if (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_wen) {
            __Vtemp396[0U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                               ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                   ? 0xffffff00U : 
                                  ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                    ? 0xffff0000U : 
                                   ((0xfU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                     ? 0U : ((0xffU 
                                              == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                              ? 0U : 0xffffffffU))))
                               : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                   ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                       ? 0xffffffffU
                                       : ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                           ? 0xffffffffU
                                           : ((0xfU 
                                               == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                               ? 0xffffffffU
                                               : 0xffffffffU)))
                                   : 0xffffffffU));
            __Vtemp396[1U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                               ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                   ? 0xffffffffU : 
                                  ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                    ? 0xffffffffU : 
                                   ((0xfU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                     ? 0xffffffffU : 
                                    ((0xffU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                      ? 0U : 0xffffffffU))))
                               : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                   ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                       ? 0xffffffffU
                                       : ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                           ? 0xffffffffU
                                           : ((0xfU 
                                               == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                               ? 0xffffffffU
                                               : 0xffffffffU)))
                                   : 0xffffffffU));
            __Vtemp396[2U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                               ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                   ? 0xffffffffU : 
                                  ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                    ? 0xffffffffU : 
                                   ((0xfU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                     ? 0xffffffffU : 0xffffffffU)))
                               : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                   ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                       ? 0xffffff00U
                                       : ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                           ? 0xffff0000U
                                           : ((0xfU 
                                               == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                               ? 0U
                                               : ((0xffU 
                                                   == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                                   ? 0U
                                                   : 0xffffffffU))))
                                   : 0xffffffffU));
            __Vtemp396[3U] = ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)
                               ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                   ? 0xffffffffU : 
                                  ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                    ? 0xffffffffU : 
                                   ((0xfU == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                     ? 0xffffffffU : 0xffffffffU)))
                               : ((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2)
                                   ? ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                       ? 0xffffffffU
                                       : ((3U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                           ? 0xffffffffU
                                           : ((0xfU 
                                               == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                               ? 0xffffffffU
                                               : ((0xffU 
                                                   == (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask))
                                                   ? 0U
                                                   : 0xffffffffU))))
                                   : 0xffffffffU));
        } else {
            __Vtemp396[0U] = ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                     & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))
                               ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                  [(0x3fU & (IData)(
                                                    (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                     >> 3U)))]
                                   ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                      [(0x3fU & (IData)(
                                                        (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]
                                       ? 0U : 0xffffffffU)
                                   : 0U) : 0xffffffffU);
            __Vtemp396[1U] = ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                     & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))
                               ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                  [(0x3fU & (IData)(
                                                    (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                     >> 3U)))]
                                   ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                      [(0x3fU & (IData)(
                                                        (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]
                                       ? 0U : 0xffffffffU)
                                   : 0U) : 0xffffffffU);
            __Vtemp396[2U] = ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                     & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))
                               ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                  [(0x3fU & (IData)(
                                                    (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                     >> 3U)))]
                                   ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                      [(0x3fU & (IData)(
                                                        (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]
                                       ? 0xffffffffU
                                       : 0U) : 0xffffffffU)
                               : 0xffffffffU);
            __Vtemp396[3U] = ((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit1)) 
                                     & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__hit2))))
                               ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V1
                                  [(0x3fU & (IData)(
                                                    (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                     >> 3U)))]
                                   ? (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__V2
                                      [(0x3fU & (IData)(
                                                        (vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out 
                                                         >> 3U)))]
                                       ? 0xffffffffU
                                       : 0U) : 0xffffffffU)
                               : 0xffffffffU);
        }
        __Vtemp400[0U] = (~ (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid) 
                              & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__inmemory))
                              ? __Vtemp396[0U] : 0xffffffffU));
        __Vtemp400[1U] = (~ (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid) 
                              & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__inmemory))
                              ? __Vtemp396[1U] : 0xffffffffU));
        __Vtemp400[2U] = (~ (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid) 
                              & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__inmemory))
                              ? __Vtemp396[2U] : 0xffffffffU));
        __Vtemp400[3U] = (~ (((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE_valid) 
                              & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__DCACHE__DOT__inmemory))
                              ? __Vtemp396[3U] : 0xffffffffU));
        tracep->chgWData(oldp+361,(__Vtemp400),128);
    }
}

void Vysyx_22041461_CPU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22041461_CPU___024root* const __restrict vlSelf = static_cast<Vysyx_22041461_CPU___024root*>(voidSelf);
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    }
}
