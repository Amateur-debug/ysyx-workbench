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
    VlWide<4>/*127:0*/ __Vtemp75;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out),5);
            tracep->chgCData(oldp+1,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out),4);
            tracep->chgSData(oldp+2,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask),16);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+3,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_valid_out));
            tracep->chgQData(oldp+4,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_EXE_out),64);
            tracep->chgQData(oldp+6,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_MEM_out),64);
            tracep->chgCData(oldp+8,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out),5);
            tracep->chgCData(oldp+9,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rs1_out),5);
            tracep->chgSData(oldp+10,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out),12);
            tracep->chgQData(oldp+11,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_imm_out),64);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_zimm_out),64);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_pc_out),64);
            tracep->chgCData(oldp+17,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out),4);
            tracep->chgBit(oldp+18,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write));
            tracep->chgBit(oldp+19,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write));
            tracep->chgBit(oldp+20,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec),64);
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0]),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[1]),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[2]),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[3]),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[4]),64);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[5]),64);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[6]),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[7]),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[8]),64);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[9]),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[10]),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[11]),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[12]),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[13]),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[14]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[15]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[16]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[17]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[18]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[19]),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[20]),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[21]),64);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[22]),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[23]),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[24]),64);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[25]),64);
            tracep->chgQData(oldp+77,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[26]),64);
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[27]),64);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[28]),64);
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[29]),64);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[30]),64);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[31]),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus),64);
            tracep->chgIData(oldp+93,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__j),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgWData(oldp+94,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out),128);
            tracep->chgQData(oldp+98,((((QData)((IData)(
                                                        vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[0U])))),64);
            tracep->chgQData(oldp+100,((((QData)((IData)(
                                                         vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_out[2U])))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+102,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out));
            tracep->chgCData(oldp+103,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out),5);
            tracep->chgCData(oldp+104,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out),5);
            tracep->chgCData(oldp+105,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out),5);
            tracep->chgSData(oldp+106,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out),12);
            tracep->chgQData(oldp+107,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_imm_out),64);
            tracep->chgQData(oldp+109,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_zimm_out),64);
            tracep->chgQData(oldp+111,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_pc_out),64);
            tracep->chgCData(oldp+113,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out),5);
            tracep->chgCData(oldp+114,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out),3);
            tracep->chgCData(oldp+115,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_MEM_ctrl_out),4);
            tracep->chgCData(oldp+116,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out),4);
            tracep->chgBit(oldp+117,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write));
            tracep->chgBit(oldp+118,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write));
            tracep->chgBit(oldp+119,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_ecall_write));
            tracep->chgBit(oldp+120,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs1_read));
            tracep->chgBit(oldp+121,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs2_read));
            tracep->chgBit(oldp+122,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_read));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+123,(vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out));
            tracep->chgIData(oldp+124,(vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out),32);
            tracep->chgQData(oldp+125,(vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out),64);
            tracep->chgCData(oldp+127,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+128,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+129,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                 >> 0x14U))),5);
            tracep->chgSData(oldp+130,((vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+131,((QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                           >> 0xfU))))),64);
            tracep->chgCData(oldp+133,((0x7fU & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)),7);
            tracep->chgCData(oldp+134,((7U & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+135,((vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                        >> 0x1aU)),6);
            tracep->chgCData(oldp+136,((vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+137,((0x3fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                 >> 0x14U))),6);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
            tracep->chgBit(oldp+138,(vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r1));
            tracep->chgBit(oldp+139,(vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2));
            tracep->chgBit(oldp+140,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r1));
            tracep->chgBit(oldp+141,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__rst_r2));
            tracep->chgBit(oldp+142,(vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r1));
            tracep->chgBit(oldp+143,(vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2));
            tracep->chgBit(oldp+144,(vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r1));
            tracep->chgBit(oldp+145,(vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2));
            tracep->chgBit(oldp+146,(vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r1));
            tracep->chgBit(oldp+147,(vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2));
            tracep->chgBit(oldp+148,(vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r1));
            tracep->chgBit(oldp+149,(vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2));
            tracep->chgBit(oldp+150,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r1));
            tracep->chgBit(oldp+151,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r2));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+152,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out));
            tracep->chgQData(oldp+153,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out),64);
            tracep->chgCData(oldp+155,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out),5);
            tracep->chgCData(oldp+156,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs1_out),5);
            tracep->chgSData(oldp+157,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out),12);
            tracep->chgQData(oldp+158,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_imm_out),64);
            tracep->chgQData(oldp+160,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_zimm_out),64);
            tracep->chgQData(oldp+162,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_pc_out),64);
            tracep->chgCData(oldp+164,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out),4);
            tracep->chgQData(oldp+165,(vlSelf->ysyx_22041461_CPU__DOT__MEM_out),64);
            tracep->chgQData(oldp+167,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1),64);
            tracep->chgQData(oldp+169,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2),64);
            tracep->chgQData(oldp+171,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data),64);
            tracep->chgCData(oldp+173,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask1),8);
            tracep->chgCData(oldp+174,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask2),8);
            tracep->chgBit(oldp+175,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write));
            tracep->chgBit(oldp+176,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write));
            tracep->chgBit(oldp+177,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write));
            tracep->chgBit(oldp+178,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
            tracep->chgQData(oldp+179,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0]),64);
            tracep->chgQData(oldp+181,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[1]),64);
            tracep->chgQData(oldp+183,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[2]),64);
            tracep->chgQData(oldp+185,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[3]),64);
            tracep->chgQData(oldp+187,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[4]),64);
            tracep->chgQData(oldp+189,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[5]),64);
            tracep->chgQData(oldp+191,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[6]),64);
            tracep->chgQData(oldp+193,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[7]),64);
            tracep->chgQData(oldp+195,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[8]),64);
            tracep->chgQData(oldp+197,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[9]),64);
            tracep->chgQData(oldp+199,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[10]),64);
            tracep->chgQData(oldp+201,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[11]),64);
            tracep->chgQData(oldp+203,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[12]),64);
            tracep->chgQData(oldp+205,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[13]),64);
            tracep->chgQData(oldp+207,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[14]),64);
            tracep->chgQData(oldp+209,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[15]),64);
            tracep->chgQData(oldp+211,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[16]),64);
            tracep->chgQData(oldp+213,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[17]),64);
            tracep->chgQData(oldp+215,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[18]),64);
            tracep->chgQData(oldp+217,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[19]),64);
            tracep->chgQData(oldp+219,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[20]),64);
            tracep->chgQData(oldp+221,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[21]),64);
            tracep->chgQData(oldp+223,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[22]),64);
            tracep->chgQData(oldp+225,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[23]),64);
            tracep->chgQData(oldp+227,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[24]),64);
            tracep->chgQData(oldp+229,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[25]),64);
            tracep->chgQData(oldp+231,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[26]),64);
            tracep->chgQData(oldp+233,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[27]),64);
            tracep->chgQData(oldp+235,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[28]),64);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[29]),64);
            tracep->chgQData(oldp+239,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[30]),64);
            tracep->chgQData(oldp+241,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[31]),64);
            tracep->chgQData(oldp+243,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec_next),64);
            tracep->chgQData(oldp+245,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc_next),64);
            tracep->chgQData(oldp+247,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause_next),64);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus_next),64);
            tracep->chgIData(oldp+251,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data1),64);
            tracep->chgQData(oldp+256,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data2),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
            tracep->chgQData(oldp+258,(vlSelf->ysyx_22041461_CPU__DOT__EXE_out),64);
            tracep->chgQData(oldp+260,(vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_rs1_data),64);
            tracep->chgQData(oldp+262,(vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_csr_data),64);
            tracep->chgQData(oldp+264,(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1),64);
            tracep->chgQData(oldp+266,(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2),64);
            tracep->chgWData(oldp+268,(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle),128);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
            tracep->chgQData(oldp+272,(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc),64);
            tracep->chgCData(oldp+274,((0x3fU & (IData)(
                                                        (vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                                         >> 3U)))),6);
            tracep->chgCData(oldp+275,((7U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc))),3);
            tracep->chgQData(oldp+276,((vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc 
                                        >> 9U)),55);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
            tracep->chgBit(oldp+278,(vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid));
            tracep->chgBit(oldp+279,(vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_valid));
            tracep->chgQData(oldp+280,(vlSelf->ysyx_22041461_CPU__DOT__ID_imm),64);
            tracep->chgQData(oldp+282,(vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc),64);
            tracep->chgBit(oldp+284,(vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out));
            tracep->chgBit(oldp+285,(vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl));
            tracep->chgCData(oldp+286,(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl),3);
            tracep->chgCData(oldp+287,(vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl),5);
            tracep->chgCData(oldp+288,(vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src),3);
            tracep->chgCData(oldp+289,(vlSelf->ysyx_22041461_CPU__DOT__ID_MEM_ctrl),4);
            tracep->chgCData(oldp+290,(vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl),4);
            tracep->chgQData(oldp+291,(vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs1_data),64);
            tracep->chgQData(oldp+293,(vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs2_data),64);
            tracep->chgBit(oldp+295,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs1_read));
            tracep->chgBit(oldp+296,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs2_read));
            tracep->chgBit(oldp+297,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mtvec_read));
            tracep->chgBit(oldp+298,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mepc_read));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
            tracep->chgBit(oldp+299,(vlSelf->ysyx_22041461_CPU__DOT__CD_MEM_valid));
            tracep->chgBit(oldp+300,(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_enable));
            tracep->chgBit(oldp+301,(vlSelf->ysyx_22041461_CPU__DOT__CD_WBreg_valid));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
            tracep->chgWData(oldp+302,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN),128);
            __Vtemp75[0U] = (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[0U]);
            __Vtemp75[1U] = (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[1U]);
            __Vtemp75[2U] = (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[2U]);
            __Vtemp75[3U] = (~ vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_BWEN[3U]);
            tracep->chgWData(oldp+306,(__Vtemp75),128);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
            tracep->chgQData(oldp+310,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__AXI_rdata),64);
            tracep->chgWData(oldp+312,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__SRAM_data_in),128);
        }
        tracep->chgBit(oldp+316,(vlSelf->clk));
        tracep->chgBit(oldp+317,(vlSelf->rst));
        tracep->chgQData(oldp+318,(vlSelf->pc),64);
        tracep->chgIData(oldp+320,(vlSelf->inst),32);
        tracep->chgBit(oldp+321,(vlSelf->ysyx_22041461_CPU__DOT__CD_IFreg_enable));
        tracep->chgBit(oldp+322,(vlSelf->ysyx_22041461_CPU__DOT__CD_IDreg_enable));
        tracep->chgBit(oldp+323,(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_valid));
        tracep->chgBit(oldp+324,(vlSelf->ysyx_22041461_CPU__DOT__CD_EXEreg_enable));
        tracep->chgBit(oldp+325,(vlSelf->ysyx_22041461_CPU__DOT__CD_MEMreg_valid));
        tracep->chgBit(oldp+326,(vlSelf->ysyx_22041461_CPU__DOT__IF_valid_out));
        tracep->chgIData(oldp+327,(vlSelf->ysyx_22041461_CPU__DOT__IF_inst),32);
        tracep->chgQData(oldp+328,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
                                   [vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out]),64);
        tracep->chgBit(oldp+330,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1));
        tracep->chgBit(oldp+331,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2));
        tracep->chgBit(oldp+332,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__num));
        tracep->chgBit(oldp+333,((1U & ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid)) 
                                        | (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                                              & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2))))))));
        tracep->chgIData(oldp+334,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__k),32);
        tracep->chgBit(oldp+335,((1U & (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid)) 
                                           | (~ ((~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit1)) 
                                                 & (~ (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__ICACHE__DOT__hit2)))))))));
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
