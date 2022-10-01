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
        tracep->declBus(c+237,"clk", false,-1, 0,0);
        tracep->declBus(c+238,"rst", false,-1, 0,0);
        tracep->declQuad(c+239,"pc", false,-1, 63,0);
        tracep->declBus(c+241,"flag", false,-1, 0,0);
        tracep->declBus(c+237,"ysyx_22041461_CPU clk", false,-1, 0,0);
        tracep->declBus(c+238,"ysyx_22041461_CPU rst", false,-1, 0,0);
        tracep->declQuad(c+239,"ysyx_22041461_CPU pc", false,-1, 63,0);
        tracep->declBus(c+241,"ysyx_22041461_CPU flag", false,-1, 0,0);
        tracep->declBus(c+2,"ysyx_22041461_CPU inst", false,-1, 31,0);
        tracep->declBus(c+3,"ysyx_22041461_CPU rs1", false,-1, 4,0);
        tracep->declBus(c+4,"ysyx_22041461_CPU rs2", false,-1, 4,0);
        tracep->declBus(c+5,"ysyx_22041461_CPU rd", false,-1, 4,0);
        tracep->declQuad(c+87,"ysyx_22041461_CPU imm", false,-1, 63,0);
        tracep->declQuad(c+242,"ysyx_22041461_CPU snpc", false,-1, 63,0);
        tracep->declQuad(c+6,"ysyx_22041461_CPU rs1_data", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22041461_CPU rs2_data", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_22041461_CPU dest", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_22041461_CPU mem", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22041461_CPU ctrl_ALU", false,-1, 4,0);
        tracep->declBus(c+94,"ysyx_22041461_CPU sel_ALU", false,-1, 2,0);
        tracep->declBus(c+95,"ysyx_22041461_CPU sel_CMP", false,-1, 1,0);
        tracep->declBus(c+96,"ysyx_22041461_CPU ctrl_CMP", false,-1, 0,0);
        tracep->declBus(c+97,"ysyx_22041461_CPU CMP_out", false,-1, 1,0);
        tracep->declBus(c+98,"ysyx_22041461_CPU sel_REGS", false,-1, 3,0);
        tracep->declBus(c+99,"ysyx_22041461_CPU sel_PC", false,-1, 1,0);
        tracep->declBus(c+100,"ysyx_22041461_CPU ctrl_MEM", false,-1, 3,0);
        tracep->declBus(c+101,"ysyx_22041461_CPU sel_MEM_addr", false,-1, 2,0);
        tracep->declBus(c+102,"ysyx_22041461_CPU sel_MEM_data", false,-1, 2,0);
        tracep->declBus(c+103,"ysyx_22041461_CPU ctrl_CSRS", false,-1, 1,0);
        tracep->declQuad(c+104,"ysyx_22041461_CPU csr_data", false,-1, 63,0);
        tracep->declQuad(c+10,"ysyx_22041461_CPU csr_mepc", false,-1, 63,0);
        tracep->declBus(c+2,"ysyx_22041461_CPU CU inst", false,-1, 31,0);
        tracep->declBus(c+97,"ysyx_22041461_CPU CU CMP_out", false,-1, 1,0);
        tracep->declBus(c+3,"ysyx_22041461_CPU CU rs1", false,-1, 4,0);
        tracep->declBus(c+4,"ysyx_22041461_CPU CU rs2", false,-1, 4,0);
        tracep->declBus(c+5,"ysyx_22041461_CPU CU rd", false,-1, 4,0);
        tracep->declQuad(c+87,"ysyx_22041461_CPU CU imm", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22041461_CPU CU ctrl_ALU", false,-1, 4,0);
        tracep->declBus(c+94,"ysyx_22041461_CPU CU sel_ALU", false,-1, 2,0);
        tracep->declBus(c+96,"ysyx_22041461_CPU CU ctrl_CMP", false,-1, 0,0);
        tracep->declBus(c+95,"ysyx_22041461_CPU CU sel_CMP", false,-1, 1,0);
        tracep->declBus(c+98,"ysyx_22041461_CPU CU sel_REGS", false,-1, 3,0);
        tracep->declBus(c+99,"ysyx_22041461_CPU CU sel_PC", false,-1, 1,0);
        tracep->declBus(c+100,"ysyx_22041461_CPU CU ctrl_MEM", false,-1, 3,0);
        tracep->declBus(c+101,"ysyx_22041461_CPU CU sel_MEM_addr", false,-1, 2,0);
        tracep->declBus(c+102,"ysyx_22041461_CPU CU sel_MEM_data", false,-1, 2,0);
        tracep->declBus(c+103,"ysyx_22041461_CPU CU ctrl_CSRS", false,-1, 1,0);
        tracep->declBus(c+237,"ysyx_22041461_CPU PC clk", false,-1, 0,0);
        tracep->declBus(c+238,"ysyx_22041461_CPU PC rst", false,-1, 0,0);
        tracep->declBus(c+99,"ysyx_22041461_CPU PC sel_PC", false,-1, 1,0);
        tracep->declQuad(c+89,"ysyx_22041461_CPU PC dest", false,-1, 63,0);
        tracep->declQuad(c+10,"ysyx_22041461_CPU PC csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+242,"ysyx_22041461_CPU PC snpc", false,-1, 63,0);
        tracep->declQuad(c+239,"ysyx_22041461_CPU PC pc", false,-1, 63,0);
        tracep->declQuad(c+244,"ysyx_22041461_CPU PC npc", false,-1, 63,0);
        tracep->declBus(c+237,"ysyx_22041461_CPU REGS clk", false,-1, 0,0);
        tracep->declBus(c+238,"ysyx_22041461_CPU REGS rst", false,-1, 0,0);
        tracep->declBus(c+98,"ysyx_22041461_CPU REGS sel_REGS", false,-1, 3,0);
        tracep->declBus(c+3,"ysyx_22041461_CPU REGS rs1", false,-1, 4,0);
        tracep->declBus(c+4,"ysyx_22041461_CPU REGS rs2", false,-1, 4,0);
        tracep->declBus(c+5,"ysyx_22041461_CPU REGS rd", false,-1, 4,0);
        tracep->declQuad(c+87,"ysyx_22041461_CPU REGS imm", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_22041461_CPU REGS dest", false,-1, 63,0);
        tracep->declQuad(c+239,"ysyx_22041461_CPU REGS pc", false,-1, 63,0);
        tracep->declQuad(c+242,"ysyx_22041461_CPU REGS snpc", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_22041461_CPU REGS mem", false,-1, 63,0);
        tracep->declQuad(c+104,"ysyx_22041461_CPU REGS csr_data", false,-1, 63,0);
        tracep->declQuad(c+6,"ysyx_22041461_CPU REGS rs1_data", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22041461_CPU REGS rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+12+i*2,"ysyx_22041461_CPU REGS x", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+106+i*2,"ysyx_22041461_CPU REGS d", true,(i+0), 63,0);}}
        tracep->declBus(c+1,"ysyx_22041461_CPU REGS i", false,-1, 31,0);
        tracep->declBus(c+76,"ysyx_22041461_CPU REGS j", false,-1, 31,0);
        tracep->declQuad(c+87,"ysyx_22041461_CPU CMP imm", false,-1, 63,0);
        tracep->declQuad(c+6,"ysyx_22041461_CPU CMP rs1_data", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22041461_CPU CMP rs2_data", false,-1, 63,0);
        tracep->declBus(c+95,"ysyx_22041461_CPU CMP sel_CMP", false,-1, 1,0);
        tracep->declBus(c+96,"ysyx_22041461_CPU CMP ctrl_CMP", false,-1, 0,0);
        tracep->declBus(c+97,"ysyx_22041461_CPU CMP CMP_out", false,-1, 1,0);
        tracep->declQuad(c+77,"ysyx_22041461_CPU CMP src1", false,-1, 63,0);
        tracep->declQuad(c+170,"ysyx_22041461_CPU CMP src2", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22041461_CPU ALU ctrl_ALU", false,-1, 4,0);
        tracep->declBus(c+94,"ysyx_22041461_CPU ALU sel_ALU", false,-1, 2,0);
        tracep->declQuad(c+6,"ysyx_22041461_CPU ALU rs1_data", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22041461_CPU ALU rs2_data", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22041461_CPU ALU imm", false,-1, 63,0);
        tracep->declQuad(c+239,"ysyx_22041461_CPU ALU pc", false,-1, 63,0);
        tracep->declQuad(c+242,"ysyx_22041461_CPU ALU snpc", false,-1, 63,0);
        tracep->declQuad(c+104,"ysyx_22041461_CPU ALU csr_data", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_22041461_CPU ALU dest", false,-1, 63,0);
        tracep->declBus(c+241,"ysyx_22041461_CPU ALU flag", false,-1, 0,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU ALU src1", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22041461_CPU ALU src2", false,-1, 63,0);
        tracep->declQuad(c+176,"ysyx_22041461_CPU ALU sum", false,-1, 63,0);
        tracep->declQuad(c+178,"ysyx_22041461_CPU ALU SLL_out", false,-1, 63,0);
        tracep->declQuad(c+180,"ysyx_22041461_CPU ALU SRA_out", false,-1, 63,0);
        tracep->declQuad(c+182,"ysyx_22041461_CPU ALU sub", false,-1, 63,0);
        tracep->declQuad(c+184,"ysyx_22041461_CPU ALU AND_out", false,-1, 63,0);
        tracep->declQuad(c+186,"ysyx_22041461_CPU ALU XOR_out", false,-1, 63,0);
        tracep->declQuad(c+188,"ysyx_22041461_CPU ALU OR_out", false,-1, 63,0);
        tracep->declQuad(c+190,"ysyx_22041461_CPU ALU SRL_out", false,-1, 63,0);
        tracep->declQuad(c+192,"ysyx_22041461_CPU ALU MUL_out", false,-1, 63,0);
        tracep->declQuad(c+194,"ysyx_22041461_CPU ALU DIV_out", false,-1, 63,0);
        tracep->declQuad(c+196,"ysyx_22041461_CPU ALU REM_out", false,-1, 63,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU ALU ADDER src1", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22041461_CPU ALU ADDER src2", false,-1, 63,0);
        tracep->declQuad(c+176,"ysyx_22041461_CPU ALU ADDER sum", false,-1, 63,0);
        tracep->declBus(c+241,"ysyx_22041461_CPU ALU ADDER flag", false,-1, 0,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU ALU SLL src1", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22041461_CPU ALU SLL src2", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22041461_CPU ALU SLL ctrl_ALU", false,-1, 4,0);
        tracep->declQuad(c+178,"ysyx_22041461_CPU ALU SLL SLL_out", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_22041461_CPU ALU SLL sll", false,-1, 63,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU ALU SRA src1", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22041461_CPU ALU SRA src2", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22041461_CPU ALU SRA ctrl_ALU", false,-1, 4,0);
        tracep->declQuad(c+180,"ysyx_22041461_CPU ALU SRA SRA_out", false,-1, 63,0);
        tracep->declBus(c+200,"ysyx_22041461_CPU ALU SRA sra", false,-1, 31,0);
        tracep->declBus(c+201,"ysyx_22041461_CPU ALU SRA src1_32", false,-1, 31,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU ALU SRA src1_64", false,-1, 63,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU ALU SRL src1", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22041461_CPU ALU SRL src2", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22041461_CPU ALU SRL ctrl_ALU", false,-1, 4,0);
        tracep->declQuad(c+190,"ysyx_22041461_CPU ALU SRL SRL_out", false,-1, 63,0);
        tracep->declQuad(c+202,"ysyx_22041461_CPU ALU SRL srl", false,-1, 63,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU ALU SUB src1", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22041461_CPU ALU SUB src2", false,-1, 63,0);
        tracep->declQuad(c+182,"ysyx_22041461_CPU ALU SUB sub", false,-1, 63,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU ALU AND src1", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22041461_CPU ALU AND src2", false,-1, 63,0);
        tracep->declQuad(c+184,"ysyx_22041461_CPU ALU AND AND_out", false,-1, 63,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU ALU XOR src1", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22041461_CPU ALU XOR src2", false,-1, 63,0);
        tracep->declQuad(c+186,"ysyx_22041461_CPU ALU XOR XOR_out", false,-1, 63,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU ALU OR src1", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22041461_CPU ALU OR src2", false,-1, 63,0);
        tracep->declQuad(c+188,"ysyx_22041461_CPU ALU OR OR_out", false,-1, 63,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU ALU MUL src1", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22041461_CPU ALU MUL src2", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22041461_CPU ALU MUL ctrl_ALU", false,-1, 4,0);
        tracep->declQuad(c+192,"ysyx_22041461_CPU ALU MUL MUL_out", false,-1, 63,0);
        tracep->declArray(c+204,"ysyx_22041461_CPU ALU MUL mul", false,-1, 127,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU ALU DIV src1", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22041461_CPU ALU DIV src2", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22041461_CPU ALU DIV ctrl_ALU", false,-1, 4,0);
        tracep->declQuad(c+194,"ysyx_22041461_CPU ALU DIV DIV_out", false,-1, 63,0);
        tracep->declQuad(c+208,"ysyx_22041461_CPU ALU DIV div", false,-1, 63,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU ALU REM src1", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22041461_CPU ALU REM src2", false,-1, 63,0);
        tracep->declBus(c+93,"ysyx_22041461_CPU ALU REM ctrl_ALU", false,-1, 4,0);
        tracep->declQuad(c+196,"ysyx_22041461_CPU ALU REM REM_out", false,-1, 63,0);
        tracep->declQuad(c+210,"ysyx_22041461_CPU ALU REM rem", false,-1, 63,0);
        tracep->declBus(c+237,"ysyx_22041461_CPU MEM clk", false,-1, 0,0);
        tracep->declBus(c+238,"ysyx_22041461_CPU MEM rst", false,-1, 0,0);
        tracep->declQuad(c+89,"ysyx_22041461_CPU MEM dest", false,-1, 63,0);
        tracep->declQuad(c+6,"ysyx_22041461_CPU MEM rs1_data", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22041461_CPU MEM rs2_data", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22041461_CPU MEM imm", false,-1, 63,0);
        tracep->declQuad(c+239,"ysyx_22041461_CPU MEM pc", false,-1, 63,0);
        tracep->declQuad(c+242,"ysyx_22041461_CPU MEM snpc", false,-1, 63,0);
        tracep->declBus(c+100,"ysyx_22041461_CPU MEM ctrl_MEM", false,-1, 3,0);
        tracep->declBus(c+101,"ysyx_22041461_CPU MEM sel_MEM_addr", false,-1, 2,0);
        tracep->declBus(c+102,"ysyx_22041461_CPU MEM sel_MEM_data", false,-1, 2,0);
        tracep->declQuad(c+91,"ysyx_22041461_CPU MEM read_data", false,-1, 63,0);
        tracep->declBus(c+2,"ysyx_22041461_CPU MEM inst", false,-1, 31,0);
        tracep->declQuad(c+79,"ysyx_22041461_CPU MEM rinst", false,-1, 63,0);
        tracep->declQuad(c+212,"ysyx_22041461_CPU MEM read_data1", false,-1, 63,0);
        tracep->declQuad(c+214,"ysyx_22041461_CPU MEM read_data2", false,-1, 63,0);
        tracep->declQuad(c+216,"ysyx_22041461_CPU MEM rread_data", false,-1, 63,0);
        tracep->declQuad(c+218,"ysyx_22041461_CPU MEM addr", false,-1, 63,0);
        tracep->declQuad(c+220,"ysyx_22041461_CPU MEM write_data", false,-1, 63,0);
        tracep->declQuad(c+222,"ysyx_22041461_CPU MEM write_data1", false,-1, 63,0);
        tracep->declQuad(c+224,"ysyx_22041461_CPU MEM write_data2", false,-1, 63,0);
        tracep->declBus(c+226,"ysyx_22041461_CPU MEM wmask", false,-1, 15,0);
        tracep->declBus(c+227,"ysyx_22041461_CPU MEM wmask1", false,-1, 7,0);
        tracep->declBus(c+228,"ysyx_22041461_CPU MEM wmask2", false,-1, 7,0);
        tracep->declBus(c+237,"ysyx_22041461_CPU CSR clk", false,-1, 0,0);
        tracep->declBus(c+238,"ysyx_22041461_CPU CSR rst", false,-1, 0,0);
        tracep->declBus(c+103,"ysyx_22041461_CPU CSR ctrl_CSRS", false,-1, 1,0);
        tracep->declQuad(c+87,"ysyx_22041461_CPU CSR imm", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_22041461_CPU CSR dest", false,-1, 63,0);
        tracep->declQuad(c+239,"ysyx_22041461_CPU CSR pc", false,-1, 63,0);
        tracep->declQuad(c+6,"ysyx_22041461_CPU CSR rs1_data", false,-1, 63,0);
        tracep->declQuad(c+104,"ysyx_22041461_CPU CSR csr_data", false,-1, 63,0);
        tracep->declQuad(c+10,"ysyx_22041461_CPU CSR csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+81,"ysyx_22041461_CPU CSR mtvec", false,-1, 63,0);
        tracep->declQuad(c+229,"ysyx_22041461_CPU CSR mtvec_next", false,-1, 63,0);
        tracep->declQuad(c+10,"ysyx_22041461_CPU CSR mepc", false,-1, 63,0);
        tracep->declQuad(c+231,"ysyx_22041461_CPU CSR mepc_next", false,-1, 63,0);
        tracep->declQuad(c+83,"ysyx_22041461_CPU CSR mcause", false,-1, 63,0);
        tracep->declQuad(c+233,"ysyx_22041461_CPU CSR mcause_next", false,-1, 63,0);
        tracep->declQuad(c+85,"ysyx_22041461_CPU CSR mstatus", false,-1, 63,0);
        tracep->declQuad(c+235,"ysyx_22041461_CPU CSR mstatus_next", false,-1, 63,0);
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
        tracep->fullQData(oldp+6,(vlSelf->ysyx_22041461_CPU__DOT__rs1_data),64);
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22041461_CPU__DOT__rs2_data),64);
        tracep->fullQData(oldp+10,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc),64);
        tracep->fullQData(oldp+12,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[0]),64);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[1]),64);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[2]),64);
        tracep->fullQData(oldp+18,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[3]),64);
        tracep->fullQData(oldp+20,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[4]),64);
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[5]),64);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[6]),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[7]),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[8]),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[9]),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[10]),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[11]),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[12]),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[13]),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[14]),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[15]),64);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[16]),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[17]),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[18]),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[19]),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[20]),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[21]),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[22]),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[23]),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[24]),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[25]),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[26]),64);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[27]),64);
        tracep->fullQData(oldp+68,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[28]),64);
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[29]),64);
        tracep->fullQData(oldp+72,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[30]),64);
        tracep->fullQData(oldp+74,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__x[31]),64);
        tracep->fullIData(oldp+76,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__j),32);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src1),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rinst),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mtvec),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mcause),64);
        tracep->fullQData(oldp+85,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mstatus),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22041461_CPU__DOT__imm),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22041461_CPU__DOT__dest),64);
        tracep->fullQData(oldp+91,(((8U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                     ? 0ULL : ((4U 
                                                & (IData)(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM))
                                                ? (
                                                   (2U 
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
                                                : (
                                                   (2U 
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
        tracep->fullCData(oldp+93,(vlSelf->ysyx_22041461_CPU__DOT__ctrl_ALU),5);
        tracep->fullCData(oldp+94,(vlSelf->ysyx_22041461_CPU__DOT__sel_ALU),3);
        tracep->fullCData(oldp+95,(vlSelf->ysyx_22041461_CPU__DOT__sel_CMP),2);
        tracep->fullBit(oldp+96,(vlSelf->ysyx_22041461_CPU__DOT__ctrl_CMP));
        tracep->fullCData(oldp+97,(vlSelf->ysyx_22041461_CPU__DOT__CMP_out),2);
        tracep->fullCData(oldp+98,(vlSelf->ysyx_22041461_CPU__DOT__sel_REGS),4);
        tracep->fullCData(oldp+99,(vlSelf->ysyx_22041461_CPU__DOT__sel_PC),2);
        tracep->fullCData(oldp+100,(vlSelf->ysyx_22041461_CPU__DOT__ctrl_MEM),4);
        tracep->fullCData(oldp+101,(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_addr),3);
        tracep->fullCData(oldp+102,(vlSelf->ysyx_22041461_CPU__DOT__sel_MEM_data),3);
        tracep->fullCData(oldp+103,(vlSelf->ysyx_22041461_CPU__DOT__ctrl_CSRS),2);
        tracep->fullQData(oldp+104,(vlSelf->ysyx_22041461_CPU__DOT__csr_data),64);
        tracep->fullQData(oldp+106,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[0]),64);
        tracep->fullQData(oldp+108,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[1]),64);
        tracep->fullQData(oldp+110,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[2]),64);
        tracep->fullQData(oldp+112,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[3]),64);
        tracep->fullQData(oldp+114,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[4]),64);
        tracep->fullQData(oldp+116,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[5]),64);
        tracep->fullQData(oldp+118,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[6]),64);
        tracep->fullQData(oldp+120,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[7]),64);
        tracep->fullQData(oldp+122,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[8]),64);
        tracep->fullQData(oldp+124,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[9]),64);
        tracep->fullQData(oldp+126,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[10]),64);
        tracep->fullQData(oldp+128,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[11]),64);
        tracep->fullQData(oldp+130,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[12]),64);
        tracep->fullQData(oldp+132,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[13]),64);
        tracep->fullQData(oldp+134,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[14]),64);
        tracep->fullQData(oldp+136,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[15]),64);
        tracep->fullQData(oldp+138,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[16]),64);
        tracep->fullQData(oldp+140,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[17]),64);
        tracep->fullQData(oldp+142,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[18]),64);
        tracep->fullQData(oldp+144,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[19]),64);
        tracep->fullQData(oldp+146,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[20]),64);
        tracep->fullQData(oldp+148,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[21]),64);
        tracep->fullQData(oldp+150,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[22]),64);
        tracep->fullQData(oldp+152,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[23]),64);
        tracep->fullQData(oldp+154,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[24]),64);
        tracep->fullQData(oldp+156,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[25]),64);
        tracep->fullQData(oldp+158,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[26]),64);
        tracep->fullQData(oldp+160,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[27]),64);
        tracep->fullQData(oldp+162,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[28]),64);
        tracep->fullQData(oldp+164,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[29]),64);
        tracep->fullQData(oldp+166,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[30]),64);
        tracep->fullQData(oldp+168,(vlSelf->ysyx_22041461_CPU__DOT__REGS__DOT__d[31]),64);
        tracep->fullQData(oldp+170,(vlSelf->ysyx_22041461_CPU__DOT__CMP__DOT__src2),64);
        tracep->fullQData(oldp+172,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1),64);
        tracep->fullQData(oldp+174,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2),64);
        tracep->fullQData(oldp+176,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sum),64);
        tracep->fullQData(oldp+178,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL_out),64);
        tracep->fullQData(oldp+180,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA_out),64);
        tracep->fullQData(oldp+182,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__sub),64);
        tracep->fullQData(oldp+184,((vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
                                     & vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)),64);
        tracep->fullQData(oldp+186,((vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
                                     ^ vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)),64);
        tracep->fullQData(oldp+188,((vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1 
                                     | vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src2)),64);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL_out),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL_out),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV_out),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM_out),64);
        tracep->fullQData(oldp+198,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SLL__DOT__sll),64);
        tracep->fullIData(oldp+200,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRA__DOT__sra),32);
        tracep->fullIData(oldp+201,((IData)(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__src1)),32);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__SRL__DOT__srl),64);
        tracep->fullWData(oldp+204,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__MUL__DOT__mul),128);
        tracep->fullQData(oldp+208,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__DIV__DOT__div),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_22041461_CPU__DOT__ALU__DOT__REM__DOT__rem),64);
        tracep->fullQData(oldp+212,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1),64);
        tracep->fullQData(oldp+214,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2),64);
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__rread_data),64);
        tracep->fullQData(oldp+218,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__addr),64);
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data),64);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data1),64);
        tracep->fullQData(oldp+224,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data2),64);
        tracep->fullSData(oldp+226,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask),16);
        tracep->fullCData(oldp+227,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask1),8);
        tracep->fullCData(oldp+228,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask2),8);
        tracep->fullQData(oldp+229,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mtvec_next),64);
        tracep->fullQData(oldp+231,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc_next),64);
        tracep->fullQData(oldp+233,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mcause_next),64);
        tracep->fullQData(oldp+235,(vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mstatus_next),64);
        tracep->fullBit(oldp+237,(vlSelf->clk));
        tracep->fullBit(oldp+238,(vlSelf->rst));
        tracep->fullQData(oldp+239,(vlSelf->pc),64);
        tracep->fullBit(oldp+241,(vlSelf->flag));
        tracep->fullQData(oldp+242,((4ULL + vlSelf->pc)),64);
        tracep->fullQData(oldp+244,(((0U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
                                      ? (4ULL + vlSelf->pc)
                                      : ((1U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
                                          ? vlSelf->ysyx_22041461_CPU__DOT__dest
                                          : ((2U == (IData)(vlSelf->ysyx_22041461_CPU__DOT__sel_PC))
                                              ? vlSelf->ysyx_22041461_CPU__DOT__CSR__DOT__mepc
                                              : vlSelf->pc)))),64);
    }
}
