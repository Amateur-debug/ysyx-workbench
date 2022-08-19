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
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22041461_CPU__DOT__imm),64);
            tracep->chgQData(oldp+7,(vlSelf->ysyx_22041461_CPU__DOT__rs1_data),64);
            tracep->chgQData(oldp+9,(vlSelf->ysyx_22041461_CPU__DOT__rs2_data),64);
            tracep->chgQData(oldp+11,(vlSelf->ysyx_22041461_CPU__DOT__dest),64);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22041461_CPU__DOT__mem),64);
            tracep->chgCData(oldp+15,(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU),3);
            tracep->chgCData(oldp+16,(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU),3);
            tracep->chgCData(oldp+17,(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS),3);
            tracep->chgCData(oldp+18,(vlSelf->ysyx_22041461_CPU__DOT__sel_PC),2);
            tracep->chgCData(oldp+19,(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM),2);
            tracep->chgCData(oldp+20,(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr),3);
            tracep->chgCData(oldp+21,(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data),3);
            tracep->chgQData(oldp+22,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0]),64);
            tracep->chgQData(oldp+24,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[1]),64);
            tracep->chgQData(oldp+26,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[2]),64);
            tracep->chgQData(oldp+28,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[3]),64);
            tracep->chgQData(oldp+30,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[4]),64);
            tracep->chgQData(oldp+32,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[5]),64);
            tracep->chgQData(oldp+34,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[6]),64);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[7]),64);
            tracep->chgQData(oldp+38,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[8]),64);
            tracep->chgQData(oldp+40,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[9]),64);
            tracep->chgQData(oldp+42,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[10]),64);
            tracep->chgQData(oldp+44,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[11]),64);
            tracep->chgQData(oldp+46,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[12]),64);
            tracep->chgQData(oldp+48,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[13]),64);
            tracep->chgQData(oldp+50,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[14]),64);
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[15]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[16]),64);
            tracep->chgQData(oldp+56,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[17]),64);
            tracep->chgQData(oldp+58,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[18]),64);
            tracep->chgQData(oldp+60,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[19]),64);
            tracep->chgQData(oldp+62,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[20]),64);
            tracep->chgQData(oldp+64,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[21]),64);
            tracep->chgQData(oldp+66,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[22]),64);
            tracep->chgQData(oldp+68,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[23]),64);
            tracep->chgQData(oldp+70,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[24]),64);
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[25]),64);
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[26]),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[27]),64);
            tracep->chgQData(oldp+78,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[28]),64);
            tracep->chgQData(oldp+80,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[29]),64);
            tracep->chgQData(oldp+82,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[30]),64);
            tracep->chgQData(oldp+84,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[31]),64);
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0]),64);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1]),64);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2]),64);
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3]),64);
            tracep->chgQData(oldp+94,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4]),64);
            tracep->chgQData(oldp+96,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5]),64);
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6]),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7]),64);
            tracep->chgQData(oldp+102,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8]),64);
            tracep->chgQData(oldp+104,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9]),64);
            tracep->chgQData(oldp+106,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[10]),64);
            tracep->chgQData(oldp+108,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[11]),64);
            tracep->chgQData(oldp+110,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[12]),64);
            tracep->chgQData(oldp+112,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[13]),64);
            tracep->chgQData(oldp+114,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[14]),64);
            tracep->chgQData(oldp+116,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[15]),64);
            tracep->chgQData(oldp+118,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[16]),64);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[17]),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[18]),64);
            tracep->chgQData(oldp+124,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[19]),64);
            tracep->chgQData(oldp+126,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[20]),64);
            tracep->chgQData(oldp+128,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[21]),64);
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[22]),64);
            tracep->chgQData(oldp+132,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[23]),64);
            tracep->chgQData(oldp+134,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[24]),64);
            tracep->chgQData(oldp+136,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[25]),64);
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[26]),64);
            tracep->chgQData(oldp+140,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[27]),64);
            tracep->chgQData(oldp+142,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[28]),64);
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[29]),64);
            tracep->chgQData(oldp+146,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[30]),64);
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[31]),64);
            tracep->chgIData(oldp+150,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__j),32);
            tracep->chgQData(oldp+151,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1),64);
            tracep->chgQData(oldp+153,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2),64);
            tracep->chgQData(oldp+155,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum),64);
            tracep->chgQData(oldp+157,(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)),64);
            tracep->chgQData(oldp+159,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rinst),64);
            tracep->chgQData(oldp+161,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr),64);
            tracep->chgCData(oldp+163,(((1U & (IData)(
                                                      (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                                                       >> 2U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                                                           >> 1U)))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                                 ? 0x80U
                                                 : 0xc0U)
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                                 ? 0xe0U
                                                 : 0xf0U))
                                         : ((1U & (IData)(
                                                          (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                                                           >> 1U)))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                                 ? 0xf8U
                                                 : 0xfcU)
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                                 ? 0xfeU
                                                 : 0xffU)))),8);
        }
        tracep->chgBit(oldp+164,(vlSelf->clk));
        tracep->chgBit(oldp+165,(vlSelf->rst));
        tracep->chgQData(oldp+166,(vlSelf->pc),64);
        tracep->chgBit(oldp+168,(vlSelf->flag));
        tracep->chgQData(oldp+169,((4ULL + vlSelf->pc)),64);
        tracep->chgQData(oldp+171,(((0U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
                                     ? (4ULL + vlSelf->pc)
                                     : ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
                                         ? vlSelf->ysyx_22041461_CPU__DOT__dest
                                         : vlSelf->pc))),64);
        tracep->chgQData(oldp+173,(((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                     ? ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                         ? 0ULL : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                                    ? 0ULL
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->pc)))
                                     : ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                         ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                             ? vlSelf->ysyx_22041461_CPU__DOT__imm
                                             : vlSelf->ysyx_22041461_CPU__DOT__rs2_data)
                                         : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                             ? vlSelf->ysyx_22041461_CPU__DOT__rs1_data
                                             : vlSelf->ysyx_22041461_CPU__DOT__dest)))),64);
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
    }
}
