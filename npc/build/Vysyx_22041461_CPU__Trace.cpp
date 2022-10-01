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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+1,(vlSelf->ysyx_22041461_CPU__DOT__inst),32);
            tracep->chgCData(oldp+2,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__inst 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+3,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__inst 
                                               >> 0x14U))),5);
            tracep->chgCData(oldp+4,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__inst 
                                               >> 7U))),5);
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22041461_CPU__DOT__rs1_data),64);
            tracep->chgQData(oldp+7,(vlSelf->ysyx_22041461_CPU__DOT__rs2_data),64);
            tracep->chgQData(oldp+9,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc),64);
            tracep->chgQData(oldp+11,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mtvec),64);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0]),64);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[1]),64);
            tracep->chgQData(oldp+17,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[2]),64);
            tracep->chgQData(oldp+19,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[3]),64);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[4]),64);
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[5]),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[6]),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[7]),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[8]),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[9]),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[10]),64);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[11]),64);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[12]),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[13]),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[14]),64);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[15]),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[16]),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[17]),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[18]),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[19]),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[20]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[21]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[22]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[23]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[24]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[25]),64);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[26]),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[27]),64);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[28]),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[29]),64);
            tracep->chgQData(oldp+73,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[30]),64);
            tracep->chgQData(oldp+75,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[31]),64);
            tracep->chgIData(oldp+77,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__j),32);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src1),64);
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rinst),64);
            tracep->chgQData(oldp+82,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mcause),64);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mstatus),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22041461_CPU__DOT__imm),64);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22041461_CPU__DOT__dest),64);
            tracep->chgQData(oldp+90,(((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                        ? 0ULL : ((4U 
                                                   & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                                     ? (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data))))
                                                     : (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data)))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                                     ? (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data))
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data 
                                                                                >> 7U)))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data)))))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data 
                                                                                >> 0xfU)))))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data)))))
                                                     : 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                                     ? vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data
                                                     : 0ULL))))),64);
            tracep->chgCData(oldp+92,(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU),5);
            tracep->chgCData(oldp+93,(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU),3);
            tracep->chgCData(oldp+94,(vlSelf->ysyx_22041461_CPU__DOT__sel_CMP),2);
            tracep->chgBit(oldp+95,(vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP));
            tracep->chgCData(oldp+96,(vlSelf->ysyx_22041461_CPU__DOT__CMP_out),2);
            tracep->chgCData(oldp+97,(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS),4);
            tracep->chgCData(oldp+98,(vlSelf->ysyx_22041461_CPU__DOT__sel_PC),2);
            tracep->chgCData(oldp+99,(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM),4);
            tracep->chgCData(oldp+100,(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr),3);
            tracep->chgCData(oldp+101,(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data),3);
            tracep->chgCData(oldp+102,(vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS),2);
            tracep->chgQData(oldp+103,(vlSelf->ysyx_22041461_CPU__DOT__csr_data),64);
            tracep->chgQData(oldp+105,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0]),64);
            tracep->chgQData(oldp+107,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1]),64);
            tracep->chgQData(oldp+109,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2]),64);
            tracep->chgQData(oldp+111,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3]),64);
            tracep->chgQData(oldp+113,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4]),64);
            tracep->chgQData(oldp+115,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5]),64);
            tracep->chgQData(oldp+117,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6]),64);
            tracep->chgQData(oldp+119,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7]),64);
            tracep->chgQData(oldp+121,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8]),64);
            tracep->chgQData(oldp+123,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9]),64);
            tracep->chgQData(oldp+125,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[10]),64);
            tracep->chgQData(oldp+127,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[11]),64);
            tracep->chgQData(oldp+129,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[12]),64);
            tracep->chgQData(oldp+131,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[13]),64);
            tracep->chgQData(oldp+133,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[14]),64);
            tracep->chgQData(oldp+135,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[15]),64);
            tracep->chgQData(oldp+137,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[16]),64);
            tracep->chgQData(oldp+139,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[17]),64);
            tracep->chgQData(oldp+141,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[18]),64);
            tracep->chgQData(oldp+143,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[19]),64);
            tracep->chgQData(oldp+145,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[20]),64);
            tracep->chgQData(oldp+147,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[21]),64);
            tracep->chgQData(oldp+149,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[22]),64);
            tracep->chgQData(oldp+151,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[23]),64);
            tracep->chgQData(oldp+153,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[24]),64);
            tracep->chgQData(oldp+155,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[25]),64);
            tracep->chgQData(oldp+157,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[26]),64);
            tracep->chgQData(oldp+159,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[27]),64);
            tracep->chgQData(oldp+161,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[28]),64);
            tracep->chgQData(oldp+163,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[29]),64);
            tracep->chgQData(oldp+165,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[30]),64);
            tracep->chgQData(oldp+167,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[31]),64);
            tracep->chgQData(oldp+169,(vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src2),64);
            tracep->chgQData(oldp+171,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1),64);
            tracep->chgQData(oldp+173,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2),64);
            tracep->chgQData(oldp+175,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum),64);
            tracep->chgQData(oldp+177,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL_out),64);
            tracep->chgQData(oldp+179,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA_out),64);
            tracep->chgQData(oldp+181,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sub),64);
            tracep->chgQData(oldp+183,((vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
                                        & vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)),64);
            tracep->chgQData(oldp+185,((vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
                                        ^ vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)),64);
            tracep->chgQData(oldp+187,((vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
                                        | vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)),64);
            tracep->chgQData(oldp+189,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL_out),64);
            tracep->chgQData(oldp+191,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out),64);
            tracep->chgQData(oldp+193,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out),64);
            tracep->chgQData(oldp+195,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out),64);
            tracep->chgQData(oldp+197,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL__DOT__sll),64);
            tracep->chgIData(oldp+199,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA__DOT__sra),32);
            tracep->chgIData(oldp+200,((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1)),32);
            tracep->chgQData(oldp+201,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL__DOT__srl),64);
            tracep->chgWData(oldp+203,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul),128);
            tracep->chgQData(oldp+207,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div),64);
            tracep->chgQData(oldp+209,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem),64);
            tracep->chgQData(oldp+211,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1),64);
            tracep->chgQData(oldp+213,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2),64);
            tracep->chgQData(oldp+215,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data),64);
            tracep->chgQData(oldp+217,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr),64);
            tracep->chgQData(oldp+219,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data),64);
            tracep->chgQData(oldp+221,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data1),64);
            tracep->chgQData(oldp+223,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data2),64);
            tracep->chgSData(oldp+225,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask),16);
            tracep->chgCData(oldp+226,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask1),8);
            tracep->chgCData(oldp+227,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask2),8);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mtvec_next),64);
            tracep->chgQData(oldp+230,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc_next),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mcause_next),64);
            tracep->chgQData(oldp+234,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mstatus_next),64);
        }
        tracep->chgBit(oldp+236,(vlSelf->clk));
        tracep->chgBit(oldp+237,(vlSelf->rst));
        tracep->chgQData(oldp+238,(vlSelf->pc),64);
        tracep->chgBit(oldp+240,(vlSelf->flag));
        tracep->chgQData(oldp+241,((4ULL + vlSelf->pc)),64);
        tracep->chgQData(oldp+243,(((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
                                     ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
                                         ? vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mtvec
                                         : vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc)
                                     : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
                                         ? vlSelf->ysyx_22041461_CPU__DOT__dest
                                         : (4ULL + vlSelf->pc)))),64);
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
    }
}
