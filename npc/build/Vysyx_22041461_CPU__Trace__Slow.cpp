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
        tracep->declBus(c+292,"clk", false,-1, 0,0);
        tracep->declBus(c+293,"rst", false,-1, 0,0);
        tracep->declQuad(c+294,"pc", false,-1, 63,0);
        tracep->declBus(c+296,"inst", false,-1, 31,0);
        tracep->declBus(c+292,"ysyx_22041461_CPU clk", false,-1, 0,0);
        tracep->declBus(c+293,"ysyx_22041461_CPU rst", false,-1, 0,0);
        tracep->declQuad(c+294,"ysyx_22041461_CPU pc", false,-1, 63,0);
        tracep->declBus(c+296,"ysyx_22041461_CPU inst", false,-1, 31,0);
        tracep->declBus(c+215,"ysyx_22041461_CPU CD_IF_valid", false,-1, 0,0);
        tracep->declBus(c+216,"ysyx_22041461_CPU CD_IF_enable", false,-1, 0,0);
        tracep->declBus(c+304,"ysyx_22041461_CPU CD_ID_valid", false,-1, 0,0);
        tracep->declBus(c+217,"ysyx_22041461_CPU CD_ID_enable", false,-1, 0,0);
        tracep->declBus(c+218,"ysyx_22041461_CPU CD_EXE_valid", false,-1, 0,0);
        tracep->declBus(c+297,"ysyx_22041461_CPU CD_EXE_enable", false,-1, 0,0);
        tracep->declBus(c+298,"ysyx_22041461_CPU CD_MEM_valid", false,-1, 0,0);
        tracep->declBus(c+299,"ysyx_22041461_CPU CD_MEM_enable", false,-1, 0,0);
        tracep->declBus(c+300,"ysyx_22041461_CPU CD_WB_valid", false,-1, 0,0);
        tracep->declQuad(c+190,"ysyx_22041461_CPU IFreg_pc", false,-1, 63,0);
        tracep->declBus(c+301,"ysyx_22041461_CPU IFreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+192,"ysyx_22041461_CPU IF_valid_out", false,-1, 0,0);
        tracep->declBus(c+193,"ysyx_22041461_CPU IF_inst", false,-1, 31,0);
        tracep->declBus(c+116,"ysyx_22041461_CPU IDreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+117,"ysyx_22041461_CPU IDreg_inst_out", false,-1, 31,0);
        tracep->declQuad(c+118,"ysyx_22041461_CPU IDreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+120,"ysyx_22041461_CPU ID_rd", false,-1, 4,0);
        tracep->declBus(c+121,"ysyx_22041461_CPU ID_rs1", false,-1, 4,0);
        tracep->declBus(c+122,"ysyx_22041461_CPU ID_rs2", false,-1, 4,0);
        tracep->declBus(c+123,"ysyx_22041461_CPU ID_csr", false,-1, 11,0);
        tracep->declQuad(c+196,"ysyx_22041461_CPU ID_imm", false,-1, 63,0);
        tracep->declQuad(c+124,"ysyx_22041461_CPU ID_zimm", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_22041461_CPU ID_next_pc", false,-1, 63,0);
        tracep->declBus(c+200,"ysyx_22041461_CPU ID_valid_out", false,-1, 0,0);
        tracep->declBus(c+201,"ysyx_22041461_CPU ID_PC_ctrl", false,-1, 0,0);
        tracep->declBus(c+202,"ysyx_22041461_CPU ID_CD_ctrl", false,-1, 2,0);
        tracep->declBus(c+203,"ysyx_22041461_CPU ID_EXE_ctrl", false,-1, 4,0);
        tracep->declBus(c+204,"ysyx_22041461_CPU ID_EXE_src", false,-1, 2,0);
        tracep->declBus(c+205,"ysyx_22041461_CPU ID_MEM_ctrl", false,-1, 3,0);
        tracep->declBus(c+206,"ysyx_22041461_CPU ID_WB_ctrl", false,-1, 3,0);
        tracep->declBus(c+95,"ysyx_22041461_CPU EXEreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+96,"ysyx_22041461_CPU EXEreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+97,"ysyx_22041461_CPU EXEreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+98,"ysyx_22041461_CPU EXEreg_rs2_out", false,-1, 4,0);
        tracep->declBus(c+99,"ysyx_22041461_CPU EXEreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+100,"ysyx_22041461_CPU EXEreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+102,"ysyx_22041461_CPU EXEreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+104,"ysyx_22041461_CPU EXEreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+106,"ysyx_22041461_CPU EXEreg_EXE_ctrl_out", false,-1, 4,0);
        tracep->declBus(c+107,"ysyx_22041461_CPU EXEreg_EXE_src_out", false,-1, 2,0);
        tracep->declBus(c+108,"ysyx_22041461_CPU EXEreg_MEM_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+109,"ysyx_22041461_CPU EXEreg_WB_ctrl_out", false,-1, 3,0);
        tracep->declQuad(c+176,"ysyx_22041461_CPU EXE_out", false,-1, 63,0);
        tracep->declBus(c+95,"ysyx_22041461_CPU EXE_valid_out", false,-1, 0,0);
        tracep->declBus(c+143,"ysyx_22041461_CPU MEMreg_valid_out", false,-1, 0,0);
        tracep->declQuad(c+144,"ysyx_22041461_CPU MEMreg_EXE_out", false,-1, 63,0);
        tracep->declBus(c+146,"ysyx_22041461_CPU MEMreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+147,"ysyx_22041461_CPU MEMreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+1,"ysyx_22041461_CPU MEMreg_rs2_out", false,-1, 4,0);
        tracep->declBus(c+148,"ysyx_22041461_CPU MEMreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+149,"ysyx_22041461_CPU MEMreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+151,"ysyx_22041461_CPU MEMreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+153,"ysyx_22041461_CPU MEMreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+2,"ysyx_22041461_CPU MEMreg_MEM_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+155,"ysyx_22041461_CPU MEMreg_WB_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+143,"ysyx_22041461_CPU MEM_valid_out", false,-1, 0,0);
        tracep->declQuad(c+156,"ysyx_22041461_CPU MEM_out", false,-1, 63,0);
        tracep->declBus(c+4,"ysyx_22041461_CPU WBreg_valid_out", false,-1, 0,0);
        tracep->declQuad(c+5,"ysyx_22041461_CPU WBreg_EXE_out", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22041461_CPU WBreg_MEM_out", false,-1, 63,0);
        tracep->declBus(c+9,"ysyx_22041461_CPU WBreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+10,"ysyx_22041461_CPU WBreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22041461_CPU WBreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+12,"ysyx_22041461_CPU WBreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+14,"ysyx_22041461_CPU WBreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22041461_CPU WBreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+18,"ysyx_22041461_CPU WBreg_WB_ctrl_out", false,-1, 3,0);
        tracep->declQuad(c+207,"ysyx_22041461_CPU WB_ID_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+209,"ysyx_22041461_CPU WB_ID_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+22,"ysyx_22041461_CPU WB_ID_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22041461_CPU WB_ID_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+178,"ysyx_22041461_CPU WB_EXE_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+302,"ysyx_22041461_CPU WB_EXE_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+180,"ysyx_22041461_CPU WB_EXE_csr_data", false,-1, 63,0);
        tracep->declQuad(c+170,"ysyx_22041461_CPU WB_MEM_rs2_data", false,-1, 63,0);
        tracep->declBus(c+292,"ysyx_22041461_CPU IF_reg clk", false,-1, 0,0);
        tracep->declBus(c+293,"ysyx_22041461_CPU IF_reg flush", false,-1, 0,0);
        tracep->declBus(c+215,"ysyx_22041461_CPU IF_reg IFreg_valid_fromCD", false,-1, 0,0);
        tracep->declBus(c+216,"ysyx_22041461_CPU IF_reg IFreg_enable", false,-1, 0,0);
        tracep->declBus(c+201,"ysyx_22041461_CPU IF_reg IFreg_ctrl", false,-1, 0,0);
        tracep->declQuad(c+198,"ysyx_22041461_CPU IF_reg IFreg_next_pc", false,-1, 63,0);
        tracep->declQuad(c+190,"ysyx_22041461_CPU IF_reg IFreg_pc", false,-1, 63,0);
        tracep->declBus(c+301,"ysyx_22041461_CPU IF_reg IFreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+131,"ysyx_22041461_CPU IF_reg rst_r1", false,-1, 0,0);
        tracep->declBus(c+132,"ysyx_22041461_CPU IF_reg rst_r2", false,-1, 0,0);
        tracep->declBus(c+132,"ysyx_22041461_CPU IF_reg rst", false,-1, 0,0);
        tracep->declBus(c+301,"ysyx_22041461_CPU IF IF_valid_in", false,-1, 0,0);
        tracep->declQuad(c+190,"ysyx_22041461_CPU IF IF_pc", false,-1, 63,0);
        tracep->declBus(c+192,"ysyx_22041461_CPU IF IF_valid_out", false,-1, 0,0);
        tracep->declBus(c+193,"ysyx_22041461_CPU IF IF_inst", false,-1, 31,0);
        tracep->declQuad(c+194,"ysyx_22041461_CPU IF rinst", false,-1, 63,0);
        tracep->declBus(c+292,"ysyx_22041461_CPU ID_reg clk", false,-1, 0,0);
        tracep->declBus(c+293,"ysyx_22041461_CPU ID_reg flush", false,-1, 0,0);
        tracep->declBus(c+217,"ysyx_22041461_CPU ID_reg IDreg_enable", false,-1, 0,0);
        tracep->declBus(c+192,"ysyx_22041461_CPU ID_reg IDreg_valid_fromIF", false,-1, 0,0);
        tracep->declBus(c+304,"ysyx_22041461_CPU ID_reg IDreg_valid_fromCD", false,-1, 0,0);
        tracep->declBus(c+193,"ysyx_22041461_CPU ID_reg IDreg_inst_in", false,-1, 31,0);
        tracep->declQuad(c+190,"ysyx_22041461_CPU ID_reg IDreg_pc_in", false,-1, 63,0);
        tracep->declBus(c+116,"ysyx_22041461_CPU ID_reg IDreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+117,"ysyx_22041461_CPU ID_reg IDreg_inst_out", false,-1, 31,0);
        tracep->declQuad(c+118,"ysyx_22041461_CPU ID_reg IDreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+133,"ysyx_22041461_CPU ID_reg rst_r1", false,-1, 0,0);
        tracep->declBus(c+134,"ysyx_22041461_CPU ID_reg rst_r2", false,-1, 0,0);
        tracep->declBus(c+134,"ysyx_22041461_CPU ID_reg rst", false,-1, 0,0);
        tracep->declBus(c+117,"ysyx_22041461_CPU ID ID_inst", false,-1, 31,0);
        tracep->declBus(c+116,"ysyx_22041461_CPU ID ID_valid_in", false,-1, 0,0);
        tracep->declQuad(c+118,"ysyx_22041461_CPU ID ID_pc", false,-1, 63,0);
        tracep->declQuad(c+207,"ysyx_22041461_CPU ID ID_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+209,"ysyx_22041461_CPU ID ID_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+22,"ysyx_22041461_CPU ID ID_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22041461_CPU ID ID_csr_mepc", false,-1, 63,0);
        tracep->declBus(c+120,"ysyx_22041461_CPU ID ID_rd", false,-1, 4,0);
        tracep->declBus(c+121,"ysyx_22041461_CPU ID ID_rs1", false,-1, 4,0);
        tracep->declBus(c+122,"ysyx_22041461_CPU ID ID_rs2", false,-1, 4,0);
        tracep->declBus(c+123,"ysyx_22041461_CPU ID ID_csr", false,-1, 11,0);
        tracep->declQuad(c+196,"ysyx_22041461_CPU ID ID_imm", false,-1, 63,0);
        tracep->declQuad(c+124,"ysyx_22041461_CPU ID ID_zimm", false,-1, 63,0);
        tracep->declQuad(c+198,"ysyx_22041461_CPU ID ID_next_pc", false,-1, 63,0);
        tracep->declBus(c+200,"ysyx_22041461_CPU ID ID_valid_out", false,-1, 0,0);
        tracep->declBus(c+201,"ysyx_22041461_CPU ID ID_PC_ctrl", false,-1, 0,0);
        tracep->declBus(c+202,"ysyx_22041461_CPU ID ID_CD_ctrl", false,-1, 2,0);
        tracep->declBus(c+203,"ysyx_22041461_CPU ID ID_EXE_ctrl", false,-1, 4,0);
        tracep->declBus(c+204,"ysyx_22041461_CPU ID ID_EXE_src", false,-1, 2,0);
        tracep->declBus(c+205,"ysyx_22041461_CPU ID ID_MEM_ctrl", false,-1, 3,0);
        tracep->declBus(c+206,"ysyx_22041461_CPU ID ID_WB_ctrl", false,-1, 3,0);
        tracep->declBus(c+126,"ysyx_22041461_CPU ID opcode", false,-1, 6,0);
        tracep->declBus(c+127,"ysyx_22041461_CPU ID funct3", false,-1, 2,0);
        tracep->declBus(c+128,"ysyx_22041461_CPU ID funct6", false,-1, 5,0);
        tracep->declBus(c+129,"ysyx_22041461_CPU ID funct7", false,-1, 6,0);
        tracep->declBus(c+130,"ysyx_22041461_CPU ID shamt", false,-1, 5,0);
        tracep->declBus(c+292,"ysyx_22041461_CPU EXE_reg clk", false,-1, 0,0);
        tracep->declBus(c+293,"ysyx_22041461_CPU EXE_reg flush", false,-1, 0,0);
        tracep->declBus(c+297,"ysyx_22041461_CPU EXE_reg EXEreg_enable", false,-1, 0,0);
        tracep->declBus(c+218,"ysyx_22041461_CPU EXE_reg EXEreg_valid_fromCD", false,-1, 0,0);
        tracep->declBus(c+200,"ysyx_22041461_CPU EXE_reg EXEreg_valid_fromID", false,-1, 0,0);
        tracep->declBus(c+120,"ysyx_22041461_CPU EXE_reg EXEreg_rd_in", false,-1, 4,0);
        tracep->declBus(c+121,"ysyx_22041461_CPU EXE_reg EXEreg_rs1_in", false,-1, 4,0);
        tracep->declBus(c+122,"ysyx_22041461_CPU EXE_reg EXEreg_rs2_in", false,-1, 4,0);
        tracep->declBus(c+123,"ysyx_22041461_CPU EXE_reg EXEreg_csr_in", false,-1, 11,0);
        tracep->declQuad(c+196,"ysyx_22041461_CPU EXE_reg EXEreg_imm_in", false,-1, 63,0);
        tracep->declQuad(c+124,"ysyx_22041461_CPU EXE_reg EXEreg_zimm_in", false,-1, 63,0);
        tracep->declQuad(c+118,"ysyx_22041461_CPU EXE_reg EXEreg_pc_in", false,-1, 63,0);
        tracep->declBus(c+203,"ysyx_22041461_CPU EXE_reg EXEreg_EXE_ctrl_in", false,-1, 4,0);
        tracep->declBus(c+204,"ysyx_22041461_CPU EXE_reg EXEreg_EXE_src_in", false,-1, 2,0);
        tracep->declBus(c+205,"ysyx_22041461_CPU EXE_reg EXEreg_MEM_ctrl_in", false,-1, 3,0);
        tracep->declBus(c+206,"ysyx_22041461_CPU EXE_reg EXEreg_WB_ctrl_in", false,-1, 3,0);
        tracep->declBus(c+95,"ysyx_22041461_CPU EXE_reg EXEreg_valid_out", false,-1, 0,0);
        tracep->declBus(c+96,"ysyx_22041461_CPU EXE_reg EXEreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+97,"ysyx_22041461_CPU EXE_reg EXEreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+98,"ysyx_22041461_CPU EXE_reg EXEreg_rs2_out", false,-1, 4,0);
        tracep->declBus(c+99,"ysyx_22041461_CPU EXE_reg EXEreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+100,"ysyx_22041461_CPU EXE_reg EXEreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+102,"ysyx_22041461_CPU EXE_reg EXEreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+104,"ysyx_22041461_CPU EXE_reg EXEreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+106,"ysyx_22041461_CPU EXE_reg EXEreg_EXE_ctrl_out", false,-1, 4,0);
        tracep->declBus(c+107,"ysyx_22041461_CPU EXE_reg EXEreg_EXE_src_out", false,-1, 2,0);
        tracep->declBus(c+108,"ysyx_22041461_CPU EXE_reg EXEreg_MEM_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+109,"ysyx_22041461_CPU EXE_reg EXEreg_WB_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+135,"ysyx_22041461_CPU EXE_reg rst_r1", false,-1, 0,0);
        tracep->declBus(c+136,"ysyx_22041461_CPU EXE_reg rst_r2", false,-1, 0,0);
        tracep->declBus(c+136,"ysyx_22041461_CPU EXE_reg rst", false,-1, 0,0);
        tracep->declBus(c+95,"ysyx_22041461_CPU EXE EXE_valid_in", false,-1, 0,0);
        tracep->declQuad(c+178,"ysyx_22041461_CPU EXE EXE_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+302,"ysyx_22041461_CPU EXE EXE_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+180,"ysyx_22041461_CPU EXE EXE_csr_data", false,-1, 63,0);
        tracep->declQuad(c+100,"ysyx_22041461_CPU EXE EXE_imm", false,-1, 63,0);
        tracep->declQuad(c+102,"ysyx_22041461_CPU EXE EXE_zimm", false,-1, 63,0);
        tracep->declQuad(c+104,"ysyx_22041461_CPU EXE EXE_pc", false,-1, 63,0);
        tracep->declBus(c+106,"ysyx_22041461_CPU EXE EXE_ctrl", false,-1, 4,0);
        tracep->declBus(c+107,"ysyx_22041461_CPU EXE EXE_src", false,-1, 2,0);
        tracep->declQuad(c+176,"ysyx_22041461_CPU EXE EXE_out", false,-1, 63,0);
        tracep->declBus(c+95,"ysyx_22041461_CPU EXE EXE_valid_out", false,-1, 0,0);
        tracep->declQuad(c+182,"ysyx_22041461_CPU EXE src1", false,-1, 63,0);
        tracep->declQuad(c+184,"ysyx_22041461_CPU EXE src2", false,-1, 63,0);
        tracep->declArray(c+186,"ysyx_22041461_CPU EXE middle", false,-1, 127,0);
        tracep->declBus(c+292,"ysyx_22041461_CPU MEM_reg clk", false,-1, 0,0);
        tracep->declBus(c+293,"ysyx_22041461_CPU MEM_reg flush", false,-1, 0,0);
        tracep->declBus(c+299,"ysyx_22041461_CPU MEM_reg MEMreg_enable", false,-1, 0,0);
        tracep->declBus(c+95,"ysyx_22041461_CPU MEM_reg MEMreg_valid_fromEXE", false,-1, 0,0);
        tracep->declBus(c+298,"ysyx_22041461_CPU MEM_reg MEMreg_valid_fromCD", false,-1, 0,0);
        tracep->declQuad(c+176,"ysyx_22041461_CPU MEM_reg MEMreg_EXE_in", false,-1, 63,0);
        tracep->declBus(c+96,"ysyx_22041461_CPU MEM_reg MEMreg_rd_in", false,-1, 4,0);
        tracep->declBus(c+97,"ysyx_22041461_CPU MEM_reg MEMreg_rs1_in", false,-1, 4,0);
        tracep->declBus(c+98,"ysyx_22041461_CPU MEM_reg MEMreg_rs2_in", false,-1, 4,0);
        tracep->declBus(c+99,"ysyx_22041461_CPU MEM_reg MEMreg_csr_in", false,-1, 11,0);
        tracep->declQuad(c+100,"ysyx_22041461_CPU MEM_reg MEMreg_imm_in", false,-1, 63,0);
        tracep->declQuad(c+102,"ysyx_22041461_CPU MEM_reg MEMreg_zimm_in", false,-1, 63,0);
        tracep->declQuad(c+104,"ysyx_22041461_CPU MEM_reg MEMreg_pc_in", false,-1, 63,0);
        tracep->declBus(c+108,"ysyx_22041461_CPU MEM_reg MEMreg_MEM_ctrl_in", false,-1, 3,0);
        tracep->declBus(c+109,"ysyx_22041461_CPU MEM_reg MEMreg_WB_ctrl_in", false,-1, 3,0);
        tracep->declBus(c+143,"ysyx_22041461_CPU MEM_reg MEMreg_valid_out", false,-1, 0,0);
        tracep->declQuad(c+144,"ysyx_22041461_CPU MEM_reg MEMreg_EXE_out", false,-1, 63,0);
        tracep->declBus(c+146,"ysyx_22041461_CPU MEM_reg MEMreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+147,"ysyx_22041461_CPU MEM_reg MEMreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+1,"ysyx_22041461_CPU MEM_reg MEMreg_rs2_out", false,-1, 4,0);
        tracep->declBus(c+148,"ysyx_22041461_CPU MEM_reg MEMreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+149,"ysyx_22041461_CPU MEM_reg MEMreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+151,"ysyx_22041461_CPU MEM_reg MEMreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+153,"ysyx_22041461_CPU MEM_reg MEMreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+2,"ysyx_22041461_CPU MEM_reg MEMreg_MEM_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+155,"ysyx_22041461_CPU MEM_reg MEMreg_WB_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+137,"ysyx_22041461_CPU MEM_reg rst_r1", false,-1, 0,0);
        tracep->declBus(c+138,"ysyx_22041461_CPU MEM_reg rst_r2", false,-1, 0,0);
        tracep->declBus(c+138,"ysyx_22041461_CPU MEM_reg rst", false,-1, 0,0);
        tracep->declBus(c+143,"ysyx_22041461_CPU MEM MEM_valid_in", false,-1, 0,0);
        tracep->declQuad(c+144,"ysyx_22041461_CPU MEM MEM_EXE_in", false,-1, 63,0);
        tracep->declQuad(c+170,"ysyx_22041461_CPU MEM MEM_rs2_data", false,-1, 63,0);
        tracep->declBus(c+2,"ysyx_22041461_CPU MEM MEM_ctrl", false,-1, 3,0);
        tracep->declBus(c+143,"ysyx_22041461_CPU MEM MEM_valid_out", false,-1, 0,0);
        tracep->declQuad(c+156,"ysyx_22041461_CPU MEM MEM_out", false,-1, 63,0);
        tracep->declQuad(c+158,"ysyx_22041461_CPU MEM read_data1", false,-1, 63,0);
        tracep->declQuad(c+160,"ysyx_22041461_CPU MEM read_data2", false,-1, 63,0);
        tracep->declQuad(c+162,"ysyx_22041461_CPU MEM read_data", false,-1, 63,0);
        tracep->declQuad(c+172,"ysyx_22041461_CPU MEM write_data1", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22041461_CPU MEM write_data2", false,-1, 63,0);
        tracep->declBus(c+3,"ysyx_22041461_CPU MEM wmask", false,-1, 15,0);
        tracep->declBus(c+164,"ysyx_22041461_CPU MEM wmask1", false,-1, 7,0);
        tracep->declBus(c+165,"ysyx_22041461_CPU MEM wmask2", false,-1, 7,0);
        tracep->declBus(c+292,"ysyx_22041461_CPU WB_reg clk", false,-1, 0,0);
        tracep->declBus(c+293,"ysyx_22041461_CPU WB_reg flush", false,-1, 0,0);
        tracep->declBus(c+304,"ysyx_22041461_CPU WB_reg WBreg_enable", false,-1, 0,0);
        tracep->declBus(c+143,"ysyx_22041461_CPU WB_reg WBreg_valid_fromMEM", false,-1, 0,0);
        tracep->declBus(c+300,"ysyx_22041461_CPU WB_reg WBreg_valid_fromCD", false,-1, 0,0);
        tracep->declQuad(c+144,"ysyx_22041461_CPU WB_reg WBreg_EXE_in", false,-1, 63,0);
        tracep->declQuad(c+156,"ysyx_22041461_CPU WB_reg WBreg_MEM_in", false,-1, 63,0);
        tracep->declBus(c+146,"ysyx_22041461_CPU WB_reg WBreg_rd_in", false,-1, 4,0);
        tracep->declBus(c+147,"ysyx_22041461_CPU WB_reg WBreg_rs1_in", false,-1, 4,0);
        tracep->declBus(c+148,"ysyx_22041461_CPU WB_reg WBreg_csr_in", false,-1, 11,0);
        tracep->declQuad(c+149,"ysyx_22041461_CPU WB_reg WBreg_imm_in", false,-1, 63,0);
        tracep->declQuad(c+151,"ysyx_22041461_CPU WB_reg WBreg_zimm_in", false,-1, 63,0);
        tracep->declQuad(c+153,"ysyx_22041461_CPU WB_reg WBreg_pc_in", false,-1, 63,0);
        tracep->declBus(c+155,"ysyx_22041461_CPU WB_reg WBreg_WB_ctrl_in", false,-1, 3,0);
        tracep->declBus(c+4,"ysyx_22041461_CPU WB_reg WBreg_valid_out", false,-1, 0,0);
        tracep->declQuad(c+5,"ysyx_22041461_CPU WB_reg WBreg_EXE_out", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22041461_CPU WB_reg WBreg_MEM_out", false,-1, 63,0);
        tracep->declBus(c+9,"ysyx_22041461_CPU WB_reg WBreg_rd_out", false,-1, 4,0);
        tracep->declBus(c+10,"ysyx_22041461_CPU WB_reg WBreg_rs1_out", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22041461_CPU WB_reg WBreg_csr_out", false,-1, 11,0);
        tracep->declQuad(c+12,"ysyx_22041461_CPU WB_reg WBreg_imm_out", false,-1, 63,0);
        tracep->declQuad(c+14,"ysyx_22041461_CPU WB_reg WBreg_zimm_out", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22041461_CPU WB_reg WBreg_pc_out", false,-1, 63,0);
        tracep->declBus(c+18,"ysyx_22041461_CPU WB_reg WBreg_WB_ctrl_out", false,-1, 3,0);
        tracep->declBus(c+139,"ysyx_22041461_CPU WB_reg rst_r1", false,-1, 0,0);
        tracep->declBus(c+140,"ysyx_22041461_CPU WB_reg rst_r2", false,-1, 0,0);
        tracep->declBus(c+140,"ysyx_22041461_CPU WB_reg rst", false,-1, 0,0);
        tracep->declBus(c+292,"ysyx_22041461_CPU WB clk", false,-1, 0,0);
        tracep->declBus(c+293,"ysyx_22041461_CPU WB flush", false,-1, 0,0);
        tracep->declBus(c+300,"ysyx_22041461_CPU WB WB_valid", false,-1, 0,0);
        tracep->declBus(c+121,"ysyx_22041461_CPU WB WB_ID_rs1", false,-1, 4,0);
        tracep->declBus(c+122,"ysyx_22041461_CPU WB WB_ID_rs2", false,-1, 4,0);
        tracep->declBus(c+97,"ysyx_22041461_CPU WB WB_EXE_rs1", false,-1, 4,0);
        tracep->declBus(c+98,"ysyx_22041461_CPU WB WB_EXE_rs2", false,-1, 4,0);
        tracep->declBus(c+99,"ysyx_22041461_CPU WB WB_EXE_csr", false,-1, 11,0);
        tracep->declBus(c+1,"ysyx_22041461_CPU WB WB_MEM_rs2", false,-1, 4,0);
        tracep->declQuad(c+5,"ysyx_22041461_CPU WB WB_EXE_in", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22041461_CPU WB WB_MEM_in", false,-1, 63,0);
        tracep->declBus(c+9,"ysyx_22041461_CPU WB WB_rd", false,-1, 4,0);
        tracep->declBus(c+10,"ysyx_22041461_CPU WB WB_rs1", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22041461_CPU WB WB_csr", false,-1, 11,0);
        tracep->declQuad(c+12,"ysyx_22041461_CPU WB WB_imm", false,-1, 63,0);
        tracep->declQuad(c+14,"ysyx_22041461_CPU WB WB_zimm", false,-1, 63,0);
        tracep->declQuad(c+16,"ysyx_22041461_CPU WB WB_pc", false,-1, 63,0);
        tracep->declBus(c+18,"ysyx_22041461_CPU WB WB_ctrl", false,-1, 3,0);
        tracep->declQuad(c+207,"ysyx_22041461_CPU WB WB_ID_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+209,"ysyx_22041461_CPU WB WB_ID_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+22,"ysyx_22041461_CPU WB WB_ID_csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22041461_CPU WB WB_ID_csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+178,"ysyx_22041461_CPU WB WB_EXE_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+302,"ysyx_22041461_CPU WB WB_EXE_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+180,"ysyx_22041461_CPU WB WB_EXE_csr_data", false,-1, 63,0);
        tracep->declQuad(c+170,"ysyx_22041461_CPU WB WB_MEM_rs2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+26+i*2,"ysyx_22041461_CPU WB x", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+219+i*2,"ysyx_22041461_CPU WB d", true,(i+0), 63,0);}}
        tracep->declQuad(c+22,"ysyx_22041461_CPU WB mtvec", false,-1, 63,0);
        tracep->declQuad(c+283,"ysyx_22041461_CPU WB mtvec_next", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22041461_CPU WB mepc", false,-1, 63,0);
        tracep->declQuad(c+285,"ysyx_22041461_CPU WB mepc_next", false,-1, 63,0);
        tracep->declQuad(c+90,"ysyx_22041461_CPU WB mcause", false,-1, 63,0);
        tracep->declQuad(c+287,"ysyx_22041461_CPU WB mcause_next", false,-1, 63,0);
        tracep->declQuad(c+92,"ysyx_22041461_CPU WB mstatus", false,-1, 63,0);
        tracep->declQuad(c+289,"ysyx_22041461_CPU WB mstatus_next", false,-1, 63,0);
        tracep->declBus(c+291,"ysyx_22041461_CPU WB i", false,-1, 31,0);
        tracep->declBus(c+94,"ysyx_22041461_CPU WB j", false,-1, 31,0);
        tracep->declBus(c+141,"ysyx_22041461_CPU WB rst_r1", false,-1, 0,0);
        tracep->declBus(c+142,"ysyx_22041461_CPU WB rst_r2", false,-1, 0,0);
        tracep->declBus(c+142,"ysyx_22041461_CPU WB rst", false,-1, 0,0);
        tracep->declBus(c+202,"ysyx_22041461_CPU CD CD_ctrl", false,-1, 2,0);
        tracep->declBus(c+116,"ysyx_22041461_CPU CD CD_ID_valid_in", false,-1, 0,0);
        tracep->declBus(c+121,"ysyx_22041461_CPU CD CD_ID_rs1", false,-1, 4,0);
        tracep->declBus(c+122,"ysyx_22041461_CPU CD CD_ID_rs2", false,-1, 4,0);
        tracep->declBus(c+95,"ysyx_22041461_CPU CD CD_EXE_valid_in", false,-1, 0,0);
        tracep->declBus(c+106,"ysyx_22041461_CPU CD CD_EXE_ctrl", false,-1, 4,0);
        tracep->declBus(c+107,"ysyx_22041461_CPU CD CD_EXE_src", false,-1, 2,0);
        tracep->declBus(c+109,"ysyx_22041461_CPU CD CD_EXE_WB_ctrl", false,-1, 3,0);
        tracep->declBus(c+96,"ysyx_22041461_CPU CD CD_EXE_rd", false,-1, 4,0);
        tracep->declBus(c+97,"ysyx_22041461_CPU CD CD_EXE_rs1", false,-1, 4,0);
        tracep->declBus(c+98,"ysyx_22041461_CPU CD CD_EXE_rs2", false,-1, 4,0);
        tracep->declBus(c+99,"ysyx_22041461_CPU CD CD_EXE_csr", false,-1, 11,0);
        tracep->declBus(c+143,"ysyx_22041461_CPU CD CD_MEM_valid_in", false,-1, 0,0);
        tracep->declBus(c+2,"ysyx_22041461_CPU CD CD_MEM_ctrl", false,-1, 3,0);
        tracep->declBus(c+155,"ysyx_22041461_CPU CD CD_MEM_WB_ctrl", false,-1, 3,0);
        tracep->declBus(c+146,"ysyx_22041461_CPU CD CD_MEM_rd", false,-1, 4,0);
        tracep->declBus(c+1,"ysyx_22041461_CPU CD CD_MEM_rs2", false,-1, 4,0);
        tracep->declBus(c+148,"ysyx_22041461_CPU CD CD_MEM_csr", false,-1, 11,0);
        tracep->declBus(c+4,"ysyx_22041461_CPU CD CD_WB_valid_in", false,-1, 0,0);
        tracep->declBus(c+18,"ysyx_22041461_CPU CD CD_WB_ctrl", false,-1, 3,0);
        tracep->declBus(c+9,"ysyx_22041461_CPU CD CD_WB_rd", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22041461_CPU CD CD_WB_csr", false,-1, 11,0);
        tracep->declBus(c+215,"ysyx_22041461_CPU CD CD_IF_valid", false,-1, 0,0);
        tracep->declBus(c+216,"ysyx_22041461_CPU CD CD_IF_enable", false,-1, 0,0);
        tracep->declBus(c+304,"ysyx_22041461_CPU CD CD_ID_valid", false,-1, 0,0);
        tracep->declBus(c+217,"ysyx_22041461_CPU CD CD_ID_enable", false,-1, 0,0);
        tracep->declBus(c+218,"ysyx_22041461_CPU CD CD_EXE_valid", false,-1, 0,0);
        tracep->declBus(c+297,"ysyx_22041461_CPU CD CD_EXE_enable", false,-1, 0,0);
        tracep->declBus(c+298,"ysyx_22041461_CPU CD CD_MEM_valid", false,-1, 0,0);
        tracep->declBus(c+299,"ysyx_22041461_CPU CD CD_MEM_enable", false,-1, 0,0);
        tracep->declBus(c+300,"ysyx_22041461_CPU CD CD_WB_valid", false,-1, 0,0);
        tracep->declBus(c+211,"ysyx_22041461_CPU CD ID_rs1_read", false,-1, 0,0);
        tracep->declBus(c+212,"ysyx_22041461_CPU CD ID_rs2_read", false,-1, 0,0);
        tracep->declBus(c+213,"ysyx_22041461_CPU CD ID_mtvec_read", false,-1, 0,0);
        tracep->declBus(c+214,"ysyx_22041461_CPU CD ID_mepc_read", false,-1, 0,0);
        tracep->declBus(c+110,"ysyx_22041461_CPU CD EXE_rd_write", false,-1, 0,0);
        tracep->declBus(c+111,"ysyx_22041461_CPU CD EXE_csr_write", false,-1, 0,0);
        tracep->declBus(c+112,"ysyx_22041461_CPU CD EXE_ecall_write", false,-1, 0,0);
        tracep->declBus(c+113,"ysyx_22041461_CPU CD EXE_rs1_read", false,-1, 0,0);
        tracep->declBus(c+114,"ysyx_22041461_CPU CD EXE_rs2_read", false,-1, 0,0);
        tracep->declBus(c+115,"ysyx_22041461_CPU CD EXE_csr_read", false,-1, 0,0);
        tracep->declBus(c+166,"ysyx_22041461_CPU CD MEM_rd_write", false,-1, 0,0);
        tracep->declBus(c+167,"ysyx_22041461_CPU CD MEM_csr_write", false,-1, 0,0);
        tracep->declBus(c+168,"ysyx_22041461_CPU CD MEM_ecall_write", false,-1, 0,0);
        tracep->declBus(c+169,"ysyx_22041461_CPU CD MEM_rs2_read", false,-1, 0,0);
        tracep->declBus(c+19,"ysyx_22041461_CPU CD WB_rd_write", false,-1, 0,0);
        tracep->declBus(c+20,"ysyx_22041461_CPU CD WB_csr_write", false,-1, 0,0);
        tracep->declBus(c+21,"ysyx_22041461_CPU CD WB_ecall_write", false,-1, 0,0);
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
        tracep->fullCData(oldp+1,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs2_out),5);
        tracep->fullCData(oldp+2,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_MEM_ctrl_out),4);
        tracep->fullSData(oldp+3,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask),16);
        tracep->fullBit(oldp+4,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_valid_out));
        tracep->fullQData(oldp+5,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_EXE_out),64);
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_MEM_out),64);
        tracep->fullCData(oldp+9,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rd_out),5);
        tracep->fullCData(oldp+10,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_rs1_out),5);
        tracep->fullSData(oldp+11,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_csr_out),12);
        tracep->fullQData(oldp+12,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_imm_out),64);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_zimm_out),64);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_pc_out),64);
        tracep->fullCData(oldp+18,(vlSelf->ysyx_22041461_CPU__DOT__WBreg_WB_ctrl_out),4);
        tracep->fullBit(oldp+19,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_rd_write));
        tracep->fullBit(oldp+20,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_csr_write));
        tracep->fullBit(oldp+21,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__WB_ecall_write));
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec),64);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[0]),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[1]),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[2]),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[3]),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[4]),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[5]),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[6]),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[7]),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[8]),64);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[9]),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[10]),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[11]),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[12]),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[13]),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[14]),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[15]),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[16]),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[17]),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[18]),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[19]),64);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[20]),64);
        tracep->fullQData(oldp+68,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[21]),64);
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[22]),64);
        tracep->fullQData(oldp+72,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[23]),64);
        tracep->fullQData(oldp+74,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[24]),64);
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[25]),64);
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[26]),64);
        tracep->fullQData(oldp+80,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[27]),64);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[28]),64);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[29]),64);
        tracep->fullQData(oldp+86,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[30]),64);
        tracep->fullQData(oldp+88,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x[31]),64);
        tracep->fullQData(oldp+90,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause),64);
        tracep->fullQData(oldp+92,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus),64);
        tracep->fullIData(oldp+94,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__j),32);
        tracep->fullBit(oldp+95,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_valid_out));
        tracep->fullCData(oldp+96,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rd_out),5);
        tracep->fullCData(oldp+97,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs1_out),5);
        tracep->fullCData(oldp+98,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out),5);
        tracep->fullSData(oldp+99,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_csr_out),12);
        tracep->fullQData(oldp+100,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_imm_out),64);
        tracep->fullQData(oldp+102,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_zimm_out),64);
        tracep->fullQData(oldp+104,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_pc_out),64);
        tracep->fullCData(oldp+106,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_ctrl_out),5);
        tracep->fullCData(oldp+107,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_EXE_src_out),3);
        tracep->fullCData(oldp+108,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_MEM_ctrl_out),4);
        tracep->fullCData(oldp+109,(vlSelf->ysyx_22041461_CPU__DOT__EXEreg_WB_ctrl_out),4);
        tracep->fullBit(oldp+110,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rd_write));
        tracep->fullBit(oldp+111,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_write));
        tracep->fullBit(oldp+112,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_ecall_write));
        tracep->fullBit(oldp+113,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs1_read));
        tracep->fullBit(oldp+114,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_rs2_read));
        tracep->fullBit(oldp+115,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__EXE_csr_read));
        tracep->fullBit(oldp+116,(vlSelf->ysyx_22041461_CPU__DOT__IDreg_valid_out));
        tracep->fullIData(oldp+117,(vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out),32);
        tracep->fullQData(oldp+118,(vlSelf->ysyx_22041461_CPU__DOT__IDreg_pc_out),64);
        tracep->fullCData(oldp+120,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                              >> 7U))),5);
        tracep->fullCData(oldp+121,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+122,((0x1fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                              >> 0x14U))),5);
        tracep->fullSData(oldp+123,((vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+124,((QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                                        >> 0xfU))))),64);
        tracep->fullCData(oldp+126,((0x7fU & vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out)),7);
        tracep->fullCData(oldp+127,((7U & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+128,((vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                     >> 0x1aU)),6);
        tracep->fullCData(oldp+129,((vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+130,((0x3fU & (vlSelf->ysyx_22041461_CPU__DOT__IDreg_inst_out 
                                              >> 0x14U))),6);
        tracep->fullBit(oldp+131,(vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r1));
        tracep->fullBit(oldp+132,(vlSelf->ysyx_22041461_CPU__DOT__IF_reg__DOT__rst_r2));
        tracep->fullBit(oldp+133,(vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r1));
        tracep->fullBit(oldp+134,(vlSelf->ysyx_22041461_CPU__DOT__ID_reg__DOT__rst_r2));
        tracep->fullBit(oldp+135,(vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r1));
        tracep->fullBit(oldp+136,(vlSelf->ysyx_22041461_CPU__DOT__EXE_reg__DOT__rst_r2));
        tracep->fullBit(oldp+137,(vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r1));
        tracep->fullBit(oldp+138,(vlSelf->ysyx_22041461_CPU__DOT__MEM_reg__DOT__rst_r2));
        tracep->fullBit(oldp+139,(vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r1));
        tracep->fullBit(oldp+140,(vlSelf->ysyx_22041461_CPU__DOT__WB_reg__DOT__rst_r2));
        tracep->fullBit(oldp+141,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r1));
        tracep->fullBit(oldp+142,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__rst_r2));
        tracep->fullBit(oldp+143,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_valid_out));
        tracep->fullQData(oldp+144,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_EXE_out),64);
        tracep->fullCData(oldp+146,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rd_out),5);
        tracep->fullCData(oldp+147,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_rs1_out),5);
        tracep->fullSData(oldp+148,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_csr_out),12);
        tracep->fullQData(oldp+149,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_imm_out),64);
        tracep->fullQData(oldp+151,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_zimm_out),64);
        tracep->fullQData(oldp+153,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_pc_out),64);
        tracep->fullCData(oldp+155,(vlSelf->ysyx_22041461_CPU__DOT__MEMreg_WB_ctrl_out),4);
        tracep->fullQData(oldp+156,(vlSelf->ysyx_22041461_CPU__DOT__MEM_out),64);
        tracep->fullQData(oldp+158,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data1),64);
        tracep->fullQData(oldp+160,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data2),64);
        tracep->fullQData(oldp+162,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__read_data),64);
        tracep->fullCData(oldp+164,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask1),8);
        tracep->fullCData(oldp+165,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__wmask2),8);
        tracep->fullBit(oldp+166,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rd_write));
        tracep->fullBit(oldp+167,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_csr_write));
        tracep->fullBit(oldp+168,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_ecall_write));
        tracep->fullBit(oldp+169,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__MEM_rs2_read));
        tracep->fullQData(oldp+170,(vlSelf->ysyx_22041461_CPU__DOT__WB_MEM_rs2_data),64);
        tracep->fullQData(oldp+172,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data1),64);
        tracep->fullQData(oldp+174,(vlSelf->ysyx_22041461_CPU__DOT__MEM__DOT__write_data2),64);
        tracep->fullQData(oldp+176,(vlSelf->ysyx_22041461_CPU__DOT__EXE_out),64);
        tracep->fullQData(oldp+178,(vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_rs1_data),64);
        tracep->fullQData(oldp+180,(vlSelf->ysyx_22041461_CPU__DOT__WB_EXE_csr_data),64);
        tracep->fullQData(oldp+182,(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src1),64);
        tracep->fullQData(oldp+184,(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__src2),64);
        tracep->fullWData(oldp+186,(vlSelf->ysyx_22041461_CPU__DOT__EXE__DOT__middle),128);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc),64);
        tracep->fullBit(oldp+192,(vlSelf->ysyx_22041461_CPU__DOT__IF_valid_out));
        tracep->fullIData(oldp+193,(((0U == (7U & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc)))
                                      ? (IData)(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__rinst)
                                      : ((0U == (3U 
                                                 & (IData)(vlSelf->ysyx_22041461_CPU__DOT__IFreg_pc)))
                                          ? (IData)(
                                                    (vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__rinst 
                                                     >> 0x20U))
                                          : 0U))),32);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22041461_CPU__DOT__IF__DOT__rinst),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22041461_CPU__DOT__ID_imm),64);
        tracep->fullQData(oldp+198,(vlSelf->ysyx_22041461_CPU__DOT__ID_next_pc),64);
        tracep->fullBit(oldp+200,(vlSelf->ysyx_22041461_CPU__DOT__ID_valid_out));
        tracep->fullBit(oldp+201,(vlSelf->ysyx_22041461_CPU__DOT__ID_PC_ctrl));
        tracep->fullCData(oldp+202,(vlSelf->ysyx_22041461_CPU__DOT__ID_CD_ctrl),3);
        tracep->fullCData(oldp+203,(vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_ctrl),5);
        tracep->fullCData(oldp+204,(vlSelf->ysyx_22041461_CPU__DOT__ID_EXE_src),3);
        tracep->fullCData(oldp+205,(vlSelf->ysyx_22041461_CPU__DOT__ID_MEM_ctrl),4);
        tracep->fullCData(oldp+206,(vlSelf->ysyx_22041461_CPU__DOT__ID_WB_ctrl),4);
        tracep->fullQData(oldp+207,(vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs1_data),64);
        tracep->fullQData(oldp+209,(vlSelf->ysyx_22041461_CPU__DOT__WB_ID_rs2_data),64);
        tracep->fullBit(oldp+211,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs1_read));
        tracep->fullBit(oldp+212,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_rs2_read));
        tracep->fullBit(oldp+213,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mtvec_read));
        tracep->fullBit(oldp+214,(vlSelf->ysyx_22041461_CPU__DOT__CD__DOT__ID_mepc_read));
        tracep->fullBit(oldp+215,(vlSelf->ysyx_22041461_CPU__DOT__CD_IF_valid));
        tracep->fullBit(oldp+216,(vlSelf->ysyx_22041461_CPU__DOT__CD_IF_enable));
        tracep->fullBit(oldp+217,(vlSelf->ysyx_22041461_CPU__DOT__CD_ID_enable));
        tracep->fullBit(oldp+218,(vlSelf->ysyx_22041461_CPU__DOT__CD_EXE_valid));
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[0]),64);
        tracep->fullQData(oldp+221,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[1]),64);
        tracep->fullQData(oldp+223,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[2]),64);
        tracep->fullQData(oldp+225,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[3]),64);
        tracep->fullQData(oldp+227,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[4]),64);
        tracep->fullQData(oldp+229,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[5]),64);
        tracep->fullQData(oldp+231,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[6]),64);
        tracep->fullQData(oldp+233,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[7]),64);
        tracep->fullQData(oldp+235,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[8]),64);
        tracep->fullQData(oldp+237,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[9]),64);
        tracep->fullQData(oldp+239,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[10]),64);
        tracep->fullQData(oldp+241,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[11]),64);
        tracep->fullQData(oldp+243,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[12]),64);
        tracep->fullQData(oldp+245,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[13]),64);
        tracep->fullQData(oldp+247,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[14]),64);
        tracep->fullQData(oldp+249,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[15]),64);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[16]),64);
        tracep->fullQData(oldp+253,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[17]),64);
        tracep->fullQData(oldp+255,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[18]),64);
        tracep->fullQData(oldp+257,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[19]),64);
        tracep->fullQData(oldp+259,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[20]),64);
        tracep->fullQData(oldp+261,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[21]),64);
        tracep->fullQData(oldp+263,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[22]),64);
        tracep->fullQData(oldp+265,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[23]),64);
        tracep->fullQData(oldp+267,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[24]),64);
        tracep->fullQData(oldp+269,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[25]),64);
        tracep->fullQData(oldp+271,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[26]),64);
        tracep->fullQData(oldp+273,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[27]),64);
        tracep->fullQData(oldp+275,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[28]),64);
        tracep->fullQData(oldp+277,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[29]),64);
        tracep->fullQData(oldp+279,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[30]),64);
        tracep->fullQData(oldp+281,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__d[31]),64);
        tracep->fullQData(oldp+283,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mtvec_next),64);
        tracep->fullQData(oldp+285,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mepc_next),64);
        tracep->fullQData(oldp+287,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mcause_next),64);
        tracep->fullQData(oldp+289,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__mstatus_next),64);
        tracep->fullIData(oldp+291,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__i),32);
        tracep->fullBit(oldp+292,(vlSelf->clk));
        tracep->fullBit(oldp+293,(vlSelf->rst));
        tracep->fullQData(oldp+294,(vlSelf->pc),64);
        tracep->fullIData(oldp+296,(vlSelf->inst),32);
        tracep->fullBit(oldp+297,(vlSelf->ysyx_22041461_CPU__DOT__CD_EXE_enable));
        tracep->fullBit(oldp+298,(vlSelf->ysyx_22041461_CPU__DOT__CD_MEM_valid));
        tracep->fullBit(oldp+299,(vlSelf->ysyx_22041461_CPU__DOT__CD_MEM_enable));
        tracep->fullBit(oldp+300,(vlSelf->ysyx_22041461_CPU__DOT__CD_WB_valid));
        tracep->fullBit(oldp+301,(vlSelf->ysyx_22041461_CPU__DOT__IFreg_valid_out));
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22041461_CPU__DOT__WB__DOT__x
                                    [vlSelf->ysyx_22041461_CPU__DOT__EXEreg_rs2_out]),64);
        tracep->fullBit(oldp+304,(1U));
    }
}
