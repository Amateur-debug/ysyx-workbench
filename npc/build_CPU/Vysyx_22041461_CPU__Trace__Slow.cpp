// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22041461_CPU__Syms.h"


void Vysyx_22041461_CPU___024root__traceInitSub0(Vysyx_22041461_CPU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22041461_CPU___024root__traceInitTop(Vysyx_22041461_CPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22041461_CPU___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22041461_CPU___024root__traceInitSub0(Vysyx_22041461_CPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+138,"clk", false,-1, 0,0);
        tracep->declBus(c+139,"rst", false,-1, 0,0);
        tracep->declBus(c+140,"inst", false,-1, 31,0);
        tracep->declQuad(c+141,"pc", false,-1, 63,0);
        tracep->declBus(c+143,"flag", false,-1, 0,0);
        tracep->declBus(c+138,"ysyx_22041461_CPU clk", false,-1, 0,0);
        tracep->declBus(c+139,"ysyx_22041461_CPU rst", false,-1, 0,0);
        tracep->declBus(c+140,"ysyx_22041461_CPU inst", false,-1, 31,0);
        tracep->declQuad(c+141,"ysyx_22041461_CPU pc", false,-1, 63,0);
        tracep->declBus(c+143,"ysyx_22041461_CPU flag", false,-1, 0,0);
        tracep->declBus(c+144,"ysyx_22041461_CPU rs1", false,-1, 4,0);
        tracep->declBus(c+145,"ysyx_22041461_CPU rd", false,-1, 4,0);
        tracep->declQuad(c+67,"ysyx_22041461_CPU imm", false,-1, 63,0);
        tracep->declBus(c+69,"ysyx_22041461_CPU en_regw", false,-1, 0,0);
        tracep->declQuad(c+70,"ysyx_22041461_CPU data_rs1", false,-1, 63,0);
        tracep->declQuad(c+72,"ysyx_22041461_CPU data_write", false,-1, 63,0);
        tracep->declBus(c+140,"ysyx_22041461_CPU IDU inst", false,-1, 31,0);
        tracep->declBus(c+144,"ysyx_22041461_CPU IDU rs1", false,-1, 4,0);
        tracep->declBus(c+145,"ysyx_22041461_CPU IDU rd", false,-1, 4,0);
        tracep->declQuad(c+67,"ysyx_22041461_CPU IDU imm", false,-1, 63,0);
        tracep->declBus(c+69,"ysyx_22041461_CPU IDU en_regw", false,-1, 0,0);
        tracep->declBus(c+146,"ysyx_22041461_CPU IDU funct3", false,-1, 2,0);
        tracep->declBus(c+147,"ysyx_22041461_CPU IDU opcode", false,-1, 6,0);
        tracep->declBus(c+138,"ysyx_22041461_CPU PC clk", false,-1, 0,0);
        tracep->declBus(c+139,"ysyx_22041461_CPU PC rst", false,-1, 0,0);
        tracep->declQuad(c+141,"ysyx_22041461_CPU PC pc", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_22041461_CPU ADDER in1", false,-1, 63,0);
        tracep->declQuad(c+67,"ysyx_22041461_CPU ADDER in2", false,-1, 63,0);
        tracep->declQuad(c+72,"ysyx_22041461_CPU ADDER sum", false,-1, 63,0);
        tracep->declBus(c+143,"ysyx_22041461_CPU ADDER flag", false,-1, 0,0);
        tracep->declBus(c+138,"ysyx_22041461_CPU REGS clk", false,-1, 0,0);
        tracep->declBus(c+139,"ysyx_22041461_CPU REGS rst", false,-1, 0,0);
        tracep->declBus(c+144,"ysyx_22041461_CPU REGS rs1", false,-1, 4,0);
        tracep->declBus(c+145,"ysyx_22041461_CPU REGS rd", false,-1, 4,0);
        tracep->declBus(c+69,"ysyx_22041461_CPU REGS en_regw", false,-1, 0,0);
        tracep->declQuad(c+72,"ysyx_22041461_CPU REGS data_write", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_22041461_CPU REGS data_rs1", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+2+i*2,"ysyx_22041461_CPU REGS x", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+74+i*2,"ysyx_22041461_CPU REGS d", true,(i+0), 63,0);}}
        tracep->declBus(c+1,"ysyx_22041461_CPU REGS i", false,-1, 31,0);
        tracep->declBus(c+66,"ysyx_22041461_CPU REGS j", false,-1, 31,0);
    }
}

void Vysyx_22041461_CPU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22041461_CPU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22041461_CPU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22041461_CPU___024root__traceRegister(Vysyx_22041461_CPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22041461_CPU___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22041461_CPU___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22041461_CPU___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22041461_CPU___024root__traceFullSub0(Vysyx_22041461_CPU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22041461_CPU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22041461_CPU___024root* const __restrict vlSelf = static_cast<Vysyx_22041461_CPU___024root*>(voidSelf);
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22041461_CPU___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22041461_CPU___024root__traceFullSub0(Vysyx_22041461_CPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22041461_CPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__i),32);
        tracep->fullQData(oldp+2,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0]),64);
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[1]),64);
        tracep->fullQData(oldp+6,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[2]),64);
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[3]),64);
        tracep->fullQData(oldp+10,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[4]),64);
        tracep->fullQData(oldp+12,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[5]),64);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[6]),64);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[7]),64);
        tracep->fullQData(oldp+18,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[8]),64);
        tracep->fullQData(oldp+20,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[9]),64);
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[10]),64);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[11]),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[12]),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[13]),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[14]),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[15]),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[16]),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[17]),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[18]),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[19]),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[20]),64);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[21]),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[22]),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[23]),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[24]),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[25]),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[26]),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[27]),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[28]),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[29]),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[30]),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[31]),64);
        tracep->fullIData(oldp+66,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__j),32);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22041461_CPU__DOT__imm),64);
        tracep->fullBit(oldp+69,(vlSelf->ysyx_22041461_CPU__DOT__en_regw));
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22041461_CPU__DOT__data_rs1),64);
        tracep->fullQData(oldp+72,((vlSelf->ysyx_22041461_CPU__DOT__data_rs1 
                                    + vlSelf->ysyx_22041461_CPU__DOT__imm)),64);
        tracep->fullQData(oldp+74,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0]),64);
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1]),64);
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2]),64);
        tracep->fullQData(oldp+80,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3]),64);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4]),64);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5]),64);
        tracep->fullQData(oldp+86,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6]),64);
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7]),64);
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8]),64);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9]),64);
        tracep->fullQData(oldp+94,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[10]),64);
        tracep->fullQData(oldp+96,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[11]),64);
        tracep->fullQData(oldp+98,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[12]),64);
        tracep->fullQData(oldp+100,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[13]),64);
        tracep->fullQData(oldp+102,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[14]),64);
        tracep->fullQData(oldp+104,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[15]),64);
        tracep->fullQData(oldp+106,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[16]),64);
        tracep->fullQData(oldp+108,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[17]),64);
        tracep->fullQData(oldp+110,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[18]),64);
        tracep->fullQData(oldp+112,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[19]),64);
        tracep->fullQData(oldp+114,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[20]),64);
        tracep->fullQData(oldp+116,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[21]),64);
        tracep->fullQData(oldp+118,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[22]),64);
        tracep->fullQData(oldp+120,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[23]),64);
        tracep->fullQData(oldp+122,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[24]),64);
        tracep->fullQData(oldp+124,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[25]),64);
        tracep->fullQData(oldp+126,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[26]),64);
        tracep->fullQData(oldp+128,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[27]),64);
        tracep->fullQData(oldp+130,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[28]),64);
        tracep->fullQData(oldp+132,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[29]),64);
        tracep->fullQData(oldp+134,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[30]),64);
        tracep->fullQData(oldp+136,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[31]),64);
        tracep->fullBit(oldp+138,(vlSelf->clk));
        tracep->fullBit(oldp+139,(vlSelf->rst));
        tracep->fullIData(oldp+140,(vlSelf->inst),32);
        tracep->fullQData(oldp+141,(vlSelf->pc),64);
        tracep->fullBit(oldp+143,(vlSelf->flag));
        tracep->fullCData(oldp+144,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+145,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+146,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+147,((0x7fU & vlSelf->inst)),7);
    }
}
