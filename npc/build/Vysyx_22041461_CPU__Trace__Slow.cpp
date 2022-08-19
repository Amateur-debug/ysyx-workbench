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
        tracep->declBus(c+165,"clk", false,-1, 0,0);
        tracep->declBus(c+166,"rst", false,-1, 0,0);
        tracep->declQuad(c+167,"pc", false,-1, 63,0);
        tracep->declBus(c+169,"flag", false,-1, 0,0);
        tracep->declBus(c+165,"ysyx_22041461_CPU clk", false,-1, 0,0);
        tracep->declBus(c+166,"ysyx_22041461_CPU rst", false,-1, 0,0);
        tracep->declQuad(c+167,"ysyx_22041461_CPU pc", false,-1, 63,0);
        tracep->declBus(c+169,"ysyx_22041461_CPU flag", false,-1, 0,0);
        tracep->declBus(c+2,"ysyx_22041461_CPU inst", false,-1, 31,0);
        tracep->declBus(c+3,"ysyx_22041461_CPU rs1", false,-1, 4,0);
        tracep->declBus(c+4,"ysyx_22041461_CPU rs2", false,-1, 4,0);
        tracep->declBus(c+5,"ysyx_22041461_CPU rd", false,-1, 4,0);
        tracep->declQuad(c+6,"ysyx_22041461_CPU imm", false,-1, 63,0);
        tracep->declQuad(c+170,"ysyx_22041461_CPU snpc", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22041461_CPU rs1_data", false,-1, 63,0);
        tracep->declQuad(c+10,"ysyx_22041461_CPU rs2_data", false,-1, 63,0);
        tracep->declQuad(c+12,"ysyx_22041461_CPU dest", false,-1, 63,0);
        tracep->declQuad(c+14,"ysyx_22041461_CPU mem", false,-1, 63,0);
        tracep->declBus(c+16,"ysyx_22041461_CPU ctrl_ALU", false,-1, 2,0);
        tracep->declBus(c+17,"ysyx_22041461_CPU sel_ALU", false,-1, 2,0);
        tracep->declBus(c+18,"ysyx_22041461_CPU sel_REGS", false,-1, 2,0);
        tracep->declBus(c+19,"ysyx_22041461_CPU sel_PC", false,-1, 1,0);
        tracep->declBus(c+20,"ysyx_22041461_CPU ctrl_MEM", false,-1, 1,0);
        tracep->declBus(c+21,"ysyx_22041461_CPU sel_MEM_addr", false,-1, 2,0);
        tracep->declBus(c+22,"ysyx_22041461_CPU sel_MEM_data", false,-1, 2,0);
        tracep->declBus(c+2,"ysyx_22041461_CPU CU inst", false,-1, 31,0);
        tracep->declBus(c+3,"ysyx_22041461_CPU CU rs1", false,-1, 4,0);
        tracep->declBus(c+4,"ysyx_22041461_CPU CU rs2", false,-1, 4,0);
        tracep->declBus(c+5,"ysyx_22041461_CPU CU rd", false,-1, 4,0);
        tracep->declQuad(c+6,"ysyx_22041461_CPU CU imm", false,-1, 63,0);
        tracep->declBus(c+16,"ysyx_22041461_CPU CU ctrl_ALU", false,-1, 2,0);
        tracep->declBus(c+17,"ysyx_22041461_CPU CU sel_ALU", false,-1, 2,0);
        tracep->declBus(c+18,"ysyx_22041461_CPU CU sel_REGS", false,-1, 2,0);
        tracep->declBus(c+19,"ysyx_22041461_CPU CU sel_PC", false,-1, 1,0);
        tracep->declBus(c+20,"ysyx_22041461_CPU CU ctrl_MEM", false,-1, 1,0);
        tracep->declBus(c+21,"ysyx_22041461_CPU CU sel_MEM_addr", false,-1, 2,0);
        tracep->declBus(c+22,"ysyx_22041461_CPU CU sel_MEM_data", false,-1, 2,0);
        tracep->declBus(c+165,"ysyx_22041461_CPU PC clk", false,-1, 0,0);
        tracep->declBus(c+166,"ysyx_22041461_CPU PC rst", false,-1, 0,0);
        tracep->declBus(c+19,"ysyx_22041461_CPU PC sel_PC", false,-1, 1,0);
        tracep->declQuad(c+12,"ysyx_22041461_CPU PC dest", false,-1, 63,0);
        tracep->declQuad(c+170,"ysyx_22041461_CPU PC snpc", false,-1, 63,0);
        tracep->declQuad(c+167,"ysyx_22041461_CPU PC pc", false,-1, 63,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU PC npc", false,-1, 63,0);
        tracep->declBus(c+165,"ysyx_22041461_CPU REGS clk", false,-1, 0,0);
        tracep->declBus(c+166,"ysyx_22041461_CPU REGS rst", false,-1, 0,0);
        tracep->declBus(c+18,"ysyx_22041461_CPU REGS sel_REGS", false,-1, 2,0);
        tracep->declBus(c+3,"ysyx_22041461_CPU REGS rs1", false,-1, 4,0);
        tracep->declBus(c+4,"ysyx_22041461_CPU REGS rs2", false,-1, 4,0);
        tracep->declBus(c+5,"ysyx_22041461_CPU REGS rd", false,-1, 4,0);
        tracep->declQuad(c+6,"ysyx_22041461_CPU REGS imm", false,-1, 63,0);
        tracep->declQuad(c+12,"ysyx_22041461_CPU REGS dest", false,-1, 63,0);
        tracep->declQuad(c+167,"ysyx_22041461_CPU REGS pc", false,-1, 63,0);
        tracep->declQuad(c+170,"ysyx_22041461_CPU REGS snpc", false,-1, 63,0);
        tracep->declQuad(c+14,"ysyx_22041461_CPU REGS mem", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22041461_CPU REGS rs1_data", false,-1, 63,0);
        tracep->declQuad(c+10,"ysyx_22041461_CPU REGS rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+23+i*2,"ysyx_22041461_CPU REGS x", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+87+i*2,"ysyx_22041461_CPU REGS d", true,(i+0), 63,0);}}
        tracep->declBus(c+1,"ysyx_22041461_CPU REGS i", false,-1, 31,0);
        tracep->declBus(c+151,"ysyx_22041461_CPU REGS j", false,-1, 31,0);
        tracep->declBus(c+16,"ysyx_22041461_CPU ALU ctrl_ALU", false,-1, 2,0);
        tracep->declBus(c+17,"ysyx_22041461_CPU ALU sel_ALU", false,-1, 2,0);
        tracep->declQuad(c+8,"ysyx_22041461_CPU ALU rs1_data", false,-1, 63,0);
        tracep->declQuad(c+10,"ysyx_22041461_CPU ALU rs2_data", false,-1, 63,0);
        tracep->declQuad(c+6,"ysyx_22041461_CPU ALU imm", false,-1, 63,0);
        tracep->declQuad(c+167,"ysyx_22041461_CPU ALU pc", false,-1, 63,0);
        tracep->declQuad(c+170,"ysyx_22041461_CPU ALU snpc", false,-1, 63,0);
        tracep->declQuad(c+12,"ysyx_22041461_CPU ALU dest", false,-1, 63,0);
        tracep->declBus(c+169,"ysyx_22041461_CPU ALU flag", false,-1, 0,0);
        tracep->declQuad(c+152,"ysyx_22041461_CPU ALU src1", false,-1, 63,0);
        tracep->declQuad(c+154,"ysyx_22041461_CPU ALU src2", false,-1, 63,0);
        tracep->declQuad(c+156,"ysyx_22041461_CPU ALU sum", false,-1, 63,0);
        tracep->declQuad(c+158,"ysyx_22041461_CPU ALU SLL_out", false,-1, 63,0);
        tracep->declQuad(c+152,"ysyx_22041461_CPU ALU ADDER src1", false,-1, 63,0);
        tracep->declQuad(c+154,"ysyx_22041461_CPU ALU ADDER src2", false,-1, 63,0);
        tracep->declQuad(c+156,"ysyx_22041461_CPU ALU ADDER sum", false,-1, 63,0);
        tracep->declBus(c+169,"ysyx_22041461_CPU ALU ADDER flag", false,-1, 0,0);
        tracep->declQuad(c+152,"ysyx_22041461_CPU ALU SLL src1", false,-1, 63,0);
        tracep->declQuad(c+154,"ysyx_22041461_CPU ALU SLL src2", false,-1, 63,0);
        tracep->declQuad(c+158,"ysyx_22041461_CPU ALU SLL SLL_out", false,-1, 63,0);
        tracep->declBus(c+165,"ysyx_22041461_CPU MEM clk", false,-1, 0,0);
        tracep->declBus(c+166,"ysyx_22041461_CPU MEM rst", false,-1, 0,0);
        tracep->declQuad(c+12,"ysyx_22041461_CPU MEM dest", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22041461_CPU MEM rs1_data", false,-1, 63,0);
        tracep->declQuad(c+10,"ysyx_22041461_CPU MEM rs2_data", false,-1, 63,0);
        tracep->declQuad(c+6,"ysyx_22041461_CPU MEM imm", false,-1, 63,0);
        tracep->declQuad(c+167,"ysyx_22041461_CPU MEM pc", false,-1, 63,0);
        tracep->declQuad(c+170,"ysyx_22041461_CPU MEM snpc", false,-1, 63,0);
        tracep->declBus(c+20,"ysyx_22041461_CPU MEM ctrl_MEM", false,-1, 1,0);
        tracep->declBus(c+21,"ysyx_22041461_CPU MEM sel_MEM_addr", false,-1, 2,0);
        tracep->declBus(c+22,"ysyx_22041461_CPU MEM sel_MEM_data", false,-1, 2,0);
        tracep->declQuad(c+14,"ysyx_22041461_CPU MEM read_data", false,-1, 63,0);
        tracep->declBus(c+2,"ysyx_22041461_CPU MEM inst", false,-1, 31,0);
        tracep->declQuad(c+160,"ysyx_22041461_CPU MEM rinst", false,-1, 63,0);
        tracep->declQuad(c+162,"ysyx_22041461_CPU MEM addr", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22041461_CPU MEM write_data", false,-1, 63,0);
        tracep->declBus(c+164,"ysyx_22041461_CPU MEM wmask", false,-1, 7,0);
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
        tracep->fullIData(oldp+2,(vlSelf->ysyx_22041461_CPU__DOT__inst),32);
        tracep->fullCData(oldp+3,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__inst 
                                            >> 0xfU))),5);
        tracep->fullCData(oldp+4,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__inst 
                                            >> 0x14U))),5);
        tracep->fullCData(oldp+5,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__inst 
                                            >> 7U))),5);
        tracep->fullQData(oldp+6,(vlSelf->ysyx_22041461_CPU__DOT__imm),64);
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22041461_CPU__DOT__rs1_data),64);
        tracep->fullQData(oldp+10,(vlSelf->ysyx_22041461_CPU__DOT__rs2_data),64);
        tracep->fullQData(oldp+12,(vlSelf->ysyx_22041461_CPU__DOT__dest),64);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22041461_CPU__DOT__mem),64);
        tracep->fullCData(oldp+16,(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU),3);
        tracep->fullCData(oldp+17,(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU),3);
        tracep->fullCData(oldp+18,(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS),3);
        tracep->fullCData(oldp+19,(vlSelf->ysyx_22041461_CPU__DOT__sel_PC),2);
        tracep->fullCData(oldp+20,(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM),2);
        tracep->fullCData(oldp+21,(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr),3);
        tracep->fullCData(oldp+22,(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data),3);
        tracep->fullQData(oldp+23,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0]),64);
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[1]),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[2]),64);
        tracep->fullQData(oldp+29,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[3]),64);
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[4]),64);
        tracep->fullQData(oldp+33,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[5]),64);
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[6]),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[7]),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[8]),64);
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[9]),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[10]),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[11]),64);
        tracep->fullQData(oldp+47,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[12]),64);
        tracep->fullQData(oldp+49,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[13]),64);
        tracep->fullQData(oldp+51,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[14]),64);
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[15]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[16]),64);
        tracep->fullQData(oldp+57,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[17]),64);
        tracep->fullQData(oldp+59,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[18]),64);
        tracep->fullQData(oldp+61,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[19]),64);
        tracep->fullQData(oldp+63,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[20]),64);
        tracep->fullQData(oldp+65,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[21]),64);
        tracep->fullQData(oldp+67,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[22]),64);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[23]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[24]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[25]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[26]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[27]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[28]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[29]),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[30]),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[31]),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0]),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1]),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2]),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3]),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4]),64);
        tracep->fullQData(oldp+97,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5]),64);
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6]),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7]),64);
        tracep->fullQData(oldp+103,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8]),64);
        tracep->fullQData(oldp+105,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9]),64);
        tracep->fullQData(oldp+107,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[10]),64);
        tracep->fullQData(oldp+109,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[11]),64);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[12]),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[13]),64);
        tracep->fullQData(oldp+115,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[14]),64);
        tracep->fullQData(oldp+117,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[15]),64);
        tracep->fullQData(oldp+119,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[16]),64);
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[17]),64);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[18]),64);
        tracep->fullQData(oldp+125,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[19]),64);
        tracep->fullQData(oldp+127,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[20]),64);
        tracep->fullQData(oldp+129,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[21]),64);
        tracep->fullQData(oldp+131,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[22]),64);
        tracep->fullQData(oldp+133,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[23]),64);
        tracep->fullQData(oldp+135,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[24]),64);
        tracep->fullQData(oldp+137,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[25]),64);
        tracep->fullQData(oldp+139,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[26]),64);
        tracep->fullQData(oldp+141,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[27]),64);
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[28]),64);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[29]),64);
        tracep->fullQData(oldp+147,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[30]),64);
        tracep->fullQData(oldp+149,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[31]),64);
        tracep->fullIData(oldp+151,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__j),32);
        tracep->fullQData(oldp+152,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1),64);
        tracep->fullQData(oldp+154,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2),64);
        tracep->fullQData(oldp+156,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum),64);
        tracep->fullQData(oldp+158,(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1, vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)),64);
        tracep->fullQData(oldp+160,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rinst),64);
        tracep->fullQData(oldp+162,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr),64);
        tracep->fullCData(oldp+164,(((1U & (IData)(
                                                   (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                                                    >> 2U)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                                                        >> 1U)))
                                          ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                              ? 0x80U
                                              : 0xc0U)
                                          : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                              ? 0xe0U
                                              : 0xf0U))
                                      : ((1U & (IData)(
                                                       (vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr 
                                                        >> 1U)))
                                          ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                              ? 0xf8U
                                              : 0xfcU)
                                          : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr))
                                              ? 0xfeU
                                              : 0xffU)))),8);
        tracep->fullBit(oldp+165,(vlSelf->clk));
        tracep->fullBit(oldp+166,(vlSelf->rst));
        tracep->fullQData(oldp+167,(vlSelf->pc),64);
        tracep->fullBit(oldp+169,(vlSelf->flag));
        tracep->fullQData(oldp+170,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+172,(((0U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
                                      ? (4ULL + vlSelf->pc)
                                      : ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
                                          ? vlSelf->ysyx_22041461_CPU__DOT__dest
                                          : vlSelf->pc))),64);
        tracep->fullQData(oldp+174,(((4U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                      ? ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                          ? 0ULL : 
                                         ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                           ? 0ULL : 
                                          (4ULL + vlSelf->pc)))
                                      : ((2U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                          ? ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                              ? vlSelf->ysyx_22041461_CPU__DOT__imm
                                              : vlSelf->ysyx_22041461_CPU__DOT__rs2_data)
                                          : ((1U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data))
                                              ? vlSelf->ysyx_22041461_CPU__DOT__rs1_data
                                              : vlSelf->ysyx_22041461_CPU__DOT__dest)))),64);
    }
}
